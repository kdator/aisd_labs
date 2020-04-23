#include <bits/stdc++.h>

#include "Kruskal.hpp"

using namespace std;

int p[100];
int rk[100];

int main() {
  vector<edge> edges;
  edges.push_back({.a = 1, .b = 2, .len = 4});
  edges.push_back({.a = 1, .b = 5, .len = 9});
  edges.push_back({.a = 1, .b = 6, .len = 10});
  edges.push_back({.a = 5, .b = 2, .len = 3});
  edges.push_back({.a = 5, .b = 6, .len = 4});
  edges.push_back({.a = 2, .b = 3, .len = 1});
  edges.push_back({.a = 2, .b = 7, .len = 2});
  edges.push_back({.a = 6, .b = 3, .len = 1});
  edges.push_back({.a = 6, .b = 7, .len = 1});
  edges.push_back({.a = 3, .b = 4, .len = 1});
  edges.push_back({.a = 3, .b = 8, .len = 7});
  edges.push_back({.a = 7, .b = 8, .len = 5});
  edges.push_back({.a = 7, .b = 4, .len = 8});
  edges.push_back({.a = 4, .b = 8, .len = 6});

  sort(edges.begin(), edges.end());
  int mst_weight = 0;

  init_dsu();

  for (edge e: edges) {
    if (merge(e.a, e.b)) { 
      mst_weight += e.len;
    }
  }

  cout << "Minimum spanning tree weight: " << mst_weight << endl;
  return 0;
}