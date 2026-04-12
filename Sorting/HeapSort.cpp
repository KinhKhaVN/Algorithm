#include "HeapSort.h"

void HeapSort::Sort(Data data, Compare compare)
{
  Data newData = data;

  heapSort(newData, data.n - 1, compare);

  newData.Print();
}

void HeapSort::Heapify(Data &data, size_t index, size_t size, Compare compare)
{
  size_t k = index;
  size_t left = ( index << 1 ) + 1;
  size_t right = left + 1;

  if ( (left < size) &&
       (compare( data[left], data[k]))  )
    k = left;
  
  if ( (right < size) &&
        (compare( data[right], data[k])) )
    k = right;

  if ( k != index )
  {
    std::swap( data[index], data[k] );
    Heapify(data, k, size, compare);
  }
}

void HeapSort::heapSort(Data &data, size_t size, Compare compare)
{
  for (long long i = (size / 2); i >= 0; i--)
    Heapify(data, (size_t)i, size, compare);

  for (long long i = size; i > 0; i--)
  {
    std::swap(data[0], data[i]);
    Heapify(data, 0, (size_t)i, compare);
  }
}
