#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

#include "Search.h"

class BinarySearch: public SearchStrategy
{
  public:

    BinarySearch(): SearchStrategy("Binary Search") {}

    bool Search(int A[], int n, int value) override;

  private:
    bool binarySearch(int A[], int left, int right, int value);
};



#endif
