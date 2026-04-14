# 🛒 Grocery Item Frequency Analyzer

A C++ application that reads grocery item data and analyzes how frequently each item appears using file input and data structures.

---

## 📌 Overview
This project reads grocery item data from a text file, analyzes item frequency, and provides multiple ways to display the results. The program uses a menu-driven interface to allow users to interact with the data.

Users can:
- Search for specific items (case-insensitive)
- View all item frequencies
- Display a histogram of item counts

---

## 🚀 Features
- Read grocery data from an input file
- Count item frequency using `std::map`
- Case-insensitive item searching
- Display all item counts
- Generate a text-based histogram
- Output results to a backup file (`frequency.dat`)

---

## 🛠️ Technologies Used
- **C++**
- Object-Oriented Programming (OOP)
- Standard Template Library (STL - `std::map`)
- File Input/Output

---

## 🧠 Concepts Demonstrated
- Modular programming
- Functions and control structures (loops, conditionals)
- Data structures (`std::map`)
- File handling (input/output)
- User interaction through menus

---

## 📂 Project Structure
├── main.cpp
├── GroceryTracker.cpp
├── GroceryTracker.h
├── CS210_Project_Three_Input_File.txt
└── frequency.dat

---

## ▶️ How to Run
1. Clone the repository:
   ```bash
   git clone https://github.com/megsavageosterwalder/grocery-item-frequency-analyzer.git
2.	Navigate to the project folder:
   cd grocery-item-frequency-analyzer
3.	Compile the program:
   g++ main.cpp GroceryTracker.cpp -o GroceryTracker
4.	Run the program:
   ./GroceryTracker

---

## 📊 How It Works
1. Reads grocery items from a text file (one item per line)
2. Converts all items to lowercase for consistent counting
3. Stores item frequencies using a `std::map`
4. Provides menu options to:
   - Search for an item
   - Display all frequencies
   - Show a histogram
   - Exit the program

⸻

📈 Future Enhancements
	•	Sort items by frequency (highest to lowest)
	•	Improve user interface
	•	Support additional file formats
	•	Add data visualization

⸻

👩‍💻 Author

Meg Savage-Osterwalder
Computer Science Student | Aspiring Software Engineer

⸻

⭐ Notes

This project was completed as part of SNHU coursework and demonstrates practical use of data structures and file handling in C++.
