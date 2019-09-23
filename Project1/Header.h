#pragma once
#include <iostream>
#include <fstream>
#include<ctime>
#include <string>



using namespace std;


class CubikRubick {

	/*
	Gran grans[6]
	{
		
		Gran('W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W'),
		Gran('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
		Gran('G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G'),
		Gran('R', 'R', 'R', 'R', 'R', 'R', 'R', 'R', 'R'),
		Gran('B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B'),
		Gran('Y', 'Y', 'Y', 'Y', 'Y', 'Y', 'Y', 'Y', 'Y'),
	};
*/
	
public:

	CubikRubick();
	
	CubikRubick(string path);
	
	void make_random();
	
	void povorot(int numb, char side);
	
	bool check_compl_position();
	
private:

	class Gran
	{

	public:

		class Cell
		{
		public:
			
			char value;
		};

		Cell cells[9];

		char Square[3][3];
	};

	friend ostream& operator << (ostream& os, const CubikRubick& a);

	Gran grans[6];

	void  circle90(int numb, char side);

	FRIEND_TEST::(CubikRubick, dsfsdf);
};

