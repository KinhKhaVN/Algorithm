#ifndef UTILITY_H
#define UTILITY_H

#include <functional>

using compare = std::function<bool (*) (void*, void*)>;

template <class T>
bool greater(void * left, void * right)
{
  return *( (T*) left ) > *( (T*) right );
}

template <class T>
bool less(void * left, void * right)
{
  return *( (T*) left ) < *( (T*) right );
}

#endif
