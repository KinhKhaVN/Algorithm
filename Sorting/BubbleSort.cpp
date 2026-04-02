#include "BubbleSort.h"
#include "Utility.h"


void BubbleSort::Sort(Data data, Compare compare)
{
  size_t size = data.n;

  for (size_t i = 0; i < size - 1; i++)
    for (size_t j = i + 1; j < size; j++)
      if (compare( data[i], data[j] ))
        std::swap( data[i], data[j] );
}
