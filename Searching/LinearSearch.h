#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

#include "Search.h"

class LinearSearch: public SearchStrategy
{
  public:

    LinearSearch(): SearchStrategy("Linear Search") {}
    bool Search(int A[], int n, int value) override;
};


#endif
