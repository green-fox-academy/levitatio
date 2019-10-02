#include <string>
#include <gtest/gtest.h>

std::string getApple () {
    return "apple2";
}
TEST(MyTest, test_apple) {
    //EXPECT_EQ(getApple(), "apple");
    ASSERT_EQ(getApple(), "apple2");
}