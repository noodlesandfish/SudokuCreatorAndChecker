#include <iostream>
#include "SudokuPuzzle.h"
#include <cstdlib>

int main()
{
	
	FourByFour puzzle1;

	std::cout << puzzle1;

	int row = 1;
	int col = 4;
	char input = 'A';
	
	std::cout << "\nPlease enter the row of the space to be changed:\n";
	std::cin >> row;

	std::cout << "Now the column:\n";
	std::cin >> col;

	std::cout << "Lastly, enter the new value of the space:\n";
	std::cin >> input;

	puzzle1.changeSpace(row, col, input);
	std::cout << puzzle1;

	std::cout << "Please enter the number of column to be changed:\n";
	std::cin >> col;


	char l1{};
	char l2{};
	char l3{};
	char l4{};

	std::cout << "Now enter each of the new values for the column from top to bottom:\n\nValue #1:\n";
	std::cin >> l1;
	std::cout << "Value #2:\n";
	std::cin >> l2;
	std::cout << "Value #3:\n";
	std::cin >> l3;
	std::cout << "Value #4:\n";
	std::cin >> l4;

	puzzle1.changeGroup('c', col, l1, l2, l3, l4);
	std::cout << puzzle1;

}
