#include "CountingSort.h"
#include <set>


void CountingSort::Sort(Data data, Compare compare)
{
  Data newData = data;

  countingSort(newData);

  newData.Print();
}

void CountingSort::countingSort(Data &data)
{
  long long m = data.getMax();
  long long C[m + 1];

  for (size_t i = 0; i <= m; i++)
    C[i] = 0;

  for ( size_t i = 0; i < data.n; i++)
    C[data[i]]++;

  size_t j = 0;
  for ( size_t i = 0; i <= m; i++)
  {
    while ( C[i] > 0 )
    {
      data[j] = C[i];
      C[i] -= 1;
      j    += 1;
    }
  }
}
