#include "SudokuPuzzle.h"
#include <iomanip>
#include <cctype>
#include <array>

std::ostream& operator << (std::ostream& os, const NineByNine& rhsPuzzle)
{
	/*9x9 puzzle
	 C 1 2 3 4 5 6 7 8 9
	R  _ _ _ _ _ _ _ _ _
	1 |0 0 0|0 0 0|0 0 0|
	2 |0 0 0|0 0 0|0 0 0|
	3 |0 0 0|0 0 0|0 0 0|
	  |- - -+- - -+- - -|
	4 |0 0 0|0 0 0|0 0 0|
	5 |0 0 0|0 0 0|0 0 0|
	6 |0 0 0|0 0 0|0 0 0|
	  |- - -+- - -+- - -|
	7 |0 0 0|0 0 0|0 0 0|
	8 |0 0 0|0 0 0|0 0 0|
	9 |0 0 0|0 0 0|0 0 0|
	   - - - - - - - - -

	   # not 0 
	 */
	
	return os;
}

std::ostream& operator << (std::ostream& os, const FourByFour& rhsPuzzle)
{
	/*4x4 puzzle
	 C 1 2 3 4
	R  _ _ _ _
	1 |# #|# #|
	2 |# #|# #|
	  |- -+- -|
	3 |# #|# #|
	4 |# #|# #|
	   - - - -
	*/

	std::string R1 = { "1" + rhsPuzzle.rowStart + rhsPuzzle.row1[0] + " " + rhsPuzzle.row1[1] + "|" + rhsPuzzle.row1[2] + " " + rhsPuzzle.row1[3] + "|" };
	std::string R2 = { "2" + rhsPuzzle.rowStart + rhsPuzzle.row2[0] + " " + rhsPuzzle.row2[1] + "|" + rhsPuzzle.row2[2] + " " + rhsPuzzle.row2[3] + "|" };
	std::string R3 = { "3" + rhsPuzzle.rowStart + rhsPuzzle.row3[0] + " " + rhsPuzzle.row3[1] + "|" + rhsPuzzle.row3[2] + " " + rhsPuzzle.row3[3] + "|" };
	std::string R4 = { "4" + rhsPuzzle.rowStart + rhsPuzzle.row4[0] + " " + rhsPuzzle.row4[1] + "|" + rhsPuzzle.row4[2] + " " + rhsPuzzle.row4[3] + "|" };

	os 
		<< rhsPuzzle.topBorder << "\n" << R1 << "\n" << R2 << "\n" 
		<< rhsPuzzle.middleBorder << "\n" << R3 << "\n" << R4 << "\n" 
		<< rhsPuzzle.bottomBorder << "\n";
	return os;


}

std::ostream& operator << (std::ostream& os, const SixteenBySixteen& rhsPuzzle)
{
	/*16x16 puzzle
	  C  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16
	R   __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __
	 1 |00 00 00 00|00 00 00 00|00 00 00 00|00 00 00 00|
	 2 |00 00 00 00|00 00 00 00|00 00 00 00|00 00 00 00|
	 3 |00 00 00 00|00 00 00 00|00 00 00 00|00 00 00 00|
	 4 |00 00 00 00|00 00 00 00|00 00 00 00|00 00 00 00|
	   |-- -- -- --+-- -- -- --+-- -- -- --+-- -- -- --|
	 5 |00 00 00 00|00 00 00 00|00 00 00 00|00 00 00 00|
	 6 |00 00 00 00|00 00 00 00|00 00 00 00|00 00 00 00|
	 7 |00 00 00 00|00 00 00 00|00 00 00 00|00 00 00 00|
	 8 |00 00 00 00|00 00 00 00|00 00 00 00|00 00 00 00|
	   |-- -- -- --+-- -- -- --+-- -- -- --+-- -- -- --|
	 9 |00 00 00 00|00 00 00 00|00 00 00 00|00 00 00 00|
	10 |00 00 00 00|00 00 00 00|00 00 00 00|00 00 00 00|
	11 |00 00 00 00|00 00 00 00|00 00 00 00|00 00 00 00|
	12 |00 00 00 00|00 00 00 00|00 00 00 00|00 00 00 00|
	   |-- -- -- --+-- -- -- --+-- -- -- --+-- -- -- --|
	13 |00 00 00 00|00 00 00 00|00 00 00 00|00 00 00 00|
	14 |00 00 00 00|00 00 00 00|00 00 00 00|00 00 00 00|
	15 |00 00 00 00|00 00 00 00|00 00 00 00|00 00 00 00|
	16 |00 00 00 00|00 00 00 00|00 00 00 00|00 00 00 00|
		-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
	
		## not 00
	*/

	return os;
}


