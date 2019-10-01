/*!
\file
\brief Файл описывает методы класса
*/

#include"Header.h"

/*! \brief Функция производит поворот грани 0 вправо */
/*! \details Создается копия текущего объекта (кубика) и меняем цвета грани */
void RubiksCube:: turnSideNumber0Right()
{
	RubiksCube temp=*this;

	faces[1].cells[0].value = temp.faces[2].cells[0].value;
	faces[1].cells[1].value = temp.faces[2].cells[1].value;
	faces[1].cells[2].value = temp.faces[2].cells[2].value;
	faces[2].cells[0].value = temp.faces[3].cells[0].value;
	faces[2].cells[1].value = temp.faces[3].cells[1].value;
	faces[2].cells[2].value = temp.faces[3].cells[2].value;
	faces[3].cells[0].value = temp.faces[4].cells[0].value;
	faces[3].cells[1].value = temp.faces[4].cells[1].value;
	faces[3].cells[2].value = temp.faces[4].cells[2].value;
	faces[4].cells[0].value = temp.faces[1].cells[0].value;
	faces[4].cells[1].value = temp.faces[1].cells[1].value;
	faces[4].cells[2].value = temp.faces[1].cells[2].value;
}

/*! \brief Функция производит поворот грани 1 вправо */
void RubiksCube::turnSideNumber1Right()
{
	RubiksCube temp = *this;

	faces[0].cells[0].value = temp.faces[4].cells[8].value;
	faces[0].cells[3].value = temp.faces[4].cells[5].value;
	faces[0].cells[6].value = temp.faces[4].cells[2].value;
	faces[2].cells[0].value = temp.faces[0].cells[0].value;
	faces[2].cells[3].value = temp.faces[0].cells[3].value;
	faces[2].cells[6].value = temp.faces[0].cells[6].value;
	faces[5].cells[0].value = temp.faces[2].cells[0].value;
	faces[5].cells[3].value = temp.faces[2].cells[3].value;
	faces[5].cells[6].value = temp.faces[2].cells[6].value;
	faces[4].cells[2].value = temp.faces[5].cells[6].value;
	faces[4].cells[5].value = temp.faces[5].cells[3].value;
	faces[4].cells[8].value = temp.faces[5].cells[0].value;
}

/*! \brief Функция производит поворот грани 2 вправо */
void RubiksCube::turnSideNumber2Right()
{
	RubiksCube temp = *this;

	faces[0].cells[6].value = temp.faces[1].cells[8].value;
	faces[0].cells[7].value = temp.faces[1].cells[5].value;
	faces[0].cells[8].value = temp.faces[1].cells[2].value;
	faces[1].cells[2].value = temp.faces[5].cells[0].value;
	faces[1].cells[5].value = temp.faces[5].cells[1].value;
	faces[1].cells[8].value = temp.faces[5].cells[2].value;
	faces[3].cells[0].value = temp.faces[0].cells[6].value;
	faces[3].cells[3].value = temp.faces[0].cells[7].value;
	faces[3].cells[6].value = temp.faces[0].cells[8].value;
	faces[5].cells[0].value = temp.faces[3].cells[6].value;
	faces[5].cells[1].value = temp.faces[3].cells[3].value;
	faces[5].cells[2].value = temp.faces[3].cells[0].value;
}

/*! \brief Функция производит поворот грани 3 вправо */
void RubiksCube::turnSideNumber3Right()
{
	RubiksCube temp = *this;

	faces[4].cells[0].value = temp.faces[0].cells[8].value;
	faces[4].cells[3].value = temp.faces[0].cells[5].value;
	faces[4].cells[6].value = temp.faces[0].cells[2].value;
	faces[0].cells[2].value = temp.faces[2].cells[2].value;
	faces[0].cells[5].value = temp.faces[2].cells[5].value;
	faces[0].cells[8].value = temp.faces[2].cells[8].value;
	faces[2].cells[2].value = temp.faces[5].cells[2].value;
	faces[2].cells[5].value = temp.faces[5].cells[5].value;
	faces[2].cells[8].value = temp.faces[5].cells[8].value;
	faces[5].cells[2].value = temp.faces[4].cells[6].value;
	faces[5].cells[5].value = temp.faces[4].cells[3].value;
	faces[5].cells[8].value = temp.faces[4].cells[0].value;	
}

/*! \brief Функция производит поворот грани 4 вправо */
void RubiksCube::turnSideNumber4Right()
{
	RubiksCube temp = *this;

	faces[0].cells[0].value = temp.faces[3].cells[2].value;
	faces[0].cells[1].value = temp.faces[3].cells[5].value;
	faces[0].cells[2].value = temp.faces[3].cells[8].value;
	faces[1].cells[0].value = temp.faces[0].cells[2].value;
	faces[1].cells[3].value = temp.faces[0].cells[1].value;
	faces[1].cells[6].value = temp.faces[0].cells[0].value;
	faces[3].cells[2].value = temp.faces[5].cells[8].value;
	faces[3].cells[5].value = temp.faces[5].cells[7].value;
	faces[3].cells[8].value = temp.faces[5].cells[6].value;
	faces[5].cells[6].value = temp.faces[1].cells[0].value;
	faces[5].cells[7].value = temp.faces[1].cells[3].value;
	faces[5].cells[8].value = temp.faces[1].cells[6].value;
	
}

