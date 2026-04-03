#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include "SortStragety.h"
class SelectionSort: public SortStragety
{
  public:
    SelectionSort(): SortStragety("Selection Sort") {}
    void Sort(Data data, Compare compare) override;
};




#endif
