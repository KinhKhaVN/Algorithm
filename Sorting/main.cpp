#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

#include "Benchmark.h"
#include "CountingSort.h"
#include "MergeSort.h"
#include "ShakerSort.h"
#include "SortStragety.h"
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "QuickSort.h"
#include "HeapSort.h"

#include "Utility.h"
#include "Data.h"

int main () {

  BubbleSort bubbleSort;
  ShakerSort shakerSort;
  SelectionSort selectionSort;
  InsertionSort insertionSort;
  QuickSort quickSort;
  MergeSort mergeSort;
  HeapSort heapSort;
  CountingSort countingSort;
  BenchmarkEngine benchmarkEngine;

  Data data(10);
  Data dataForCountingSort(10, 4);

  SortAlgorithm algorithms;
  SortAlgorithm justIncludeCountingSort;

  algorithms.push_back(&bubbleSort);
  algorithms.push_back(& shakerSort);
  algorithms.push_back(&selectionSort);
  algorithms.push_back(& insertionSort);
  algorithms.push_back(& quickSort);
  algorithms.push_back(& mergeSort);
  algorithms.push_back(& heapSort);

  justIncludeCountingSort.push_back(& countingSort);

  benchmarkEngine.Benchmark(data, algorithms);

  puts("Data");
  data.Print();

  benchmarkEngine.Benchmark(dataForCountingSort, justIncludeCountingSort);

  puts("Data for Counting Sort");
  dataForCountingSort.Print();

  return 0;
}
