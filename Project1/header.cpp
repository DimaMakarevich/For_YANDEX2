#include"Header.h"

//CubikRubick::Gran::Gran(char a1, char a2, char a3, char a4, char a5, char a6, char a7, char a8, char a9)
//{
//	this->Square[0][0] = a1;
//	this->Square[0][1] = a2;
//	this->Square[0][2] = a3;
//	this->Square[1][0] = a4;
//	this->Square[1][1] = a5;
//	this->Square[1][2] = a6;
//	this->Square[2][0] = a7;
//	this->Square[2][1] = a8;
//	this->Square[2][2] = a9;
//}

//CubikRubick::Gran::Gran()
//{
//
//	
//}


// void CubikRubick::makekub()
//{
//	
//	 
//	 // this = ('W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W');
//		 
//
//			 Gran('W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W'),
//			 Gran('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
//			 Gran('G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G'),
//			 Gran('R', 'R', 'R', 'R', 'R', 'R', 'R', 'R', 'R'),
//			 Gran('B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B'),
//			 Gran('Y', 'Y', 'Y', 'Y', 'Y', 'Y', 'Y', 'Y', 'Y'),
//		 
//}

//CubikRubick::Gran[6]
//{
//	CubikRubick :: Gran('W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W'),
//	CubikRubick :: Gran('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
//    CubikRubick :: Gran('G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G'),
//	CubikRubick :: Gran('R', 'R', 'R', 'R', 'R', 'R', 'R', 'R', 'R'),
//	CubikRubick :: Gran('B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B'),
//	CubikRubick :: Gran('Y', 'Y', 'Y', 'Y', 'Y', 'Y', 'Y', 'Y', 'Y'),
//}

//CubikRubick::Gran::Cell::Cell()
//{
//
//}


CubikRubick::CubikRubick()
{
	
	char temp_value[] = ( "WOGRBY");

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				this->grans[i].Square[j][k] = temp_value[i];
			}
		}
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			this->grans[0].cells[j].value = temp_value[i];	
		}
	}


	
	/*this->grans[0].Square[0][0] = 'W';
	this->grans[0].Square[0][1] = 'W';
	this->grans[0].Square[0][2] = 'W';
	this->grans[0].Square[1][0] = 'W';
	this->grans[0].Square[1][1] = 'W';
	this->grans[0].Square[1][2] = 'W';
	this->grans[0].Square[2][0] = 'W';
	this->grans[0].Square[2][1] = 'W';
	this->grans[0].Square[2][2] = 'W';

	this->grans[1].Square[0][0] = 'O';
	this->grans[1].Square[0][1] = 'O';
	this->grans[1].Square[0][2] = 'O';
	this->grans[1].Square[1][0] = 'O';
	this->grans[1].Square[1][1] = 'O';
	this->grans[1].Square[1][2] = 'O';
	this->grans[1].Square[2][0] = 'O';
	this->grans[1].Square[2][1] = 'O';
	this->grans[1].Square[2][2] = 'O';

	this->grans[2].Square[0][0] = 'G';
	this->grans[2].Square[0][1] = 'G';
	this->grans[2].Square[0][2] = 'G';
	this->grans[2].Square[1][0] = 'G';
	this->grans[2].Square[1][1] = 'G';
	this->grans[2].Square[1][2] = 'G';
	this->grans[2].Square[2][0] = 'G';
	this->grans[2].Square[2][1] = 'G';
	this->grans[2].Square[2][2] = 'G';

	this->grans[3].Square[0][0] = 'R';
	this->grans[3].Square[0][1] = 'R';
	this->grans[3].Square[0][2] = 'R';
	this->grans[3].Square[1][0] = 'R';
	this->grans[3].Square[1][1] = 'R';
	this->grans[3].Square[1][2] = 'R';
	this->grans[3].Square[2][0] = 'R';
	this->grans[3].Square[2][1] = 'R';
	this->grans[3].Square[2][2] = 'R';

	this->grans[4].Square[0][0] = 'B';
	this->grans[4].Square[0][1] = 'B';
	this->grans[4].Square[0][2] = 'B';
	this->grans[4].Square[1][0] = 'B';
	this->grans[4].Square[1][1] = 'B';
	this->grans[4].Square[1][2] = 'B';
	this->grans[4].Square[2][0] = 'B';
	this->grans[4].Square[2][1] = 'B';
	this->grans[4].Square[2][2] = 'B';

	this->grans[5].Square[0][0] = 'Y';
	this->grans[5].Square[0][1] = 'Y';
	this->grans[5].Square[0][2] = 'Y';
	this->grans[5].Square[1][0] = 'Y';
	this->grans[5].Square[1][1] = 'Y';
	this->grans[5].Square[1][2] = 'Y';
	this->grans[5].Square[2][0] = 'Y';
	this->grans[5].Square[2][1] = 'Y';
	this->grans[5].Square[2][2] = 'Y';
*/
}

