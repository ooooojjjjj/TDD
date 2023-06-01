#include "pch.h"
#include "../TDD_interest/Interest.cpp"

TEST(TestCaseName, InitInterest_100_5) 
{
    Interest cInterest(100, 5);

    cInterest.ApplyInterst();
    
    EXPECT_EQ(105, cInterest.GetAmount());
}

TEST(TestCaseName, InitInterest_1000_3)
{
    Interest cInterest(1000, 3);

    cInterest.ApplyInterst();

    EXPECT_EQ(1030, cInterest.GetAmount());
}

TEST(TestCaseName, ChangeInterest_1000_5)
{
    Interest cInterest(1000, 3);

    cInterest.SetInterest(5);
    cInterest.ApplyInterst();

    EXPECT_EQ(1050, cInterest.GetAmount());
}

TEST(TestCaseName, GetExpectMoneyAfterYears_5)
{
    Interest cInterest(6000, 5);

    EXPECT_EQ(7657, cInterest.GetExpectMoneyAfterYears(5));
}