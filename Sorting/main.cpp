#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

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
  Data data(10);

  std::vector<SortStragety *> algorithms;
  algorithms.push_back(&bubbleSort);
  
  algorithms[0]->Sort(data);

  data.Print();


  return 0;
}
