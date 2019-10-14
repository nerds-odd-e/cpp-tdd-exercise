#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <vector>
#include "StubBudgetRepo.h"

using testing::NiceMock;
using testing::Return;

TEST(MockTest, stub){
  NiceMock<StubBudgetRepo> stubRepo;
  std::vector<Budget> budgets;
  budgets.emplace_back();
  budgets.emplace_back();
  ON_CALL(stubRepo, FindAll()).WillByDefault(Return(budgets));

  ASSERT_EQ(2, stubRepo.FindAll().size());
}

