#include "pch.h"
#include "../Project1/Header.cpp" 
//#include"gtest/gtest.h"

TEST(HeaderTest, complTest) 
{
	RubiksCube a;
	
	ASSERT_EQ(true, a.isCheckComplPosition() );
	ASSERT_EQ(false, !a.isCheckComplPosition() );

	a.makeRandom();

	ASSERT_EQ(false, a.isCheckComplPosition() );
}

TEST(HeaderTest, makeRandTest)
{
	RubiksCube a;

	a.makeRandom();
	
	ASSERT_EQ(false, a.isCheckComplPosition());
}

TEST(HeaderTest, turnTest_0)
{
	RubiksCube a;

	ASSERT_EQ(true, a.isCheckComplPosition());
	a.turn(0, 'r');
	ASSERT_EQ(false, a.isCheckComplPosition());
	a.turn(0, 'l');
	ASSERT_EQ(true, a.isCheckComplPosition());
}

TEST(HeaderTest, turnTest_1)
{
	RubiksCube a;

	ASSERT_EQ(true, a.isCheckComplPosition());
	a.turn(2, 'r');
	ASSERT_EQ(false, a.isCheckComplPosition());
	a.turn(2, 'l');
	ASSERT_EQ(true, a.isCheckComplPosition());
}

TEST(HeaderTest, turnTest_2)
{
	RubiksCube a;

	ASSERT_EQ(true, a.isCheckComplPosition());
	a.turn(2, 'r');
	ASSERT_EQ(false, a.isCheckComplPosition());
	a.turn(2, 'l');
	ASSERT_EQ(true, a.isCheckComplPosition());
}

TEST(HeaderTest, turnTest_3)
{
	RubiksCube a;

	ASSERT_EQ(true, a.isCheckComplPosition());
	a.turn(3, 'r');
	ASSERT_EQ(false, a.isCheckComplPosition());
	a.turn(3, 'l');
	ASSERT_EQ(true, a.isCheckComplPosition());
}

TEST(HeaderTest, turnTest_4)
{
	RubiksCube a;

	ASSERT_EQ(true, a.isCheckComplPosition());
	a.turn(4, 'r');
	ASSERT_EQ(false, a.isCheckComplPosition());
	a.turn(4, 'l');
	ASSERT_EQ(true, a.isCheckComplPosition());
}

TEST(HeaderTest, turnTest_5)
{
	RubiksCube a;

	ASSERT_EQ(true, a.isCheckComplPosition());
	a.turn(5, 'r');
	ASSERT_EQ(false, a.isCheckComplPosition());
	a.turn(5, 'l');
	ASSERT_EQ(true, a.isCheckComplPosition());
}

TEST(HeaderTest, allTurnTest)
{
	RubiksCube a;

	ASSERT_EQ(true, a.isCheckComplPosition());
	
	a.turn(2, 'r');
	a.turn(3, 'r');
	a.turn(0, 'r');
	a.turn(4, 'r');
	a.turn(1, 'r');
	a.turn(5, 'r');
	a.turn(2, 'l');
	a.turn(3, 'l');
	a.turn(0, 'l');
	a.turn(4, 'l');
	a.turn(1, 'l');
	a.turn(5, 'l');

	ASSERT_EQ(false, a.isCheckComplPosition());

	a.turn(5, 'r');
	a.turn(1, 'r');
	a.turn(4, 'r');
	a.turn(0, 'r');
	a.turn(3, 'r');
	a.turn(2, 'r');
	a.turn(5, 'l');
	a.turn(1, 'l');
	a.turn(4, 'l');
	a.turn(0, 'l');
	a.turn(3, 'l');
	a.turn(2, 'l');

	ASSERT_EQ(true, a.isCheckComplPosition());
}

TEST(HeaderTest, baseConstruktorTest)
{
	RubiksCube a;

	ASSERT_EQ(true, a.isCheckComplPosition());
}

TEST(HeaderTest, baseConstruktorTest_2)
{
	RubiksCube a;

	a.turn(0, 'r');
	a.turn(0, 'l');

	ASSERT_EQ(true, a.isCheckComplPosition());
}

