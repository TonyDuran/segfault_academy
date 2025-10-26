#include <gtest/gtest.h>
#include "segfault/vector.hpp"

TEST(VectorTest, SizeCheck) {
    segfault::Vector v(5);
    EXPECT_EQ(v.size(), 5);
}

TEST(VectorTest, DefaultEmpty) {
    segfault::Vector v;
    EXPECT_EQ(v.size(), 0);
}

