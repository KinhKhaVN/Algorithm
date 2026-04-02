#ifndef DATA_H
#define DATA_H

#include <algorithm>
#include <iostream>
#include <chrono>
#include <random>

#define MAX_SIZE 100000

class Data
{
  public:
    size_t n;
    int data[MAX_SIZE];

  public:
    Data();

    Data(const size_t _n):
      n(_n) 
    {
      Init();
    }


    void Init();
    void Print();

    int & operator[] (size_t i);
};


#endif
