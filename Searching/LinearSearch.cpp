#include <iostream>
#include <iomanip>
#include "LinearSearch.h"


bool LinearSearch::Search(int A[], int n, int value)
{
  if ( n < 0 ) return false;

  if ( A[n] == value ) return true;

  return Search( A, n - 1, value );
}


