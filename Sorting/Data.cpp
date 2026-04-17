#include "Data.h"
#include <algorithm>
#include <cmath>
#include <cstdlib>

long long & Data::operator[] (size_t i)
{
  return data[i];
}

void Data::Shuffle()
{
  std::srand(std::time(NULL));

  for ( size_t i = n - 1; i > 0; i-- ) 
  {
    const size_t randomIndex =  std::rand() % (i + 1) ;

    std::swap( data[i], data[randomIndex] );
  }
}

void Data::Init()
{
  for (size_t i = 0; i < n; i++)
    data[i] = i;

  Shuffle();
}

void Data::Print()
{
  for (size_t i = 0; i < n; i++)
    std::cout << data[i] << " ";

  putchar('\n');
}

void Data::initDuplicate(int upperBound)
{
  std::srand(std::time(NULL));

  for ( size_t i = 0; i < n; i++)
  {
    const long long randomNumber = rand() % upperBound + 1;
    data[i] = randomNumber;
  }
}

long long Data::getMax()
{
  long long MAX = data[0];

  for ( size_t i = 1; i < n; i++)
    MAX = std::max(MAX, data[i]);

  return MAX;;
}

