#include <chrono>
#include <cstdio>
#include <iostream>
#include <vector>

#include "Benchmark.h"
#include "Search.h"


void Benchmark::DoBenchmark(
    
    int A[], int n, int key,
    std::vector<SearchStrategy* > algorithms
    )
{
  puts("--- KET QUA BENCHMARK ---");

  for (auto algorithm : algorithms)
  {
    start = std::chrono::steady_clock::now();
    bool result = algorithm->Search(A, n - 1, key);
    end = std::chrono::steady_clock::now();

    std::chrono::duration<double> runningTime = end - start;

    std::cout << algorithm->title << ": " << runningTime.count() << " second" << '\n';
  }
}