/*! \brief Функция производит поворот грани 5 вправо */
void RubiksCube::turnSideNumber5Right()
{
	RubiksCube temp = *this;

	faces[1].cells[6].value = temp.faces[4].cells[6].value;
	faces[1].cells[7].value = temp.faces[4].cells[7].value;
	faces[1].cells[8].value = temp.faces[4].cells[8].value;
	faces[2].cells[6].value = temp.faces[1].cells[6].value;
	faces[2].cells[7].value = temp.faces[1].cells[7].value;
	faces[2].cells[8].value = temp.faces[1].cells[8].value;
	faces[3].cells[6].value = temp.faces[2].cells[6].value;
	faces[3].cells[7].value = temp.faces[2].cells[7].value;
	faces[3].cells[8].value = temp.faces[2].cells[8].value;
	faces[4].cells[6].value = temp.faces[3].cells[6].value;
	faces[4].cells[7].value = temp.faces[3].cells[7].value;
	faces[4].cells[8].value = temp.faces[3].cells[8].value;
	
}
/*! \brief Описание конструктора класса */

/*! \details В конструкторе присваиваем клеткам грани значения */
RubiksCube::RubiksCube()
{
	
	char temp_value[] = ( "WOGRBY");///< Массив цветов, где W - белый, O - оранжевый и тд.

	

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			this->faces[i].cells[j].value = temp_value[i];	
		}
	}
}
/// \brief Описание перегруженного конструктора класса
/// \details В перегруженном конструкторе присваиваем клеткам грани значения из файла


/*!
\param[in] path Путь, из которого берем цвета кубика
*/
RubiksCube::RubiksCube(string path)
{
	fstream fin;
	fin.open(path);

	if (!fin.is_open())
	{
		cout << "error open" << endl;
	}


	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			fin>>faces[i].cells[j].value;
		}
	}

	fin.close();
}

/// \brief Вызываем функцию поворота грани
/// \details Совершаем рандомный поворот вправо или влево
void RubiksCube::makeRandom()
{
	char right = 'r';
	char left = 'l';
	char tempValueSide;
	
	const int MAXNUMBERFACE = 6; 
	const int MINNUMBERFACE = 0;
	const int MINNUMBERSIDE = 0;
	const int MAXNUMBERSIDE = 2;
	const int NUMBEROFTURNS = 20;

	for (int i = 0; i < NUMBEROFTURNS; i++)
	{
		int numberSide = rand() % MAXNUMBERSIDE + MINNUMBERSIDE;

		if (numberSide == 1)
		{
			tempValueSide = right;
		}
		else
		{
			tempValueSide = left;
		}
		
		this->turn(rand() % MAXNUMBERFACE + MINNUMBERFACE, tempValueSide);
	}
}
/// \brief Функция производит поворот грани

/*!
\param[in] numb Номер грани которую вращаем
\param[in] side Сторона, в которую вращаем грань
*/
void RubiksCube::turn(int numb, char side)
{
	this->turnCurrentFaceDegrees90(numb, side);

	if (numb == 0)
	{
		if (side == 'r')
		{
			this->turnSideNumber0Right();
		}
		else
		{
			this->turnSideNumber0Right();
			this->turnSideNumber0Right();
			this->turnSideNumber0Right();
		}

	}

	if (numb == 1)
	{
		if (side == 'r')
		{
			this->turnSideNumber1Right();
		}
		else
		{
			this->turnSideNumber1Right(); 
			this->turnSideNumber1Right(); 
			this->turnSideNumber1Right();
		}
	}

	if (numb == 2)
	{
		if (side == 'r')
		{
			this->turnSideNumber2Right();
		}
		else
		{
			this->turnSideNumber2Right();
			this->turnSideNumber2Right();
			this->turnSideNumber2Right();
		}

	}

	if (numb == 3)
	{
		if (side == 'r')
		{
			this->turnSideNumber3Right();
		}
		else
		{
			this->turnSideNumber3Right();
			this->turnSideNumber3Right();
			this->turnSideNumber3Right();
		}

	}

	if (numb == 4)
	{
		if (side == 'r')
		{
			this->turnSideNumber4Right();
			
		}
		else
		{
			this->turnSideNumber4Right();
			this->turnSideNumber4Right();
			this->turnSideNumber4Right();
		}

	}

	if (numb == 5)
	{
		if (side == 'r')
		{
			this->turnSideNumber5Right();
		}
		else
		{
			this->turnSideNumber5Right();
			this->turnSideNumber5Right();
			this->turnSideNumber5Right();
		}
	}

}

