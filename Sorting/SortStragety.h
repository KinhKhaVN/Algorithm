#ifndef  SORTSTRAGETY_H
#define SORTSTRAGETY_H

#include "Data.h"
#include "Utility.h"

class SortStragety
{
  public:
    const char * title = "";
  public:
    SortStragety(const char * title): title(title) {}
    virtual ~SortStragety() {}
    virtual void Sort(Data data, Compare compare) = 0;
    
};




#endif
