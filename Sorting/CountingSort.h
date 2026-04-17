#ifndef COUNTINGSORT_H
#define COUNTINGSORT_H

#include "SortStragety.h"

class CountingSort: public SortStragety
{
  public:
    CountingSort(): SortStragety("Counting Sort") {}
    virtual void Sort(Data data, Compare compare);
  private:
    void countingSort(Data &data);
};

#endif