void FourByFour::changeSpace(int ROW, int COL, char CHAR)
{
	if (ROW > row1.size() || COL > col1.size() || ROW <= 0 || COL <= 0)
	{
		std::cout << "Your parameters don't make any sense \n";
		return;
	}
	else 
	{
		if (ROW == 1)
		{
			row1[COL - 1] = CHAR;
		}
		else if (ROW == 2)
		{
			row2[COL - 1] = CHAR;
		}
		else if (ROW == 3)
		{
			row3[COL - 1] = CHAR;
		}
		else if(ROW == 4)
		{
			row4[COL - 1] = CHAR;
		}
	}
}

/*group is used for the switch case which receives cases 'R', 'C', and 'B' 
for rows, columns, and boxes (capitalization not necessary as it's dealt with in the function)

groupNum is the row, column, or box number to be changed (boxes numbered Left->Right, Top->Bottom)

G1-G4 are the actual values being inserted in order (same as box numbering)*/
void FourByFour::changeGroup(char group, int groupNum, char G1, char G2, char G3, char G4)
{
	group = toupper(group);
	G1 = toupper(G1);
	G2 = toupper(G2);
	G3 = toupper(G3);
	G4 = toupper(G4);

	switch (group) {
	case 'R':
		if (groupNum == 1)
		{
			row1[0] = G1;
			row1[1] = G2;
			row1[2] = G3;
			row1[3] = G4;
		}
		else if (groupNum == 2)
		{
			row2[0] = G1;
			row2[1] = G2;
			row2[2] = G3;
			row2[3] = G4;
		}
		else if (groupNum == 3)
		{
			row3[0] = G1;
			row3[1] = G2;
			row3[2] = G3;
			row3[3] = G4;
		}
		else if (groupNum == 4)
		{
			row4[0] = G1;
			row4[1] = G2;
			row4[2] = G3;
			row4[3] = G4;
		}
		break;
	case 'C':
		if (groupNum == 1)
		{
			row1[0] = G1;
			row2[0] = G2;
			row3[0] = G3;
			row4[0] = G4;
		}
		else if (groupNum == 2)
		{
			row1[1] = G1;
			row2[1] = G2;
			row3[1] = G3;
			row4[1] = G4;
		}
		else if (groupNum == 3)
		{
			row1[2] = G1;
			row2[2] = G2;
			row3[2] = G3;
			row4[2] = G4;
		}
		else if (groupNum == 4)
		{
			row1[3] = G1;
			row2[3] = G2;
			row3[3] = G3;
			row4[3] = G4;
		}
		break;
	case 'B':
		if (groupNum == 1)
		{
			row1[0] = G1;
			row1[1] = G2;
			row2[0] = G3;
			row2[1] = G4;
		}
		else if (groupNum == 2)
		{
			row1[2] = G1;
			row1[3] = G2;
			row2[2] = G3;
			row2[3] = G4;
		}
		else if (groupNum == 3)
		{
			row3[0] = G1;
			row3[1] = G2;
			row4[0] = G3;
			row4[1] = G4;
		}
		else if (groupNum == 4)
		{
			row3[2] = G1;
			row3[3] = G2;
			row4[2] = G3;
			row4[3] = G4;
		}
		break;
	}
}

FourByFour::FourByFour()
{
	row1 = { '#', '#', '#', '#' };
	row2 = { '#', '#', '#', '#' };
	row3 = { '#', '#', '#', '#' };
	row4 = { '#', '#', '#', '#' };
	// ???
}


