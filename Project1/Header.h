/*!
\file
\brief Заголовочный файл с описанием класса
*/

#pragma once
#include <iostream>
#include <fstream>
#include<ctime>
#include <string>

using namespace std;

/*!
	\brief Основной класс
*/

class RubiksCube {
	
public:

	RubiksCube();
	
	RubiksCube(string path);
	
	void makeRandom();
	
	void turn(int numb, char side);
	
	bool isCheckComplPosition();
	
private:

	class Face
	{
	public:

		class Cell
		{
		public:
			
			char value;
		};

		Cell cells[9];
	};

	friend ostream& operator << (ostream& os, const RubiksCube& a);

	friend bool operator == (const RubiksCube& left, const RubiksCube& right);

	Face faces[6];

	void turnSideNumber0Right();

	void turnSideNumber1Right();

	void turnSideNumber2Right();

	void turnSideNumber3Right();

	void turnSideNumber4Right();

	void turnSideNumber5Right();

	void  turnCurrentFaceDegrees90(int numb, char side);
};

#pragma once