#ifndef BENCHMARK_H
#define BENCHMARK_H

#include <chrono>
#include <functional>
#include <vector>
#include "LinearSearch.h"
#include "Search.h"

class Benchmark
{
  public:

    std::chrono::time_point<std::chrono::steady_clock> start;
    std::chrono::time_point<std::chrono::steady_clock> end; 

  public:
    void DoBenchmark(
        int A[],
        int n,
        int key,
        std::vector<SearchStrategy *> algorithm);


};



#endif
