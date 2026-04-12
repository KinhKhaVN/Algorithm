#ifndef SHAKERSORT_H
#define SHAKERSORT_H

#include "SortStragety.h"
class ShakerSort: public SortStragety
{
  public:
    ShakerSort(): SortStragety("Shaker Sort") {}
    virtual void Sort(Data data, Compare compare) override;
  private:
    void shakerSort(Data &data, Compare compare);
};


#endif
