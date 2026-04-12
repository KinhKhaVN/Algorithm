#include "InsertionSort.h"
#include "Utility.h"
#include <cstdio>

void InsertionSort::Sort(Data data, Compare compare)
{
  Data newData = data;

  insertionSort(newData, compare);

  newData.Print();
}

void InsertionSort::insertionSort(Data &data, Compare compare)
{

  for (size_t i = 0; i < data.n - 1; i++)
  {
    size_t j = i + 1;
    int tmp = data[j];
    while ( !compare(tmp, data[j - 1]) &&
            j > 0) 
    {
      data[j] = data[j - 1];
      j--;
    }

    if (j >= 0 )
      data[j] = tmp;
  }
}