TEST(HeaderTest, baseConstruktorTest_3)
{
	RubiksCube a;

	a.turn(1, 'r');
	a.turn(4, 'l');

	ASSERT_EQ(false, a.isCheckComplPosition());
}

TEST(HeaderTest, overloadConstruktorTest)
{
	RubiksCube a("C:\\Users\\NotePad\\Desktop\\Sem 3\\ppvis\\laba 1\\Project1\\Project1\\1.txt");
	
	ASSERT_EQ(true, a.isCheckComplPosition());
}

TEST(HeaderTest, overload_construktor_test_2)
{
	RubiksCube v("C:\\Users\\NotePad\\Desktop\\Sem 3\\ppvis\\laba 1\\Project1\\Project1\\2.txt");

	ASSERT_EQ(false, v.isCheckComplPosition());
}

TEST(HeaderTest, overloadConstruktorest_3)
{
	RubiksCube a("C:\\Users\\NotePad\\Desktop\\Sem 3\\ppvis\\laba 1\\Project1\\Project1\\1.txt");

	a.turn(3, 'r');
	a.turn(3, 'l');

	ASSERT_EQ(true, a.isCheckComplPosition());
}

TEST(HeaderTest, turnTest_0_3)
{
	RubiksCube a;

	for (int i = 0; i < 50; i++)
	{
		a.turn(0, 'l');
		a.turn(3, 'r');
	}

	for (int i = 0; i < 50; i++)
	{
		a.turn(3, 'l');
		a.turn(0, 'r');
	}

	ASSERT_EQ(true, a.isCheckComplPosition());
	
}

TEST(HeaderTest, turnTest_0_1)
{
	RubiksCube a;

	for (int i = 0; i < 50; i++)
	{
		a.turn(0, 'r');
		a.turn(1, 'l');
	}

	for (int i = 0; i < 50; i++)
	{
		a.turn(1, 'r');
		a.turn(0, 'l');
	}

	ASSERT_EQ(true, a.isCheckComplPosition());

}

TEST(HeaderTest, turnTest_0_2)
{
	RubiksCube a;

	for (int i = 0; i < 50; i++)
	{
		a.turn(0, 'r');
		a.turn(2, 'l');
	}

	for (int i = 0; i < 50; i++)
	{
		a.turn(2, 'r');
		a.turn(0, 'l');
	}

	ASSERT_EQ(true, a.isCheckComplPosition());

}

TEST(HeaderTest, turnTest_0_2_3)
{
	RubiksCube a;

	for (int i = 0; i < 50; i++)
	{
		a.turn(0, 'r');
		a.turn(2, 'l');
		a.turn(3, 'r');
	}

	for (int i = 0; i < 50; i++)
	{
		a.turn(3, 'l');
		a.turn(2, 'r');
		a.turn(0, 'l');	
	}

	ASSERT_EQ(true, a.isCheckComplPosition());
}

TEST(HeaderTest, turnTest_0_2_1)
{
	RubiksCube a;

	for (int i = 0; i < 50; i++)
	{
		a.turn(0, 'r');
		a.turn(2, 'l');
		a.turn(1, 'r');
	}

	for (int i = 0; i < 50; i++)
	{
		a.turn(1, 'l');
		a.turn(2, 'r');
		a.turn(0, 'l');
	}

	ASSERT_EQ(true, a.isCheckComplPosition());
}

TEST(HeaderTest, turnTest_0_2_4)
{
	RubiksCube a;

	for (int i = 0; i < 50; i++)
	{
		a.turn(0, 'r');
		a.turn(2, 'l');
		a.turn(4, 'r');
	}

	for (int i = 0; i < 50; i++)
	{
		a.turn(4, 'l');
		a.turn(2, 'r');
		a.turn(0, 'l');
	}

	ASSERT_EQ(true, a.isCheckComplPosition());
}

