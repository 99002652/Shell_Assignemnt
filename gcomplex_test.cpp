#include "gcomplex.h"
#include <gtest/gtest.h>
#include "gcomplex.cpp"


TEST(Complex,ParameterConstructor)
{
    Complex <int> a(5,6);
    EXPECT_EQ(5,a.re());
    EXPECT_EQ(6,a.img());
}
TEST(Complex,DefaultConstructor)
{
    Complex <int> a;
    EXPECT_EQ(0,a.re());
    EXPECT_EQ(0,a.img());
}
