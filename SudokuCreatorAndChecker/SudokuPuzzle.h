#pragma once
#include <array>
#include<iostream>


class NineByNine
{
private: 
	//9 rows, 9 columns, 9 boxes 

	//rows
	std::array<char, 9> row1;
	std::array<char, 9> row2;
	std::array<char, 9> row3;
	
	std::array<char, 9> row4;
	std::array<char, 9> row5;
	std::array<char, 9> row6;
	
	std::array<char, 9> row7;
	std::array<char, 9> row8;
	std::array<char, 9> row9;

	//columns
	std::array<char, 9> col1;
	std::array<char, 9> col2;
	std::array<char, 9> col3;
	
	std::array<char, 9> col4;
	std::array<char, 9> col5;
	std::array<char, 9> col6;
	
	std::array<char, 9> col7;
	std::array<char, 9> col8;
	std::array<char, 9> col9;

	//boxes
	std::array<char, 9> box1;
	std::array<char, 9> box2;
	std::array<char, 9> box3;
	
	std::array<char, 9> box4;
	std::array<char, 9> box5;
	std::array<char, 9> box6;
	
	std::array<char, 9> box7;
	std::array<char, 9> box8;
	std::array<char, 9> box9;

	//for display purposes
	std::string topBorder = " C 1 2 3 4 5 6 7 8 9\nR  _ _ _ _ _ _ _ _ _";
	std::string rowStart = "  |";
	std::string middleBorder = "  |- - -+- - -+- - -|";
	std::string bottomBorder = "   - - - - - - - - -";

	//display rows
	std::string R1 = {};
	std::string R2 = {}; 
	std::string R3 = {}; 
	std::string R4 = {}; 
	std::string R5 = {}; 
	std::string R6 = {}; 
	std::string R7 = {}; 
	std::string R8 = {}; 
	std::string R9 = {}; 

public:

	void changeSpace(int, int, char);

	//NineByNine();
	friend std::ostream& operator << (std::ostream& os, const NineByNine& rhsPuzzle);

};

class FourByFour
{
private:
	//4 rows, 4 columns, 4 boxes
	
	//real rows
	std::array<char, 4> row1{'#','#','#','#'};
	std::array<char, 4> row2{'#','#','#','#'};

	std::array<char, 4> row3{'#','#','#','#'};
	std::array<char, 4> row4{'#','#','#','#'};

	//columns
	std::array<char*, 4> col1{ &row1[0], &row2[0], &row3[0], &row4[0] };
	std::array<char*, 4> col2{ &row1[1], &row2[1], &row3[1], &row4[1] };
	
	std::array<char*, 4> col3{ &row1[2], &row2[2], &row3[2], &row4[2] };
	std::array<char*, 4> col4{ &row1[3], &row2[3], &row3[3], &row4[3] };
	
	//boxes 
	std::array<char*, 4> box1{ &row1[0], &row1[1], &row2[0], &row2[1] };
	std::array<char*, 4> box2{ &row1[2], &row1[3], &row2[2], &row2[3] };
	
	std::array<char*, 4> box3{ &row3[0], &row3[1], &row4[0], &row4[1] };
	std::array<char*, 4> box4{ &row3[2], &row3[3], &row4[2], &row4[3] };
	
	//for display purposes
	std::string topBorder =    " C 1 2 3 4\nR  _ _ _ _";
	std::string rowStart =     " |";
	std::string middleBorder = "  |- -+- -|";
	std::string bottomBorder = "   - - - -";

public:

	void changeSpace(int, int, char);
	void changeGroup(char, int, char, char, char, char); //row, column, or box 


	FourByFour();
	friend std::ostream& operator << (std::ostream& os, const FourByFour& rhsPuzzle);

};

class SixteenBySixteen
{
private:
	//16 rows, 16 columns, 16 boxes

	//real rows
	std::array<char, 16> row1;
	std::array<char, 16> row2;
	std::array<char, 16> row3;
	std::array<char, 16> row4;

	std::array<char, 16> row5;
	std::array<char, 16> row6;
	std::array<char, 16> row7;
	std::array<char, 16> row8;

	std::array<char, 16> row9;
	std::array<char, 16> row10;
	std::array<char, 16> row11;
	std::array<char, 16> row12;

	std::array<char, 16> row13;
	std::array<char, 16> row14;
	std::array<char, 16> row15;
	std::array<char, 16> row16;

	//columns
	std::array<char, 16> col1;
	std::array<char, 16> col2;
	std::array<char, 16> col3;
	std::array<char, 16> col4;
	
	std::array<char, 16> col5;
	std::array<char, 16> col6;
	std::array<char, 16> col7;
	std::array<char, 16> col8;
	
	std::array<char, 16> col9;
	std::array<char, 16> col10;
	std::array<char, 16> col11;
	std::array<char, 16> col12;
	
	std::array<char, 16> col13;
	std::array<char, 16> col14;
	std::array<char, 16> col15;
	std::array<char, 16> col16;

	//boxes
	std::array<char, 16> box1;
	std::array<char, 16> box2;
	std::array<char, 16> box3;
	std::array<char, 16> box4;

	std::array<char, 16> box5;
	std::array<char, 16> box6;
	std::array<char, 16> box7;
	std::array<char, 16> box8;
	
	std::array<char, 16> box9;
	std::array<char, 16> box10;
	std::array<char, 16> box11;
	std::array<char, 16> box12;
	
	std::array<char, 16> box13;
	std::array<char, 16> box14;
	std::array<char, 16> box15;
	std::array<char, 16> box16;

	//for display purposes
	std::string topBorder =    "  C  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16\nR   __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __";
	std::string rowStart =     "   |";
	std::string middleBorder = "   |-- -- -- --+-- -- -- --+-- -- -- --+-- -- -- --|";
	std::string bottomBorder = "	-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --";

	//display rows
	std::string R1 = {};
	std::string R2 = {};
	std::string R3 = {};
	std::string R4 = {};
	std::string R5 = {};
	std::string R6 = {};
	std::string R7 = {};
	std::string R8 = {};
	std::string R9 = {};
	std::string R10 = {};
	std::string R11 = {};
	std::string R12 = {};
	std::string R13 = {};
	std::string R14 = {};
	std::string R15 = {};
	std::string R16 = {};

public: 

	void changeSpace(int, int, char);

	SixteenBySixteen();
	friend std::ostream& operator << (std::ostream& os, const SixteenBySixteen& rhsPuzzle);

};