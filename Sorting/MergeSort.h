#ifndef MERGESORT_H
#define MERGESORT_H

#include "SortStragety.h"
class MergeSort: public SortStragety
{
  public:
    MergeSort(): SortStragety("Merge Sort") {}
    virtual void Sort(Data data, Compare compare) override;
  public:
    void Merge(Data &data, size_t left, size_t mid, size_t right);
    void mergeSort(Data &data, size_t left, size_t right); 
};




#endif
