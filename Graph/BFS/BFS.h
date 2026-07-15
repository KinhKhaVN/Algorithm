#ifndef BFS_H
#define BFS_H

#include <vector>
#define MAX 10005

class Graph
{
  public:
    int n, m;
    int trace[MAX];
    std::vector<std::vector<int> > adj;
    Graph(int n, int m);

  public:
    void Init();
    void BFS(int i);
    void Print();
    
};




#endif
