#ifndef CPPKATA_SRC_BUDGETREPO_H_
#define CPPKATA_SRC_BUDGETREPO_H_

#include <vector>
#include "Budget.h"

class BudgetRepo {
 public:
  virtual std::vector<Budget> FindAll() = 0;
  virtual ~BudgetRepo() = default;

};

#endif //CPPKATA_SRC_BUDGETREPO_H_
