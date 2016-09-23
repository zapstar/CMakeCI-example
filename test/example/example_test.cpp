//
// Created by Thirumal Venkat on 21/09/16.
//

#include "gtest/gtest.h"
#include "example.h"

static void mul_test(int x, int y) {
    EXPECT_EQ(x * y, mul(x, y));
}

TEST(example, identity) {
    mul_test(20, 1);
}

TEST(example, zero) {
    mul_test(-19, 0);
}

TEST(example, positive) {
    mul_test(30, 19);
}

TEST(example, negative) {
    mul_test(-19, -27);
}