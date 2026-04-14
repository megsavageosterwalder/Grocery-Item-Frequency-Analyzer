#ifndef GROCERY_TRACKER_H
#define GROCERY_TRACKER_H

#include <string>
#include <map>

class GroceryTracker {
public:
    // Load items from a text file (one item per line).
    // Returns true if load succeeded.
    bool LoadFromFile(const std::string& filename);

    // Write "item count" lines to frequency.dat (or given path). Returns true on success.
    bool WriteFrequencyDat(const std::string& outPath = "frequency.dat") const;

    // Case-insensitive count for a single item.
    int GetCount(const std::string& item) const;

    // Print "item count" for all items (alphabetical).
    void PrintAllCounts() const;

    // Print histogram using the given symbol (default '*').
    void PrintHistogram(char symbol = '*') const;

private:
    std::map<std::string, int> freq_;        // normalized item -> count

    static std::string ToLower(const std::string& s);
};

#endif // GROCERY_TRACKER_H