CubikRubick::CubikRubick(string path)
{
	fstream fin;
	fin.open(path);

	if (!fin.is_open())
	{
		cout << "error open" << endl;
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				fin >> grans[i].Square[j][k];
			}
		}
	}

	fin.close();
}

void CubikRubick::make_random()
{
	char valueRL[] = "rl";

	for (int i = 0; i < 50; i++)
	{

		this->povorot(rand() % 6 + 0, valueRL[rand() % 2 + 0]);

	}
}

void CubikRubick::povorot(int numb, char side)
{
	this->circle90(numb, side);

	if (numb == 0)
	{
		if (side == 'r')
		{
			char temp_val[12];
			//grans[0].value[0];



			temp_val[0] = grans[2].Square[0][0];
			temp_val[1] = grans[2].Square[0][1];
			temp_val[2] = grans[2].Square[0][2];
			temp_val[3] = grans[3].Square[0][0];
			temp_val[4] = grans[3].Square[0][1];
			temp_val[5] = grans[3].Square[0][2];
			temp_val[6] = grans[4].Square[0][0];
			temp_val[7] = grans[4].Square[0][1];
			temp_val[8] = grans[4].Square[0][2];
			temp_val[9] = grans[1].Square[0][0];
			temp_val[10] = grans[1].Square[0][1];
			temp_val[11] = grans[1].Square[0][2];

			grans[1].Square[0][0] = temp_val[0];
			grans[1].Square[0][1] = temp_val[1];
			grans[1].Square[0][2] = temp_val[2];
			grans[2].Square[0][0] = temp_val[3];
			grans[2].Square[0][1] = temp_val[4];
			grans[2].Square[0][2] = temp_val[5];
			grans[3].Square[0][0] = temp_val[6];
			grans[3].Square[0][1] = temp_val[7];
			grans[3].Square[0][2] = temp_val[8];
			grans[4].Square[0][0] = temp_val[9];
			grans[4].Square[0][1] = temp_val[10];
			grans[4].Square[0][2] = temp_val[11];

		}
		else
		{
			char temp_val[12];

			temp_val[0] = grans[4].Square[0][0];
			temp_val[1] = grans[4].Square[0][1];
			temp_val[2] = grans[4].Square[0][2];
			temp_val[3] = grans[1].Square[0][0];
			temp_val[4] = grans[1].Square[0][1];
			temp_val[5] = grans[1].Square[0][2];
			temp_val[6] = grans[2].Square[0][0];
			temp_val[7] = grans[2].Square[0][1];
			temp_val[8] = grans[2].Square[0][2];
			temp_val[9] = grans[3].Square[0][0];
			temp_val[10] = grans[3].Square[0][1];
			temp_val[11] = grans[3].Square[0][2];

			grans[1].Square[0][0] = temp_val[0];
			grans[1].Square[0][1] = temp_val[1];
			grans[1].Square[0][2] = temp_val[2];
			grans[2].Square[0][0] = temp_val[3];
			grans[2].Square[0][1] = temp_val[4];
			grans[2].Square[0][2] = temp_val[5];
			grans[3].Square[0][0] = temp_val[6];
			grans[3].Square[0][1] = temp_val[7];
			grans[3].Square[0][2] = temp_val[8];
			grans[4].Square[0][0] = temp_val[9];
			grans[4].Square[0][1] = temp_val[10];
			grans[4].Square[0][2] = temp_val[11];

		}

	}

	if (numb == 1)
	{
		if (side == 'r')
		{
			char temp_val[12];

			temp_val[0] = grans[0].Square[0][0];
			temp_val[1] = grans[0].Square[1][0];
			temp_val[2] = grans[0].Square[2][0];
			temp_val[3] = grans[2].Square[0][0];
			temp_val[4] = grans[2].Square[1][0];
			temp_val[5] = grans[2].Square[2][0];
			temp_val[6] = grans[5].Square[2][0];
			temp_val[7] = grans[5].Square[1][0];
			temp_val[8] = grans[5].Square[0][0];
			temp_val[9] = grans[4].Square[2][2];
			temp_val[10] = grans[4].Square[1][2];
			temp_val[11] = grans[4].Square[0][2];

			grans[2].Square[0][0] = temp_val[0];
			grans[2].Square[1][0] = temp_val[1];
			grans[2].Square[2][0] = temp_val[2];
			grans[5].Square[0][0] = temp_val[3];
			grans[5].Square[1][0] = temp_val[4];
			grans[5].Square[2][0] = temp_val[5];
			grans[4].Square[0][2] = temp_val[6];
			grans[4].Square[1][2] = temp_val[7];
			grans[4].Square[2][2] = temp_val[8];
			grans[0].Square[0][0] = temp_val[9];
			grans[0].Square[1][0] = temp_val[10];
			grans[0].Square[2][0] = temp_val[11];
		}
		else
		{
			char temp_val[12];

			temp_val[0] = grans[0].Square[2][0];
			temp_val[1] = grans[0].Square[1][0];
			temp_val[2] = grans[0].Square[0][0];
			temp_val[3] = grans[2].Square[0][0];
			temp_val[4] = grans[2].Square[1][0];
			temp_val[5] = grans[2].Square[2][0];
			temp_val[6] = grans[5].Square[0][0];
			temp_val[7] = grans[5].Square[1][0];
			temp_val[8] = grans[5].Square[2][0];
			temp_val[9] = grans[4].Square[2][2];
			temp_val[10] = grans[4].Square[1][2];
			temp_val[11] = grans[4].Square[0][2];

			grans[4].Square[0][2] = temp_val[0];
			grans[4].Square[1][2] = temp_val[1];
			grans[4].Square[2][2] = temp_val[2];
			grans[0].Square[0][0] = temp_val[3];
			grans[0].Square[1][0] = temp_val[4];
			grans[0].Square[2][0] = temp_val[5];
			grans[2].Square[0][0] = temp_val[6];
			grans[2].Square[1][0] = temp_val[7];
			grans[2].Square[2][0] = temp_val[8];
			grans[5].Square[0][0] = temp_val[9];
			grans[5].Square[1][0] = temp_val[10];
			grans[5].Square[2][0] = temp_val[11];
		}
	}

	if (numb == 2)
	{
		if (side == 'r')
		{
			char temp_val[12];

			temp_val[0] = grans[0].Square[2][0];
			temp_val[1] = grans[0].Square[2][1];
			temp_val[2] = grans[0].Square[2][2];
			temp_val[3] = grans[1].Square[0][2];
			temp_val[4] = grans[1].Square[1][2];
			temp_val[5] = grans[1].Square[2][2];
			temp_val[6] = grans[3].Square[0][0];
			temp_val[7] = grans[3].Square[1][0];
			temp_val[8] = grans[3].Square[2][0];
			temp_val[9] = grans[5].Square[0][0];
			temp_val[10] = grans[5].Square[0][1];
			temp_val[11] = grans[5].Square[0][2];

			grans[0].Square[2][0] = temp_val[5];
			grans[0].Square[2][1] = temp_val[4];
			grans[0].Square[2][2] = temp_val[3];
			grans[1].Square[0][2] = temp_val[9];
			grans[1].Square[1][2] = temp_val[10];
			grans[1].Square[2][2] = temp_val[11];
			grans[3].Square[0][0] = temp_val[0];
			grans[3].Square[1][0] = temp_val[1];
			grans[3].Square[2][0] = temp_val[2];
			grans[5].Square[0][0] = temp_val[8];
			grans[5].Square[0][1] = temp_val[7];
			grans[5].Square[0][2] = temp_val[6];


		}
		else
		{
			char temp_val[12];

			temp_val[0] = grans[0].Square[2][0];
			temp_val[1] = grans[0].Square[2][1];
			temp_val[2] = grans[0].Square[2][2];
			temp_val[3] = grans[1].Square[0][2];
			temp_val[4] = grans[1].Square[1][2];
			temp_val[5] = grans[1].Square[2][2];
			temp_val[6] = grans[3].Square[0][0];
			temp_val[7] = grans[3].Square[1][0];
			temp_val[8] = grans[3].Square[2][0];
			temp_val[9] = grans[5].Square[0][0];
			temp_val[10] = grans[5].Square[0][1];
			temp_val[11] = grans[5].Square[0][2];

			grans[0].Square[2][0] = temp_val[6];
			grans[0].Square[2][1] = temp_val[7];
			grans[0].Square[2][2] = temp_val[8];
			grans[1].Square[0][2] = temp_val[2];
			grans[1].Square[1][2] = temp_val[1];
			grans[1].Square[2][2] = temp_val[0];
			grans[3].Square[0][0] = temp_val[11];
			grans[3].Square[1][0] = temp_val[10];
			grans[3].Square[2][0] = temp_val[9];
			grans[5].Square[0][0] = temp_val[3];
			grans[5].Square[0][1] = temp_val[4];
			grans[5].Square[0][2] = temp_val[5];
		}

	}

	if (numb == 3)
	{
		if (side == 'r')
		{
			char temp_val[12];

			temp_val[0] = grans[0].Square[2][2];
			temp_val[1] = grans[0].Square[1][2];
			temp_val[2] = grans[0].Square[0][2];
			temp_val[3] = grans[2].Square[0][2];
			temp_val[4] = grans[2].Square[1][2];
			temp_val[5] = grans[2].Square[2][2];
			temp_val[6] = grans[5].Square[0][2];
			temp_val[7] = grans[5].Square[1][2];
			temp_val[8] = grans[5].Square[2][2];
			temp_val[9] = grans[4].Square[2][0];
			temp_val[10] = grans[4].Square[1][0];
			temp_val[11] = grans[4].Square[0][0];

			grans[4].Square[0][0] = temp_val[0];
			grans[4].Square[1][0] = temp_val[1];
			grans[4].Square[2][0] = temp_val[2];
			grans[0].Square[0][2] = temp_val[3];
			grans[0].Square[1][2] = temp_val[4];
			grans[0].Square[2][2] = temp_val[5];
			grans[2].Square[0][2] = temp_val[6];
			grans[2].Square[1][2] = temp_val[7];
			grans[2].Square[2][2] = temp_val[8];
			grans[5].Square[0][2] = temp_val[9];
			grans[5].Square[1][2] = temp_val[10];
			grans[5].Square[2][2] = temp_val[11];
		}
		else
		{
			char temp_val[12];

			temp_val[0] = grans[0].Square[0][2];
			temp_val[1] = grans[0].Square[1][2];
			temp_val[2] = grans[0].Square[2][2];
			temp_val[3] = grans[2].Square[0][2];
			temp_val[4] = grans[2].Square[1][2];
			temp_val[5] = grans[2].Square[2][2];
			temp_val[6] = grans[5].Square[2][2];
			temp_val[7] = grans[5].Square[1][2];
			temp_val[8] = grans[5].Square[0][2];
			temp_val[9] = grans[4].Square[2][0];
			temp_val[10] = grans[4].Square[1][0];
			temp_val[11] = grans[4].Square[0][0];

			grans[2].Square[0][2] = temp_val[0];
			grans[2].Square[1][2] = temp_val[1];
			grans[2].Square[2][2] = temp_val[2];
			grans[5].Square[0][2] = temp_val[3];
			grans[5].Square[1][2] = temp_val[4];
			grans[5].Square[2][2] = temp_val[5];
			grans[4].Square[0][0] = temp_val[6];
			grans[4].Square[1][0] = temp_val[7];
			grans[4].Square[2][0] = temp_val[8];
			grans[0].Square[0][2] = temp_val[9];
			grans[0].Square[1][2] = temp_val[10];
			grans[0].Square[2][2] = temp_val[11];
		}

	}

	if (numb == 4)
	{
		if (side == 'r')
		{
			char temp_val[12];

			temp_val[0] = grans[0].Square[0][0];
			temp_val[1] = grans[0].Square[0][1];
			temp_val[2] = grans[0].Square[0][2];
			temp_val[3] = grans[1].Square[0][0];
			temp_val[4] = grans[1].Square[1][0];
			temp_val[5] = grans[1].Square[2][0];
			temp_val[6] = grans[3].Square[0][2];
			temp_val[7] = grans[3].Square[1][2];
			temp_val[8] = grans[3].Square[2][2];
			temp_val[9] = grans[5].Square[2][0];
			temp_val[10] = grans[5].Square[2][1];
			temp_val[11] = grans[5].Square[2][2];

			grans[0].Square[0][0] = temp_val[6];
			grans[0].Square[0][1] = temp_val[7];
			grans[0].Square[0][2] = temp_val[8];
			grans[1].Square[0][0] = temp_val[2];
			grans[1].Square[1][0] = temp_val[1];
			grans[1].Square[2][0] = temp_val[0];
			grans[3].Square[0][2] = temp_val[11];
			grans[3].Square[1][2] = temp_val[10];
			grans[3].Square[2][2] = temp_val[9];
			grans[5].Square[2][0] = temp_val[3];
			grans[5].Square[2][1] = temp_val[4];
			grans[5].Square[2][2] = temp_val[5];
		}
		else
		{
			char temp_val[12];

			temp_val[0] = grans[0].Square[0][0];
			temp_val[1] = grans[0].Square[0][1];
			temp_val[2] = grans[0].Square[0][2];
			temp_val[3] = grans[1].Square[0][0];
			temp_val[4] = grans[1].Square[1][0];
			temp_val[5] = grans[1].Square[2][0];
			temp_val[6] = grans[3].Square[0][2];
			temp_val[7] = grans[3].Square[1][2];
			temp_val[8] = grans[3].Square[2][2];
			temp_val[9] = grans[5].Square[2][0];
			temp_val[10] = grans[5].Square[2][1];
			temp_val[11] = grans[5].Square[2][2];

			grans[0].Square[0][0] = temp_val[5];
			grans[0].Square[0][1] = temp_val[4];
			grans[0].Square[0][2] = temp_val[3];
			grans[1].Square[0][0] = temp_val[9];
			grans[1].Square[1][0] = temp_val[10];
			grans[1].Square[2][0] = temp_val[11];
			grans[3].Square[0][2] = temp_val[0];
			grans[3].Square[1][2] = temp_val[1];
			grans[3].Square[2][2] = temp_val[2];
			grans[5].Square[2][0] = temp_val[8];
			grans[5].Square[2][1] = temp_val[7];
			grans[5].Square[2][2] = temp_val[6];
		}

	}

	if (numb == 5)
	{
		if (side == 'r')
		{
			char temp_val[12];

			temp_val[0] = grans[4].Square[2][0];
			temp_val[1] = grans[4].Square[2][1];
			temp_val[2] = grans[4].Square[2][2];
			temp_val[3] = grans[1].Square[2][0];
			temp_val[4] = grans[1].Square[2][1];
			temp_val[5] = grans[1].Square[2][2];
			temp_val[6] = grans[2].Square[2][0];
			temp_val[7] = grans[2].Square[2][1];
			temp_val[8] = grans[2].Square[2][2];
			temp_val[9] = grans[3].Square[2][0];
			temp_val[10] = grans[3].Square[2][1];
			temp_val[11] = grans[3].Square[2][2];

			grans[1].Square[2][0] = temp_val[0];
			grans[1].Square[2][1] = temp_val[1];
			grans[1].Square[2][2] = temp_val[2];
			grans[2].Square[2][0] = temp_val[3];
			grans[2].Square[2][1] = temp_val[4];
			grans[2].Square[2][2] = temp_val[5];
			grans[3].Square[2][0] = temp_val[6];
			grans[3].Square[2][1] = temp_val[7];
			grans[3].Square[2][2] = temp_val[8];
			grans[4].Square[2][0] = temp_val[9];
			grans[4].Square[2][1] = temp_val[10];
			grans[4].Square[2][2] = temp_val[11];

		}
		else
		{
			char temp_val[12];

			temp_val[0] = grans[2].Square[2][0];
			temp_val[1] = grans[2].Square[2][1];
			temp_val[2] = grans[2].Square[2][2];
			temp_val[3] = grans[3].Square[2][0];
			temp_val[4] = grans[3].Square[2][1];
			temp_val[5] = grans[3].Square[2][2];
			temp_val[6] = grans[4].Square[2][0];
			temp_val[7] = grans[4].Square[2][1];
			temp_val[8] = grans[4].Square[2][2];
			temp_val[9] = grans[1].Square[2][0];
			temp_val[10] = grans[1].Square[2][1];
			temp_val[11] = grans[1].Square[2][2];

			grans[1].Square[2][0] = temp_val[0];
			grans[1].Square[2][1] = temp_val[1];
			grans[1].Square[2][2] = temp_val[2];
			grans[2].Square[2][0] = temp_val[3];
			grans[2].Square[2][1] = temp_val[4];
			grans[2].Square[2][2] = temp_val[5];
			grans[3].Square[2][0] = temp_val[6];
			grans[3].Square[2][1] = temp_val[7];
			grans[3].Square[2][2] = temp_val[8];
			grans[4].Square[2][0] = temp_val[9];
			grans[4].Square[2][1] = temp_val[10];
			grans[4].Square[2][2] = temp_val[11];
		}
	}

}

