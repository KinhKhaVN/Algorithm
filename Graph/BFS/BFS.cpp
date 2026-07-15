#include <algorithm>
#include <cstdio>
#include <iostream>
#include <queue>

#include "BFS.h"



Graph::Graph(int n, int m): n(n), m(m)
{
  adj.resize(n);
}

void Graph::Init()
{
  for (int i = 0; i < m; i++)
  {
    int u, v;
    std::cin >> u >> v;
    
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
}

void Graph::Print()
{
  for (auto v : adj)
  {
    for (int u : v)
      std::cout << u << "  ";

    putchar('\n');
  }
}

void Graph::BFS(int i)
{
  std::fill(trace, trace + n, 0);
  trace[i] = -1;

  std::queue<int> q;
  q.push(i);

  while (!q.empty())
  {
    int u = q.front();
    q.pop();

    for (auto v : adj[u])
    {
      if (trace[v]) continue;

      trace[v] = u;

      q.push(v);
    }
  }
}