TEST(HeaderTest, turnTest_5_2_1)
{
	RubiksCube a;

	for (int i = 0; i < 50; i++)
	{
		a.turn(5, 'r');
		a.turn(2, 'l');
		a.turn(1, 'r');
	}

	for (int i = 0; i < 50; i++)
	{
		a.turn(1, 'l');
		a.turn(2, 'r');
		a.turn(5, 'l');
	}

	ASSERT_EQ(true, a.isCheckComplPosition());
}

TEST(HeaderTest, turnTest_5_2_3)
{
	RubiksCube a;

	for (int i = 0; i < 50; i++)
	{
		a.turn(5, 'r');
		a.turn(2, 'l');
		a.turn(3, 'r');
	}

	for (int i = 0; i < 50; i++)
	{
		a.turn(3, 'l');
		a.turn(2, 'r');
		a.turn(5, 'l');
	}

	ASSERT_EQ(true, a.isCheckComplPosition());
}

TEST(HeaderTest, turnTest_5_2_4)
{
	RubiksCube a;

	for (int i = 0; i < 50; i++)
	{
		a.turn(5, 'r');
		a.turn(2, 'l');
		a.turn(4, 'r');
	}

	for (int i = 0; i < 50; i++)
	{
		a.turn(3, 'l');
		a.turn(2, 'r');
		a.turn(4, 'l');
	}

	ASSERT_EQ(true, a.isCheckComplPosition());
}

TEST(HeaderTest, turnTest_5_2_0)
{
	RubiksCube a;

	for (int i = 0; i < 50; i++)
	{
		a.turn(5, 'r');
		a.turn(2, 'l');
		a.turn(0, 'r');
	}

	for (int i = 0; i < 50; i++)
	{
		a.turn(0, 'l');
		a.turn(2, 'r');
		a.turn(5, 'l');
	}

	ASSERT_EQ(true, a.isCheckComplPosition());
}

TEST(HeaderTest, turnTest_3_1_2)
{
	RubiksCube a;

	for (int i = 0; i < 50; i++)
	{
		a.turn(3, 'r');
		a.turn(1, 'l');
		a.turn(2, 'r');
	}

	for (int i = 0; i < 50; i++)
	{
		a.turn(2, 'l');
		a.turn(1, 'r');
		a.turn(3, 'l');
	}

	ASSERT_EQ(true, a.isCheckComplPosition());
}

TEST(HeaderTest, makeRandTest_2)
{
	RubiksCube a;

	a.makeRandom();
	ASSERT_EQ(false, a.isCheckComplPosition());

	a.makeRandom();

	ASSERT_EQ(false, a.isCheckComplPosition());

}

TEST(HeaderTest, makeRandTest_3)
{
	RubiksCube a;

	a.makeRandom();
	ASSERT_EQ(false, a.isCheckComplPosition());

	a.makeRandom();

	ASSERT_EQ(false, a.isCheckComplPosition());

	a.makeRandom();

	ASSERT_EQ(false, a.isCheckComplPosition());

}

TEST(HeaderTest, complTest_2)
{
	RubiksCube a;

	ASSERT_EQ(true, a.isCheckComplPosition());
	ASSERT_EQ(false, !a.isCheckComplPosition());

	a.turn(3, 'r');
	a.turn(3, 'l');

	ASSERT_EQ(true, a.isCheckComplPosition());
}

TEST(HeaderTest, complTest_3)
{
	RubiksCube a;

	ASSERT_EQ(true, a.isCheckComplPosition());
	ASSERT_EQ(false, !a.isCheckComplPosition());

	a.turn(3, 'r');
	
	ASSERT_EQ(false, a.isCheckComplPosition());
}

TEST(HeaderTest, compareTest)
{
	RubiksCube a, b;

	ASSERT_EQ(true, a==b);
}

TEST(HeaderTest, compareTest_2)
{
	RubiksCube a, b;
	a.turn(0, 'r');

	ASSERT_EQ(false, a == b);

}

TEST(HeaderTest, compareTest_3)
{
	RubiksCube a, b;

	a.turn(0, 'r');
	b.turn(0, 'l');
	b.turn(0, 'l');
	b.turn(0, 'l');

	ASSERT_EQ(true, a == b);

}






