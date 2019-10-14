
#ifndef CPPKATA_TEST_STUBBUDGETREPO_H_
#define CPPKATA_TEST_STUBBUDGETREPO_H_

#include <gmock/gmock.h>
#include <vector>
#include "../src/BudgetRepo.h"

class StubBudgetRepo: public BudgetRepo{
 public:
  MOCK_METHOD0(FindAll, std::vector<Budget>());
};

#endif //CPPKATA_TEST_STUBBUDGETREPO_H_
