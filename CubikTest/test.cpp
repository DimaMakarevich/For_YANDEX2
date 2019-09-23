#include "pch.h"
#include "../Project1/Header.cpp" 
//#include"gtest/gtest.h"


TEST(HeaderTest, ComplTest) 
{
	CubikRubick a;
	
	ASSERT_EQ(true, a.check_compl_position() );
	ASSERT_EQ(false, !a.check_compl_position() );

	a.make_random();

	ASSERT_EQ(false, a.check_compl_position() );
}

TEST(HeaderTest, MakeRandTest)
{
	CubikRubick a;

	a.make_random();
	
	ASSERT_EQ(false, a.check_compl_position());
}

TEST(HeaderTest, PovorotTest)
{
	CubikRubick a;

	ASSERT_EQ(true, a.check_compl_position());
	a.povorot(0, 'r');
	ASSERT_EQ(false, a.check_compl_position());
	a.povorot(0, 'l');
	ASSERT_EQ(true, a.check_compl_position());
}


TEST(HeaderTest, ALL_PovorotTest)
{
	CubikRubick a;

	ASSERT_EQ(true, a.check_compl_position());
	
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

	ASSERT_EQ(false, a.check_compl_position());

	a.povorot(5, 'r');
	a.povorot(1, 'r');
	a.povorot(4, 'r');
	a.povorot(0, 'r');
	a.povorot(3, 'r');
	a.povorot(2, 'r');
	a.povorot(5, 'l');
	a.povorot(1, 'l');
	a.povorot(4, 'l');
	a.povorot(0, 'l');
	a.povorot(3, 'l');
	a.povorot(2, 'l');

	ASSERT_EQ(true, a.check_compl_position());
}

//class Test_povorot : public::testing::Test
//{
//	CubikRubick a;
//};
//
//
//
//TEST_F(Test_povorot, dsgdgsdg)
//{
//	CubikRubick a;
//	
//}


//int main(/*int argc, char **argv*/)
//{
//	//esting::InitGoogleTest(&argc, argv);
//	return RUN_ALL_TESTS();
//}
