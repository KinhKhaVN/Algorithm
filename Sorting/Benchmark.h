#ifndef BENCHMARK_H
#define BENCHMARK_H


#include "Data.h"
#include "SortStragety.h"
class BenchmarkEngine
{
  public:
    std::chrono::time_point<std::chrono::steady_clock> start;
    std::chrono::time_point<std::chrono::steady_clock> end; 
    void Benchmark(Data data, SortAlgorithm algorithms);
};


#endif
