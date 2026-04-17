#ifndef DATA_H
#define DATA_H

#include <algorithm>
#include <iostream>
#include <chrono>
#include <random>

#define MAX_SIZE 20000

class Data
{
  public:
    size_t n;
    long long data[MAX_SIZE];

  public:
    Data();

    Data(const size_t _n):
      n(_n) 
    {
      Init();
    }

    Data(const size_t _n, int upperBound):
      n(_n)
  {
    initDuplicate(upperBound);
  }


    void Init();
    void initDuplicate(int upperBound);
    void Shuffle();
    void Print();

    long long & operator[] (size_t i);
    long long getMax();
};


#endif
