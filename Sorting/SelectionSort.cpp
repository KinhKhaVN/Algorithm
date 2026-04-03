#include "SelectionSort.h"
#include "Utility.h"
#include <cstdio>
#include <utility>


void SelectionSort::Sort(Data data, Compare compare)
{
  size_t size = data.n;
  Data newData = data;

  for ( size_t i = 0; i < size; i++ )
  {
    size_t indexOfMin = i;

    for ( size_t j = i + 1; j < size; j++ )
      if ( compare(newData[indexOfMin], newData[j]) )
        indexOfMin = j;

    if ( indexOfMin != i )
      std::swap(newData[i], newData[indexOfMin]);
  }

  puts(title);

  newData.Print();
}