/*!
\brief Проверка куба на собранность
\return Собран или не собран кубик
*/
bool RubiksCube::isCheckComplPosition()
{
	for (int i = 0; i < 6; i++)
	{
		char temp = faces[i].cells[0].value;

		for (int j = 0; j < 9; j++)
		{
				if (temp != faces[i].cells[j].value)
				{
					cout << "куб собран НЕправильно!" << endl;
					return false;
				}
		}

		/*if (i == 5)
		{
			cout << "куб собран правильно!!" << endl;
			return true;
		}*/

	}

	return true;

}

/*!
\brief Поворот грани на 90 градусов

*/
void RubiksCube::turnCurrentFaceDegrees90(int numb, char side)
{
	char tempFace[9];

	for (int i = 0; i < 9; i++)
	{
		tempFace[i] = faces[numb].cells[i].value;
	}

	if (side == 'r')
	{
		faces[numb].cells[0].value = tempFace[6];
		faces[numb].cells[1].value = tempFace[3];
		faces[numb].cells[2].value = tempFace[0];
		faces[numb].cells[3].value = tempFace[7];
		faces[numb].cells[4].value = tempFace[4]; //
		faces[numb].cells[5].value = tempFace[1];
		faces[numb].cells[6].value = tempFace[8];
		faces[numb].cells[7].value = tempFace[5];
		faces[numb].cells[8].value = tempFace[2];

	}
	else
	{
		faces[numb].cells[0].value = tempFace[2];
		faces[numb].cells[1].value = tempFace[5];
		faces[numb].cells[2].value = tempFace[8];
		faces[numb].cells[3].value = tempFace[1];
		faces[numb].cells[4].value = tempFace[4]; //
		faces[numb].cells[5].value = tempFace[7];
		faces[numb].cells[6].value = tempFace[0];
		faces[numb].cells[7].value = tempFace[3];
		faces[numb].cells[8].value = tempFace[6];

	}
}

/*!
\brief Перегрузка параметров вывода
\return Возвращает кубик
*/
ostream& operator << (ostream& cout, const RubiksCube& a)
{

	for (int i = 0; i < 6; i++)
	{
		if (i == 0)
		{
			cout << "                         -------------------" << endl;

			cout << "\t" "\t" << "       " << "  |_ " << a.faces[i].cells[0].value << " _|_ " << a.faces[i].cells[1].value << " _|_ " << a.faces[i].cells[2].value << " _|" << endl;
			cout << "\t" "\t" << "       " << "  |_ " << a.faces[i].cells[3].value << " _|_ " << a.faces[i].cells[4].value << " _|_ " << a.faces[i].cells[5].value << " _|" << endl;
			cout << "\t" "\t" << "       " << "  |_ " << a.faces[i].cells[6].value << " _|_ " << a.faces[i].cells[7].value << " _|_ " << a.faces[i].cells[8].value << " _|" << endl;

			cout << "   -------------------------------------------------------------------------------------" << endl;

		}

		if (i == 5)
		{
			cout << "   -------------------------------------------------------------------------------------" << endl;

			cout << "\t" "\t" << "       " << "  |_ " << a.faces[i].cells[0].value << " _|_ " << a.faces[i].cells[1].value << " _|_ " << a.faces[i].cells[2].value << " _|" << endl;
			cout << "\t" "\t" << "       " << "  |_ " << a.faces[i].cells[3].value << " _|_ " << a.faces[i].cells[4].value << " _|_ " << a.faces[i].cells[5].value << " _|" << endl;
			cout << "\t" "\t" << "       " << "  |_ " << a.faces[i].cells[6].value << " _|_ " << a.faces[i].cells[7].value << " _|_ " << a.faces[i].cells[8].value << " _|" << endl;

			cout << "                         -------------------" << endl << endl;
		}


		if (i == 1)
		{
			
				for (int j = 1; j < 5; j++)
				{
					cout   << "   |_ " << a.faces[j].cells[0].value << " _|_ " << a.faces[j].cells[1].value << " _|_ " << a.faces[j].cells[2].value << " _|" ;
				
				}

				cout << "\n";

				for (int j = 1; j < 5; j++)
				{
					
					cout   << "   |_ " << a.faces[j].cells[3].value << " _|_ " << a.faces[j].cells[4].value << " _|_ " << a.faces[j].cells[5].value << " _|" ;
				}

				cout << "\n";

				for (int j = 1; j < 5; j++)
				{
					
					cout <<  "   |_ " << a.faces[j].cells[6].value << " _|_ " << a.faces[j].cells[7].value << " _|_ " << a.faces[j].cells[8].value << " _|" ;
				}

				cout << "\n";
			
		}

	}

	return cout;
}

/*!
\brief Перегрузка оератора сравнения "=="
\return Возвращает true или false
*/
bool operator==(const RubiksCube& left, const RubiksCube & right)
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (left.faces[i].cells[j].value != right.faces[i].cells[j].value)
			{
				return false;
			}
		}
	}

	return true;
}
