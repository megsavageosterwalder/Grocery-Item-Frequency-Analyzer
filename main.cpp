/*
 * Corner Grocer - CS210 Project Three
 * Implements a menu-driven item frequency analyzer.
 * Requirements met:
 *  - Class with public/private sections (GroceryTracker)
 *  - Uses map to count items
 *  - Option 1: Query single item frequency (case-insensitive)
 *  - Option 2: Print all "item count" lines
 *  - Option 3: Print histogram with asterisks
 *  - Option 4: Exit
 *  - Automatically creates/updates frequency.dat at startup
 *  - Basic input validation
 */

#include <iostream>
#include <limits>
#include "GroceryTracker.h"

static void ClearInput() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    const std::string kInputFile = "CS210_Project_Three_Input_File.txt";

    GroceryTracker tracker;
    if (!tracker.LoadFromFile(kInputFile)) {
        std::cout << "Make sure the input file is next to the executable or update the path in main.cpp.\n";
        return 1;
    }

    // Create/refresh frequency.dat on startup as a backup
    tracker.WriteFrequencyDat("frequency.dat");

    int choice = 0;
    while (true) {
        std::cout << "\n=== Corner Grocer Menu ===\n"
            << "1. Search for item frequency\n"
            << "2. Print all item frequencies\n"
            << "3. Print histogram\n"
            << "4. Exit\n"
            << "Enter choice (1-4): ";

        if (!(std::cin >> choice)) {
            std::cout << "Invalid input. Please enter a number 1-4.\n";
            ClearInput();
            continue;
        }
        ClearInput();

        if (choice == 1) {
            std::string item;
            std::cout << "Enter item name: ";
            std::getline(std::cin, item);
            int cnt = tracker.GetCount(item);
            std::cout << item << " was purchased " << cnt << " time"
                << (cnt == 1 ? "" : "s") << ".\n";
        }
        else if (choice == 2) {
            tracker.PrintAllCounts();
        }
        else if (choice == 3) {
            tracker.PrintHistogram('*');
        }
        else if (choice == 4) {
            std::cout << "Goodbye!\n";
            break;
        }
        else {
            std::cout << "Please choose 1-4.\n";
        }
    }

    return 0;
}