#include "InsertionSort.h"
#include "Utility.h"
#include <cstdio>


void InsertionSort::Sort(Data data, Compare compare)
{
  size_t size = data.n;
  Data newData = data;

  for (size_t i = 0; i < size - 1; i++)
  {
    size_t j = i + 1;
    int tmp = newData[j];
    while ( !compare(tmp, newData[j - 1]) &&
            j > 0) 
    {
      newData[j] = newData[j - 1];
      j--;
    }

    if (j >= 0 )
      newData[j] = tmp;
  }
  newData.Print();
}
