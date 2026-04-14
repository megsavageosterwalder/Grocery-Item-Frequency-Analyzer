Grocery Item Frequency Analyzer (C++)

Overview

This project is a C++ application that reads grocery item data from a text file, analyzes how frequently each item appears, and provides multiple ways to display the results. The program uses a menu-driven interface to allow users to search for specific items, view all item counts, and display a histogram.

Features
	•	Read grocery data from an input file
	•	Count item frequency using std::map
	•	Search for a specific item (case-insensitive)
	•	Display all item counts
	•	Generate a text-based histogram
	•	Output results to a backup file (frequency.dat)

Technologies Used
	•	C++
	•	Object-Oriented Programming (OOP)
	•	STL (std::map)
	•	File Input/Output

How It Works
	1.	The program reads a text file containing grocery items (one item per line)
	2.	Each item is normalized to lowercase for consistent counting
	3.	A std::map stores each item and its frequency
	4.	Users interact with the program through a menu:
	•	Option 1: Search for a specific item
	•	Option 2: Display all item frequencies
	•	Option 3: Display a histogram
	•	Option 4: Exit the program

How to Run
	1.	Clone the repository:
git clone https://github.com/megsavageosterwalder/grocery-item-frequency-analyzer.git
	2.	Navigate to the project folder:
cd grocery-item-frequency-analyzer
	3.	Compile the program:
g++ main.cpp GroceryTracker.cpp -o GroceryTracker
	4.	Run the program:
./GroceryTracker

File Structure
	•	main.cpp – Entry point and menu logic
	•	GroceryTracker.cpp – Core functionality
	•	GroceryTracker.h – Class definition
	•	CS210_Project_Three_Input_File.txt – Input data file
	•	frequency.dat – Output file with item counts

Example Output

The program allows users to:
	•	Search for individual grocery items
	•	View a full list of item frequencies
	•	Display a histogram representing item counts

Future Improvements
	•	Add sorting (e.g., most frequent items first)
	•	Improve user interface
	•	Support additional file formats

Author

Meg Savage-Osterwalder
