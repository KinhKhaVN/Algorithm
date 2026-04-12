#ifndef HEAPSORT_H
#define HEAPSORT_H

#include "SortStragety.h"
class HeapSort: public SortStragety
{
  public:
    HeapSort(): SortStragety("Heap Sort") {}
    virtual void Sort(Data data, Compare compare) override;
  private:
    void Heapify(Data &data, size_t index, size_t size, Compare compare);
    void heapSort(Data &data, size_t size, Compare compare);
};




#endif
