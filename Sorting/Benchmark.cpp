#include "Benchmark.h"
#include "SortStragety.h"
#include "Utility.h"
#include <chrono>


void BenchmarkEngine::Benchmark(Data data, SortAlgorithm algorithms)
{
  puts("----- KET QUA BENCHMARK -----"
      );
  for (auto algorithm : algorithms)
  {
    start = std::chrono::steady_clock::now();
    algorithm->Sort(data, greater);
    end = std::chrono::steady_clock::now();

    std::chrono::duration<double> runningTime = end - start;

    std::cout << algorithm->title << ": " << runningTime.count() << " second" << '\n';
  }
}
