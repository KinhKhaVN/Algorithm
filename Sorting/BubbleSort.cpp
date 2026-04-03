#include "BubbleSort.h"
#include "Utility.h"
#include <cstdio>


void BubbleSort::Sort(Data data, Compare compare)
{
  size_t size = data.n;
  Data newData = data;
  for (size_t i = 0; i < size - 1; i++)
    for (size_t j = 0; j < size - i - 1; j++)
      if (compare( newData[j], newData[j + 1] ))
        std::swap( newData[j], newData[j + 1] );
  puts("Bubble Sort");
  newData.Print();
}
