#pragma once
#include <array>
#include<iostream>

class SudokuPuzzle
{
public:
	
	SudokuPuzzle() = delete;
	SudokuPuzzle(int);

};

class NineByNine : public SudokuPuzzle
{
private: 
	std::array<std::array<int, 9>, 9> theGrid;
	
public:

	std::array<std::array<int, 9>, 9> getGrid();

	NineByNine();
	friend std::ostream& operator << (std::ostream& os, const NineByNine& rhsPuzzle);

};

class FourByFour : public SudokuPuzzle
{
private:
	std::array<std::array<int, 4>, 4> theGrid;

public:

	std::array<std::array<int, 4>, 4> getGrid();

	FourByFour();
	friend std::ostream& operator << (std::ostream& os, const FourByFour& rhsPuzzle);

};

class SixteenBySixteen : public SudokuPuzzle
{
private:
	std::array<std::array<int, 16>, 16> theGrid;

public: 

	std::array<std::array<int, 16>, 16> getGrid();

	SixteenBySixteen();
	friend std::ostream& operator << (std::ostream& os, const SixteenBySixteen& rhsPuzzle);

};