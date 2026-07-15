#include <cstdio>
#include <iostream>


#include "BFS.h"


int main () {

  int n, m;

  puts("Nhap so dinh");
  std::cin >> n;

  puts("Nhap so canh");
  std::cin >> m;

  Graph g(n, m);

  g.Init();
  g.BFS(0);
  g.Print();
  putchar('\n');

  for (int i = 0; i < g.n; i++)
    std::cout << i << " ";

  putchar('\n');

  for (int i = 0; i < g.n; i++)
    std::cout << g.trace[i] << " ";

  putchar('\n');

  return 0;

}
