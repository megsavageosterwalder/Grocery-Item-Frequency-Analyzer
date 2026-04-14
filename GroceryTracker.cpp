#include "GroceryTracker.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <cctype>

std::string GroceryTracker::ToLower(const std::string& s) {
    std::string t = s;
    std::transform(t.begin(), t.end(), t.begin(),
        [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
    return t;
}

bool GroceryTracker::LoadFromFile(const std::string& filename) {
    std::ifstream in(filename);
    if (!in.is_open()) {
        std::cerr << "ERROR: Could not open input file: " << filename << "\n";
        return false;
    }

    freq_.clear();
    std::string line;

    // File format: one item name per line
    while (std::getline(in, line)) {
        // trim whitespace
        line.erase(line.begin(), std::find_if(line.begin(), line.end(), [](unsigned char c) {return !std::isspace(c);}));
        line.erase(std::find_if(line.rbegin(), line.rend(), [](unsigned char c) {return !std::isspace(c);}).base(), line.end());
        if (line.empty()) continue;

        // normalize to lowercase so lookups are case-insensitive
        freq_[ToLower(line)] += 1;
    }

    return true;
}

bool GroceryTracker::WriteFrequencyDat(const std::string& outPath) const {
    std::ofstream out(outPath);
    if (!out.is_open()) {
        std::cerr << "ERROR: Could not write to " << outPath << "\n";
        return false;
    }
    for (const auto& kv : freq_) {
        // write back with lowercased key (consistent with lookup)
        out << kv.first << " " << kv.second << "\n";
    }
    return true;
}

int GroceryTracker::GetCount(const std::string& item) const {
    std::string key = ToLower(item);
    auto it = freq_.find(key);
    return (it == freq_.end()) ? 0 : it->second;
}

void GroceryTracker::PrintAllCounts() const {
    for (const auto& kv : freq_) {
        std::cout << kv.first << " " << kv.second << "\n";
    }
}

void GroceryTracker::PrintHistogram(char symbol) const {
    for (const auto& kv : freq_) {
        std::cout << kv.first << " ";
        for (int i = 0; i < kv.second; ++i) std::cout << symbol;
        std::cout << "\n";
    }
}