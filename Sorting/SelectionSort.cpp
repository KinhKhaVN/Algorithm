#include "SelectionSort.h"
#include "Utility.h"
#include <cstdio>
#include <utility>

void SelectionSort::Sort(Data data, Compare compare)
{
  Data newData = data;

  selectionSort(newData, compare);

  newData.Print();
}

void SelectionSort::selectionSort(Data &data, Compare compare)
{

  for ( size_t i = 0; i < data.n; i++ )
  {
    size_t indexOfMin = i;

    for ( size_t j = i + 1; j < data.n; j++ )
      if ( compare(data[indexOfMin], data[j]) )
        indexOfMin = j;

    if ( indexOfMin != i )
      std::swap(data[i], data[indexOfMin]);
  }
}
