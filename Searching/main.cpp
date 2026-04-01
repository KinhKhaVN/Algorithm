#include <cstdint>
#include <iomanip>
#include <chrono>
#include <ratio>
#include <iostream>
#include <string>
#include <vector>

#include "Benchmark.h"
#include "BinarySearch.h"
#include "LinearSearch.h"
#include "Search.h"

int main ()
{
  LinearSearch linearSearch;
  BinarySearch binarySearch;
  std::vector<SearchStrategy *> algorithms;

  algorithms.push_back(& linearSearch);
  algorithms.push_back(& binarySearch);

  Benchmark benchMark;
  int n, query;

  std::cout << "Nhap so luong phan tu: ";
  std::cin >> n;
  int A[n];

  for (int i = 0; i < n; i++) {
    A[i] = i;
  }
  do {
    std::cout << "Nhap -1 de thoat\n";
    std::cout << "Nhap gia tri can tim kiem: ";
    std::cin >> query;

    if (query == -1)
      break;

    benchMark.DoBenchmark(
        A, 
        n, 
        query,
        algorithms
        );


  }while (1);

  return 0;
}

