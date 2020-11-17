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
	bool actual = obj.isPalindomre("Not a palindrome");
	ASSERT_TRUE(actual);
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
