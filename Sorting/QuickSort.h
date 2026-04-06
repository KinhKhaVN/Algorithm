#ifndef QUCIKSORT_H
#define QUCIKSORT_H

#include "SortStragety.h"
class QuickSort: public SortStragety
{
  public:
    QuickSort(): SortStragety("Quick Sort") {}
    virtual void Sort(Data data, Compare compare) override;
  private:
    void quickSort(Data &data, long long left, long long right, Compare compare);
};




#endif
