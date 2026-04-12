#include "ShakerSort.h"


void ShakerSort::Sort(Data data, Compare compare)
{
  Data newData = data;

  shakerSort(newData, compare);

  newData.Print();
}


void ShakerSort::shakerSort(Data &data, Compare compare)
{
  size_t left = 0;
  size_t right = data.n - 1;
  size_t k = 0;

  while ( left < right)
  {
    for ( size_t i = left; i < right; i++)
    {
      if ( compare(data[i], data[i + 1]) )
      {
        std::swap(data[i], data[i + 1]);
        k = i;
      }
    }

    right = k;

    for ( size_t j = right; j > left; j--)
    {
      if ( !compare(data[j], data[j - 1]) )
      {
        std::swap(data[j], data[j - 1]);
        k = j;
      }
    }

    left = k;

  }
}
