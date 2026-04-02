#include "Data.h"

int & Data::operator[] (size_t i)
{
  return data[i];
}

void Data::Init()
{
  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

  for (size_t i = 0; i < n; i++)
    data[i] = i;

  std::shuffle(data, data + n, std::default_random_engine( seed ));
}

void Data::Print()
{
  for (size_t i = 0; i < n; i++)
    std::cout << data[i] << " ";

  putchar('\n');
}
