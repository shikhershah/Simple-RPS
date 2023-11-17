#include <iostream>

#include <gtest/gtest.h>

#include "User.h"

using namespace std;

/*
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}
*/
TEST(USERtests, FindUserTest)
{

   User user;
   //user.SetUserInput();
   //bool T = user.FindUser("Sam");
   //cout << T;
   EXPECT_EQ(user.FindUser("Sam"), 1);

}

TEST(USERtests, LoginInputTest)
{
   User user;

   EXPECT_EQ(user.GetLoginInput(), 'L');
}

//TEST(UserInputTests, )

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