bool CubikRubick::check_compl_position()
{
	for (int i = 0; i < 6; i++)
	{
		char temp = grans[i].Square[0][0];

		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				if (temp != grans[i].Square[j][k])
				{
					cout << "куб собран Ќ≈правильно!" << endl;
					return false;
				}
			}

		}

		if (i == 5)
		{
			cout << "куб собран правильно!!" << endl;
			return true;
		}
	}

	return true;

}

void CubikRubick::circle90(int numb, char side)
{
	char temp_gr[3][3];

	if (side == 'l')
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				temp_gr[i][j] = grans[numb].Square[j][2 - i];
			}
		}

	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				temp_gr[i][j] = grans[numb].Square[2 - j][i];
			}
		}
	}


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			grans[numb].Square[i][j] = temp_gr[i][j];

		}
	}

}

ostream& operator << (ostream& cout, const CubikRubick& a)
{

	for (int i = 0; i < 6; i++)
	{
		if (i == 0)
		{
			cout << "                         -------------------" << endl;

			for (int x = 0; x < 3; x++)
			{
				cout << "\t" "\t" << "       " << "  |_ " << a.grans[i].Square[x][0] << " _|_ " << a.grans[i].Square[x][1] << " _|_ " << a.grans[i].Square[x][2] << " _|" << endl;
			}

			cout << "   -------------------------------------------------------------------------------------" << endl;

		}

		if (i == 5)
		{
			cout << "   -------------------------------------------------------------------------------------" << endl;

			for (int x = 0; x < 3; x++)
			{
				cout << "\t" "\t" << "       " << "  |_ " << a.grans[i].Square[x][0] << " _|_ " << a.grans[i].Square[x][1] << " _|_ " << a.grans[i].Square[x][2] << " _|" << endl;
			}

			cout << "                         -------------------" << endl << endl;
		}


		if (i == 1)
		{
			for (int x = 0; x < 3; x++)
			{
				for (int j = 1; j < 5; j++)
				{
					cout << "   |_ " << a.grans[j].Square[x][0] << " _|_ " << a.grans[j].Square[x][1] << " _|_ " << a.grans[j].Square[x][2] << " _|";
				}

				cout << "\n";
			}

		}

	}

	return cout;
}