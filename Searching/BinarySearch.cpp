#include "BinarySearch.h"



bool BinarySearch::Search(int A[], int n, int value)
{
  return binarySearch(A, 0, n - 1, value);
}

bool BinarySearch::binarySearch(int A[], int left, int right, int value)
{
  if ( left > right ) return false;

  int mid = left + (right - left) / 2;

  if ( A[mid] == value ) return true;

  if ( value < A[mid] ) return binarySearch(A, left, mid - 1, value) ;
  else if ( value > A[mid] ) return binarySearch(A, mid + 1, right, value) ;

  return false;

}

