#include "PrintColorCode.h"
#include <gtest/gtest.h>

TEST(PrintColorCodeTestSuite, AssertColorCodeManualItemsCount){
//  Arrange
int expectedcount=25;
//act
int actualcount=printColorMap();
//Assert
ASSERT_EQ(expectedcount,actualcount);
}
