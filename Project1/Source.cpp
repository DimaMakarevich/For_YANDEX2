#include"Header.h"

//class CubikRubick {
//
//	class Gran
//	{
//
//	public:
//
//		Gran(char a1, char a2, char a3, char a4, char a5, char a6, char a7, char a8, char a9)
//		{
//
//		this->Square[0][0] = a1;
//		this->Square[0][1] = a2;
//		this->Square[0][2] = a3;
//		this->Square[1][0] = a4;
//		this->Square[1][1] = a5;
//		this->Square[1][2] = a6;
//		this->Square[2][0] = a7;
//		this->Square[2][1] = a8;
//		this->Square[2][2] = a9;
//
//		}
//		 
//		
//		char Square[3][3];
//		
//		//~Gran();
//
//	private:
//
//	};
//
//private:
//
//	Gran grans[6]
//	{
//		//Gran('1', '2', '3', '4', '5', '6', '7', '8', '9'),
//		Gran('W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W'),
//		Gran('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
//		Gran('G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G'),
//		Gran('R', 'R', 'R', 'R', 'R', 'R', 'R', 'R', 'R'),
//		Gran('B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B'),
//		Gran('Y', 'Y', 'Y', 'Y', 'Y', 'Y', 'Y', 'Y', 'Y'),
//	};
//
//	friend ostream& operator << (ostream& os, const CubikRubick& a);
//	
//
//
//	/*Gran::Gran()
//	{
//
//	}
//
//	Gran::~Gran()
//	{
//
//	}*/
//
//public: 
//
//	CubikRubick() 
//	{
//
//	}
//	
//
//	CubikRubick(string path) 
//	{
//		//Gran grans[6];
//
//		fstream fin;
//		fin.open(path);
//
//		if (!fin.is_open())
//		{
//			cout << "error open" << endl;
//		}
//
//		for (int i = 0; i < 6 ; i++)
//		{
//			for (int j = 0; j < 3; j++)
//			{
//				for (int k = 0; k < 3; k++)
//				{
//					fin >> grans[i].Square[j][k];
//				}
//			}
//		}
//
//		fin.close();
//	}
//
//	/*long int count = 0;
//
//	void try_inf()
//	{
//		char valueRL[] = "rl";
//
//		while (true)
//		{
//			count++;
//			
//			
//			if (this->check_compl_position() == true)
//			{
//				this->showKUB();
//				cout << count;
//				return;
//			}
//			this->povorot(rand() % 6 + 0, valueRL[rand() % 2 + 0]);
//		}
//
//			
//
//		
//
//	}*/
//
//	
//
//
//	void make_random()
//	{
//		char valueRL[] = "rl";
//
//		for (int i = 0; i < 50; i++)
//		{
//
//			this->povorot(rand() % 6 + 0, valueRL[rand() % 2 + 0 ]);
//		
//		}
//	}
//
//	void povorot(int numb, char side)
//	{
//		this->circle90(numb, side);
//		
//		if (numb == 0)
//		{
//			if (side=='r')
//			{
//				char temp_val[12];
//
//				temp_val[0] = grans[2].Square[0][0];
//				temp_val[1] = grans[2].Square[0][1];
//				temp_val[2] = grans[2].Square[0][2];
//				temp_val[3] = grans[3].Square[0][0];
//				temp_val[4] = grans[3].Square[0][1];
//				temp_val[5] = grans[3].Square[0][2];
//				temp_val[6] = grans[4].Square[0][0];
//				temp_val[7] = grans[4].Square[0][1];
//				temp_val[8] = grans[4].Square[0][2];
//				temp_val[9] = grans[1].Square[0][0];
//				temp_val[10] = grans[1].Square[0][1];
//				temp_val[11] = grans[1].Square[0][2];
//
//				grans[1].Square[0][0] = temp_val[0];
//				grans[1].Square[0][1] = temp_val[1];
//				grans[1].Square[0][2] = temp_val[2];
//				grans[2].Square[0][0] = temp_val[3];
//				grans[2].Square[0][1] = temp_val[4];
//				grans[2].Square[0][2] = temp_val[5];
//				grans[3].Square[0][0] = temp_val[6];
//				grans[3].Square[0][1] = temp_val[7];
//				grans[3].Square[0][2] = temp_val[8];
//				grans[4].Square[0][0] = temp_val[9];
//				grans[4].Square[0][1] = temp_val[10];
//				grans[4].Square[0][2] = temp_val[11];
//
//			}
//			else
//			{
//				char temp_val[12];
//
//				temp_val[0] = grans[4].Square[0][0];
//				temp_val[1] = grans[4].Square[0][1];
//				temp_val[2] = grans[4].Square[0][2];
//				temp_val[3] = grans[1].Square[0][0];
//				temp_val[4] = grans[1].Square[0][1];
//				temp_val[5] = grans[1].Square[0][2];
//				temp_val[6] = grans[2].Square[0][0];
//				temp_val[7] = grans[2].Square[0][1];
//				temp_val[8] = grans[2].Square[0][2];
//				temp_val[9] = grans[3].Square[0][0];
//				temp_val[10] = grans[3].Square[0][1];
//				temp_val[11] = grans[3].Square[0][2];
//
//				grans[1].Square[0][0] = temp_val[0];
//				grans[1].Square[0][1] = temp_val[1];
//				grans[1].Square[0][2] = temp_val[2];
//				grans[2].Square[0][0] = temp_val[3];
//				grans[2].Square[0][1] = temp_val[4];
//				grans[2].Square[0][2] = temp_val[5];
//				grans[3].Square[0][0] = temp_val[6];
//				grans[3].Square[0][1] = temp_val[7];
//				grans[3].Square[0][2] = temp_val[8];
//				grans[4].Square[0][0] = temp_val[9];
//				grans[4].Square[0][1] = temp_val[10];
//				grans[4].Square[0][2] = temp_val[11];
//
//			}
//
//		}
//
//		if (numb == 1)
//		{
//			if (side == 'r')
//			{
//				char temp_val[12];
//
//				temp_val[0] = grans[0].Square[0][0];
//				temp_val[1] = grans[0].Square[1][0];
//				temp_val[2] = grans[0].Square[2][0];
//				temp_val[3] = grans[2].Square[0][0];
//				temp_val[4] = grans[2].Square[1][0];
//				temp_val[5] = grans[2].Square[2][0];
//				temp_val[6] = grans[5].Square[2][0];
//				temp_val[7] = grans[5].Square[1][0];
//				temp_val[8] = grans[5].Square[0][0];
//				temp_val[9] = grans[4].Square[2][2];
//				temp_val[10] = grans[4].Square[1][2];
//				temp_val[11] = grans[4].Square[0][2];
//
//				grans[2].Square[0][0] = temp_val[0];
//				grans[2].Square[1][0] = temp_val[1];
//				grans[2].Square[2][0] = temp_val[2];
//				grans[5].Square[0][0] = temp_val[3];
//				grans[5].Square[1][0] = temp_val[4];
//				grans[5].Square[2][0] = temp_val[5];
//				grans[4].Square[0][2] = temp_val[6];
//				grans[4].Square[1][2] = temp_val[7];
//				grans[4].Square[2][2] = temp_val[8];
//				grans[0].Square[0][0] = temp_val[9];
//				grans[0].Square[1][0] = temp_val[10];
//				grans[0].Square[2][0] = temp_val[11];
//			}
//			else
//			{
//				char temp_val[12];
//
//				temp_val[0] = grans[0].Square[2][0];
//				temp_val[1] = grans[0].Square[1][0];
//				temp_val[2] = grans[0].Square[0][0];
//				temp_val[3] = grans[2].Square[0][0];
//				temp_val[4] = grans[2].Square[1][0];
//				temp_val[5] = grans[2].Square[2][0];
//				temp_val[6] = grans[5].Square[0][0];
//				temp_val[7] = grans[5].Square[1][0];
//				temp_val[8] = grans[5].Square[2][0];
//				temp_val[9] = grans[4].Square[2][2];
//				temp_val[10] = grans[4].Square[1][2];
//				temp_val[11] = grans[4].Square[0][2];
//
//				grans[4].Square[0][2] = temp_val[0];
//				grans[4].Square[1][2] = temp_val[1];
//				grans[4].Square[2][2] = temp_val[2];
//				grans[0].Square[0][0] = temp_val[3];
//				grans[0].Square[1][0] = temp_val[4];
//				grans[0].Square[2][0] = temp_val[5];
//				grans[2].Square[0][0] = temp_val[6];
//				grans[2].Square[1][0] = temp_val[7];
//				grans[2].Square[2][0] = temp_val[8];
//				grans[5].Square[0][0] = temp_val[9];
//				grans[5].Square[1][0] = temp_val[10];
//				grans[5].Square[2][0] = temp_val[11];
//			}
//		}
//
//		if (numb == 2)
//		{
//			if (side == 'r')
//			{
//				char temp_val[12];
//
//				temp_val[0] = grans[0].Square[2][0];
//				temp_val[1] = grans[0].Square[2][1];
//				temp_val[2] = grans[0].Square[2][2];
//				temp_val[3] = grans[1].Square[0][2];
//				temp_val[4] = grans[1].Square[1][2];
//				temp_val[5] = grans[1].Square[2][2];
//				temp_val[6] = grans[3].Square[0][0];
//				temp_val[7] = grans[3].Square[1][0];
//				temp_val[8] = grans[3].Square[2][0];
//				temp_val[9] = grans[5].Square[0][0];
//				temp_val[10] = grans[5].Square[0][1];
//				temp_val[11] = grans[5].Square[0][2];
//
//				grans[0].Square[2][0] = temp_val[5];
//				grans[0].Square[2][1] = temp_val[4];
//				grans[0].Square[2][2] = temp_val[3];
//				grans[1].Square[0][2] = temp_val[9];
//				grans[1].Square[1][2] = temp_val[10];
//				grans[1].Square[2][2] = temp_val[11];
//				grans[3].Square[0][0] = temp_val[0];
//				grans[3].Square[1][0] = temp_val[1];
//				grans[3].Square[2][0] = temp_val[2];
//				grans[5].Square[0][0] = temp_val[8];
//				grans[5].Square[0][1] = temp_val[7];
//				grans[5].Square[0][2] = temp_val[6];
//
//				
//			}
//			else
//			{
//				char temp_val[12];
//
//				temp_val[0] = grans[0].Square[2][0];
//				temp_val[1] = grans[0].Square[2][1];
//				temp_val[2] = grans[0].Square[2][2];
//				temp_val[3] = grans[1].Square[0][2];
//				temp_val[4] = grans[1].Square[1][2];
//				temp_val[5] = grans[1].Square[2][2];
//				temp_val[6] = grans[3].Square[0][0];
//				temp_val[7] = grans[3].Square[1][0];
//				temp_val[8] = grans[3].Square[2][0];
//				temp_val[9] = grans[5].Square[0][0];
//				temp_val[10] = grans[5].Square[0][1];
//				temp_val[11] = grans[5].Square[0][2];
//
//				grans[0].Square[2][0] = temp_val[6];
//				grans[0].Square[2][1] = temp_val[7];
//				grans[0].Square[2][2] = temp_val[8];
//				grans[1].Square[0][2] = temp_val[2];
//				grans[1].Square[1][2] = temp_val[1];
//				grans[1].Square[2][2] = temp_val[0];
//				grans[3].Square[0][0] = temp_val[11];
//				grans[3].Square[1][0] = temp_val[10];
//				grans[3].Square[2][0] = temp_val[9];
//				grans[5].Square[0][0] = temp_val[3];
//				grans[5].Square[0][1] = temp_val[4];
//				grans[5].Square[0][2] = temp_val[5];
//			}
//
//		}
//
//		if (numb == 3)
//		{
//			if (side == 'r')
//			{
//				char temp_val[12];
//
//				temp_val[0] = grans[0].Square[2][2];
//				temp_val[1] = grans[0].Square[1][2];
//				temp_val[2] = grans[0].Square[0][2];
//				temp_val[3] = grans[2].Square[0][2];
//				temp_val[4] = grans[2].Square[1][2];
//				temp_val[5] = grans[2].Square[2][2];
//				temp_val[6] = grans[5].Square[0][2];
//				temp_val[7] = grans[5].Square[1][2];
//				temp_val[8] = grans[5].Square[2][2];
//				temp_val[9] = grans[4].Square[2][0];
//				temp_val[10] = grans[4].Square[1][0];
//				temp_val[11] = grans[4].Square[0][0];
//
//				grans[4].Square[0][0] = temp_val[0];
//				grans[4].Square[1][0] = temp_val[1];
//				grans[4].Square[2][0] = temp_val[2];
//				grans[0].Square[0][2] = temp_val[3];
//				grans[0].Square[1][2] = temp_val[4];
//				grans[0].Square[2][2] = temp_val[5];
//				grans[2].Square[0][2] = temp_val[6];
//				grans[2].Square[1][2] = temp_val[7];
//				grans[2].Square[2][2] = temp_val[8];
//				grans[5].Square[0][2] = temp_val[9];
//				grans[5].Square[1][2] = temp_val[10];
//				grans[5].Square[2][2] = temp_val[11];
//			}
//			else
//			{
//				char temp_val[12];
//
//				temp_val[0] = grans[0].Square[0][2];
//				temp_val[1] = grans[0].Square[1][2];
//				temp_val[2] = grans[0].Square[2][2];
//				temp_val[3] = grans[2].Square[0][2];
//				temp_val[4] = grans[2].Square[1][2];
//				temp_val[5] = grans[2].Square[2][2];
//				temp_val[6] = grans[5].Square[2][2];
//				temp_val[7] = grans[5].Square[1][2];
//				temp_val[8] = grans[5].Square[0][2];
//				temp_val[9] = grans[4].Square[2][0];
//				temp_val[10] = grans[4].Square[1][0];
//				temp_val[11] = grans[4].Square[0][0];
//
//				grans[2].Square[0][2] = temp_val[0];
//				grans[2].Square[1][2] = temp_val[1];
//				grans[2].Square[2][2] = temp_val[2];
//				grans[5].Square[0][2] = temp_val[3];
//				grans[5].Square[1][2] = temp_val[4];
//				grans[5].Square[2][2] = temp_val[5];
//				grans[4].Square[0][0] = temp_val[6];
//				grans[4].Square[1][0] = temp_val[7];
//				grans[4].Square[2][0] = temp_val[8];
//				grans[0].Square[0][2] = temp_val[9];
//				grans[0].Square[1][2] = temp_val[10];
//				grans[0].Square[2][2] = temp_val[11];
//			}
//
//		}
//
//		if (numb == 4)
//		{
//			if (side == 'r')
//			{
//				char temp_val[12];
//
//				temp_val[0] = grans[0].Square[0][0];
//				temp_val[1] = grans[0].Square[0][1];
//				temp_val[2] = grans[0].Square[0][2];
//				temp_val[3] = grans[1].Square[0][0];
//				temp_val[4] = grans[1].Square[1][0];
//				temp_val[5] = grans[1].Square[2][0];
//				temp_val[6] = grans[3].Square[0][2];
//				temp_val[7] = grans[3].Square[1][2];
//				temp_val[8] = grans[3].Square[2][2];
//				temp_val[9] = grans[5].Square[2][0];
//				temp_val[10] = grans[5].Square[2][1];
//				temp_val[11] = grans[5].Square[2][2];
//
//				grans[0].Square[0][0] = temp_val[6];
//				grans[0].Square[0][1] = temp_val[7];
//				grans[0].Square[0][2] = temp_val[8];
//				grans[1].Square[0][0] = temp_val[2];
//				grans[1].Square[1][0] = temp_val[1];
//				grans[1].Square[2][0] = temp_val[0];
//				grans[3].Square[0][2] = temp_val[11];
//				grans[3].Square[1][2] = temp_val[10];
//				grans[3].Square[2][2] = temp_val[9];
//				grans[5].Square[2][0] = temp_val[3];
//				grans[5].Square[2][1] = temp_val[4];
//				grans[5].Square[2][2] = temp_val[5];
//			}
//			else
//			{
//				char temp_val[12];
//
//				temp_val[0] = grans[0].Square[0][0];
//				temp_val[1] = grans[0].Square[0][1];
//				temp_val[2] = grans[0].Square[0][2];
//				temp_val[3] = grans[1].Square[0][0];
//				temp_val[4] = grans[1].Square[1][0];
//				temp_val[5] = grans[1].Square[2][0];
//				temp_val[6] = grans[3].Square[0][2];
//				temp_val[7] = grans[3].Square[1][2];
//				temp_val[8] = grans[3].Square[2][2];
//				temp_val[9] = grans[5].Square[2][0];
//				temp_val[10] = grans[5].Square[2][1];
//				temp_val[11] = grans[5].Square[2][2];
//
//				grans[0].Square[0][0] = temp_val[5];
//				grans[0].Square[0][1] = temp_val[4];
//				grans[0].Square[0][2] = temp_val[3];
//				grans[1].Square[0][0] = temp_val[9];
//				grans[1].Square[1][0] = temp_val[10];
//				grans[1].Square[2][0] = temp_val[11];
//				grans[3].Square[0][2] = temp_val[0];
//				grans[3].Square[1][2] = temp_val[1];
//				grans[3].Square[2][2] = temp_val[2];
//				grans[5].Square[2][0] = temp_val[8];
//				grans[5].Square[2][1] = temp_val[7];
//				grans[5].Square[2][2] = temp_val[6];
//			}
//
//		}
//
//		if (numb == 5)
//		{
//			if (side == 'r')
//			{
//				char temp_val[12];
//
//				temp_val[0] = grans[4].Square[2][0];
//				temp_val[1] = grans[4].Square[2][1];
//				temp_val[2] = grans[4].Square[2][2];
//				temp_val[3] = grans[1].Square[2][0];
//				temp_val[4] = grans[1].Square[2][1];
//				temp_val[5] = grans[1].Square[2][2];
//				temp_val[6] = grans[2].Square[2][0];
//				temp_val[7] = grans[2].Square[2][1];
//				temp_val[8] = grans[2].Square[2][2];
//				temp_val[9] = grans[3].Square[2][0];
//				temp_val[10] = grans[3].Square[2][1];
//				temp_val[11] = grans[3].Square[2][2];
//
//				grans[1].Square[2][0] = temp_val[0];
//				grans[1].Square[2][1] = temp_val[1];
//				grans[1].Square[2][2] = temp_val[2];
//				grans[2].Square[2][0] = temp_val[3];
//				grans[2].Square[2][1] = temp_val[4];
//				grans[2].Square[2][2] = temp_val[5];
//				grans[3].Square[2][0] = temp_val[6];
//				grans[3].Square[2][1] = temp_val[7];
//				grans[3].Square[2][2] = temp_val[8];
//				grans[4].Square[2][0] = temp_val[9];
//				grans[4].Square[2][1] = temp_val[10];
//				grans[4].Square[2][2] = temp_val[11];
//
//			}
//			else
//			{
//				char temp_val[12];
//
//				temp_val[0] = grans[2].Square[2][0];
//				temp_val[1] = grans[2].Square[2][1];
//				temp_val[2] = grans[2].Square[2][2];
//				temp_val[3] = grans[3].Square[2][0];
//				temp_val[4] = grans[3].Square[2][1];
//				temp_val[5] = grans[3].Square[2][2];
//				temp_val[6] = grans[4].Square[2][0];
//				temp_val[7] = grans[4].Square[2][1];
//				temp_val[8] = grans[4].Square[2][2];
//				temp_val[9] = grans[1].Square[2][0];
//				temp_val[10] = grans[1].Square[2][1];
//				temp_val[11] = grans[1].Square[2][2];
//
//				grans[1].Square[2][0] = temp_val[0];
//				grans[1].Square[2][1] = temp_val[1];
//				grans[1].Square[2][2] = temp_val[2];
//				grans[2].Square[2][0] = temp_val[3];
//				grans[2].Square[2][1] = temp_val[4];
//				grans[2].Square[2][2] = temp_val[5];
//				grans[3].Square[2][0] = temp_val[6];
//				grans[3].Square[2][1] = temp_val[7];
//				grans[3].Square[2][2] = temp_val[8];
//				grans[4].Square[2][0] = temp_val[9];
//				grans[4].Square[2][1] = temp_val[10];
//				grans[4].Square[2][2] = temp_val[11];
//			}
//		}
//
//	}
//	
//	bool check_compl_position()
//	{
//		for (int i = 0; i < 6; i++)
//		{
//			char temp = grans[i].Square[0][0];
//
//			for (int j = 0; j < 3; j++)
//			{
//				for (int k = 0; k < 3; k++)
//				{
//					if (temp != grans[i].Square[j][k])
//					{
//						cout << "куб собран Ќ≈правильно!" << endl;
//						return 0;
//					}
//				}
//				
//			}
//
//			if (i == 5)
//			{
//				cout << "куб собран правильно!!" << endl;
//				return 1;
//			}
//		}
//	}
//
//	//Show kub func
//	/*void showKUB()
//	{
//
//		for (int i = 0; i < 6; i++)
//		{
//			if (i == 0)
//			{
//				cout << "                         -------------------" << endl;
//
//				for (int x = 0; x < 3; x++)
//				{
//					cout << "\t" "\t" << "       " << "  |_ " << grans[i].Square[x][0] << " _|_ " << grans[i].Square[x][1] << " _|_ " << grans[i].Square[x][2] << " _|" << endl;
//				}
//
//				cout << "   -------------------------------------------------------------------------------------" << endl;
//
//			}
//
//			if (i == 5)
//			{
//				cout << "   -------------------------------------------------------------------------------------" << endl;
//
//				for (int x = 0; x < 3; x++)
//				{
//					cout << "\t" "\t" << "       " << "  |_ " << grans[i].Square[x][0] << " _|_ " << grans[i].Square[x][1] << " _|_ " << grans[i].Square[x][2] << " _|" << endl;
//				}
//
//				cout << "                         -------------------" << endl << endl;
//			}
//
//
//			if (i == 1)
//			{
//				for (int x = 0; x < 3; x++)
//				{
//					for (int j = 1; j < 5; j++)
//					{
//						cout << "   |_ " << grans[j].Square[x][0] << " _|_ " << grans[j].Square[x][1] << " _|_ " << grans[j].Square[x][2] << " _|";
//					}
//
//					cout << "\n";
//				}
//
//			}
//
//		}
//
//	}*/ 
//
//	
//
//private:
//
//	void  circle90(int numb, char side)
//	{
//		char temp_gr[3][3];
//
//		if (side == 'l')
//		{
//			for (int i = 0; i < 3; i++)
//			{
//				for (int j = 0; j < 3; j++)
//				{
//					temp_gr[i][j] = grans[numb].Square[j][2 - i];
//				}
//			}
//
//		}
//		else
//		{
//			for (int i = 0; i < 3; i++)
//			{
//				for (int j = 0; j < 3; j++)
//				{
//					temp_gr[i][j] = grans[numb].Square[2 - j][i];
//				}
//			}
//		}
//
//
//		for (int i = 0; i < 3; i++)
//		{
//			for (int j = 0; j < 3; j++)
//			{
//				grans[numb].Square[i][j] = temp_gr[i][j];
//
//			}
//		}
//
//	}
//	
//};

