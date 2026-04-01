#ifndef DATA_H
#define DATA_H


#include <iostream>
template <class T>
class Data
{
  public:
    T * data;
    size_t n;

  public:
    Data();

    Data(const size_t _n):
      n(_n) 
    {
      data = new T[n];
      Init(0);
    }

    Data(const size_t _n, const T & value):
      Data(_n)
    {
      Init(value);
    }

    ~Data() {
      delete [] data;
    }
    void Init(const T & value);
    void Print();

    T & operator[] (size_t i);
};

template <class T>
T & Data<T>::operator[] (size_t i)
{
  return data[i];
}

template <class T>
void Data<T>::Init(const T & value)
{
  for (size_t i = 0; i < n; i++)
    data[i] = value;
}

template <class T>
void Data<T>::Print()
{
  for (size_t i = 0; i < n; i++)
    std::cout << data[i] << " ";

  putchar('\n');
}

#endif
