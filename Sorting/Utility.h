#ifndef UTILITY_H
#define UTILITY_H

#include <functional>

typedef std::function<bool (int, int)> Compare;

bool greater(int left, int right);

bool less(int left, int right);

#endif
