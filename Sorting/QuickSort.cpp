#include "QuickSort.h"


void QuickSort::Sort(Data data, Compare compare)
{
  Data newData = data;

  quickSort(newData, 0, newData.n - 1, compare);

  newData.Print();
}

void QuickSort::quickSort(Data &data, long long left, long long right, Compare compare)
{
  if ( left >= right ) return;

  int mid = ( left + right ) / 2;
  int pivot = data[mid];
  long long  i = left;
  long long  j = right;

  while ( i <= j )
  {
    while ( compare(pivot, data[i]) ) i++;
    while ( compare(data[j] ,pivot) ) j--;

    if ( i <= j )
    {
      std::swap(data[i], data[j]);
      i++;
      j--;
    }
  }

  if ( left < j )
    quickSort(data, left,  j, compare);

  if ( i < right )
    quickSort(data,  i, right, compare);
}
