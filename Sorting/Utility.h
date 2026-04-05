#ifndef UTILITY_H
#define UTILITY_H

#include <functional>
#include <vector>

class SortStragety;

typedef std::function<bool (long long, long long)> Compare;
typedef std::vector<SortStragety *> SortAlgorithm;

bool greater(long long left, long long right);

bool less(long long left, long long right);

#endif