//ostream& operator << (ostream& cout,const CubikRubick& a)
//{
//	
//	for (int i = 0; i < 6; i++)
//	{
//		if (i == 0)
//		{
//			cout << "                         -------------------" << endl;
//
//			for (int x = 0; x < 3; x++)
//			{
//				cout << "\t" "\t" << "       " << "  |_ " << a.grans[i].Square[x][0] << " _|_ " << a.grans[i].Square[x][1] << " _|_ " << a.grans[i].Square[x][2] << " _|" << endl;
//			}
//
//			cout << "   -------------------------------------------------------------------------------------" << endl;
//
//		}
//
//		if (i == 5)
//		{
//			cout << "   -------------------------------------------------------------------------------------" << endl;
//
//			for (int x = 0; x < 3; x++)
//			{
//				cout << "\t" "\t" << "       " << "  |_ " << a.grans[i].Square[x][0] << " _|_ " << a.grans[i].Square[x][1] << " _|_ " << a.grans[i].Square[x][2] << " _|" << endl;
//			}
//
//			cout << "                         -------------------" << endl << endl;
//		}
//
//
//		if (i == 1)
//		{
//			for (int x = 0; x < 3; x++)
//			{
//				for (int j = 1; j < 5; j++)
//				{
//					cout << "   |_ " << a.grans[j].Square[x][0] << " _|_ " << a.grans[j].Square[x][1] << " _|_ " << a.grans[j].Square[x][2] << " _|";
//				}
//
//				cout << "\n";
//			}
//
//		}
//
//	}
//	
//	return cout;
//}



int main() 
{
	setlocale(LC_ALL, "ru");
	srand(time(0));

	CubikRubick a;

	cout << a;
	a.check_compl_position();
	
	
	a.povorot(2, 'r');
	a.povorot(3, 'r');
	a.povorot(0, 'r');
	a.povorot(4, 'r');
	a.povorot(1, 'r');
	a.povorot(5, 'r');
	a.povorot(2, 'l');
	a.povorot(3, 'l');
	a.povorot(0, 'l');
	a.povorot(4, 'l');
	a.povorot(1, 'l');
	a.povorot(5, 'l');
	
	cout << a;

	CubikRubick kkk("1.txt");
	
	cout << kkk;

	a.check_compl_position();

	

	system("pause");
	return 0;
}



