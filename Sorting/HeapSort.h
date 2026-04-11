#ifndef HEAPSORT_H
#define HEAPSORT_H

#include "SortStragety.h"
class HeapSort: public SortStragety
{
  public:
    HeapSort(): SortStragety("Heap Sort") {}
    virtual void Sort(Data data, Compare compare) override;
  public:
    void Heapify(Data &data, size_t index, size_t size);
    void heapSort(Data &data, size_t size);
};




#endif
