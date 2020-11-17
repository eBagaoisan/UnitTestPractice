/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, empty_palindrome){
	Practice obj;
	bool actual = obj.isPalindrome(" ");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, not_a_palindrome){
	Practice obj;
	bool actual = obj.isPalindrome("Not a palindrome");
	ASSERT_FALSE(actual);
}

TEST(PracticeTest, complex_palindrome){
	Practice obj;
	bool actual = obj.isPalindrome("Civic");
	ASSERT_TRUE(actual);
}
TEST(PracticeTest, capital_complex_palindrome){
	Practice obj;
	bool actual = obj.isPalindrome("MayAMoodyBabyDoomAYam");
	ASSERT_TRUE(actual);
}
TEST(PracticeTest, spaces_palindrome){
	Practice obj;
	bool actual = obj.isPalindrome("Murder for a jar of red rum");
	ASSERT_FALSE(actual);
}
TEST(PracticeTest, ascending_order){
	Practice obj;
	int first = 1;
	int second = 2;
	int third = 3;
	obj.sortDescending(first, second, third);
	ASSERT_GT(first, second);
	ASSERT_GT(first, third);
	ASSERT_GT(second, third);
}
TEST(PracticeTest, in_order){
	Practice obj;
	int first = 3;
	int second = 2;
	int third = 1;
	obj.sortDescending(first, second, third);
	ASSERT_GT(first, second);
	ASSERT_GT(first, third);
	ASSERT_GT(second, third);
}

TEST(PracticeTest, iron_maiden){
	Practice obj;
	int first = 6;
	int second = 6;
	int third = 6;
	obj.sortDescending(first, second, third);
	ASSERT_EQ(first, second);
	ASSERT_EQ(first, third);
	ASSERT_EQ(second, third);
}
TEST(PracticeTest, beautiful_disaster){
	Practice obj;
	int first = 1;
	int second = 1;
	int third = 3;
	obj.sortDescending(first, second, third);
	ASSERT_GT(first, second);
	ASSERT_GT(first, third);
	ASSERT_EQ(second, third);

}
