#include <gtest/gtest.h>
#include "../src/Calculator.h"

TEST(CalculatorTest, add){
  Calculator calculator;
  ASSERT_EQ(2, calculator.Add(1, 1));
}
