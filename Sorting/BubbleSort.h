#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "SortStragety.h"

class BubbleSort: public SortStragety
{
  public:
    BubbleSort(): SortStragety("Bubble Sort") {}
    void Sort(Data data, Compare compare) override;
  private:
    void bubbleSort(Data &data, Compare compare);
};




#endif
