#include <vector>
#include <gtest/gtest.h>

int sumVector (const std::vector<int> &numbers){

    int result = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        result += numbers.at(i);
    }
    return result;
}

TEST(SumTest, test_firstSum) {
    std::vector<int> testNumber{1, 3, -5, 7, -2};
    ASSERT_EQ(sumVector(testNumber),4);
}

TEST(SumTest, test_secondSum) {
    std::vector<int> emptyVector;
    std::vector<int> oneElementVector{2};
    std::vector<int> multipleElementVector{2, 2, 2, 3, 4, 4, 7};
    std::vector<int> negativeElementVector{2, 2, 2, 3, -4, -4, 7};
    ASSERT_EQ(sumVector(emptyVector),0);
    ASSERT_EQ(sumVector(oneElementVector),2);
    ASSERT_EQ(sumVector(multipleElementVector),24);
    ASSERT_EQ(sumVector(negativeElementVector),8
    );
}