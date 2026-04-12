#include "BubbleSort.h"
#include "Utility.h"
#include <cstdio>


void BubbleSort::Sort(Data data, Compare compare)
{
  Data newData = data;

  bubbleSort(newData, compare);

  newData.Print();
}

void BubbleSort::bubbleSort(Data &data, Compare compare)
{
  size_t size = data.n;
  for (size_t i = 0; i < size - 1; i++)
    for (size_t j = 0; j < size - i - 1; j++)
      if (compare( data[j], data[j + 1] ))
        std::swap( data[j], data[j + 1] );

}
