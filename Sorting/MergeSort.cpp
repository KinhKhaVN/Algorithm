#include "MergeSort.h"

void MergeSort::Sort(Data data, Compare compare)
{
  Data newData = data;
  mergeSort(newData, 0, data.n - 1);

  newData.Print();
}

void MergeSort::Merge(Data &data, size_t left, size_t mid, size_t right)
{
  size_t leftSize = mid - left + 1;
  size_t rightSize = right - mid;

  long long leftData[leftSize];
  long long rightData[rightSize];

  for (size_t i = 0; i < leftSize; i++) leftData[i] = data[left + i];
  for (size_t i = 0; i < rightSize; i++) rightData[i] = data[mid + 1 + i];

  size_t i = 0;
  size_t j = 0;
  size_t k = left;

  while ( i < leftSize && j < rightSize )
  {
    if ( leftData[i] <= rightData[j] )
    {
      data[k] = leftData[i];
      i++;
    }
    else 
    {
      data[k] = rightData[j];
      j++;
    }
    k++;
  }

  while ( i < leftSize ) data[k++] = leftData[i++];
  while ( j < rightSize ) data[k++] = rightData[j++];
}

void MergeSort::mergeSort(Data &data, size_t left, size_t right)
{
  if ( left < right )
  {
    size_t mid = (left + right) >> 1;

    mergeSort(data, left, mid);
    mergeSort(data, mid + 1, right);

    Merge(data, left, mid, right);
  }
}
