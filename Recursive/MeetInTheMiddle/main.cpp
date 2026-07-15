#include <chrono>
#include <iostream>
#include <vector>

class Timer {
  public:
    std::chrono::steady_clock::time_point start;

    Timer() { start = std::chrono::steady_clock::now(); }

    ~Timer() {
      auto end = std::chrono::steady_clock::now();
      auto diff = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
      std::cout << "\n>> Runtime: " << diff.count() << "ms\n";
    }
};

const int N = 30;
int n;
int t[N];
int cnt = 0;
int target = 10;
std::vector<int> v;

void Print()
{
  for (int& e: v) std::cout << e << " ";
  std::cout << '\n';
}



void Try(int i, int sum)
{
  if (sum > target) return;

  if (i >= n){
    if (sum == target) {
      cnt++;
      Print();
    }
  }else {
    Try(i + 1, sum);
    v.emplace_back(t[i]);
    Try(i + 1, sum + t[i]);
    v.pop_back();
  }
}


int main () {

  n = 11;
  for (int i = 1; i < n; i++) t[i] = i;

  Timer t;

  Try(1, 0);

  std::cout << cnt << '\n';

  return 0;
}
