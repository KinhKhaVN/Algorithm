#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include "SortStragety.h"
class InsertionSort: public SortStragety
{
  public:
    InsertionSort(): SortStragety("Insertion Sort") {}
    void Sort(Data data, Compare compare) override;
  private:
    void insertionSort(Data &data, Compare compare);
};




#endif
