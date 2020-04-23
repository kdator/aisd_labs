#include <iostream>
#include <vector>
#include <utility>
#include <queue>

using namespace std;

vector<pair<int, int>> graph[100]; /**< type-like "node - weight". */
bool included_node[100];

int main() {
  
  graph->push_back({2, 4});
  graph->push_back({5, 9});
  graph->push_back({2, 3});
  graph->push_back({6, 4});
  graph->push_back({6, 10});
  graph->push_back({3, 1});
  graph->push_back({7, 1});
  graph->push_back({3, 1});
  graph->push_back({7, 2});
  graph->push_back({4, 1});
  graph->push_back({8, 5});
  graph->push_back({4, 8});
  graph->push_back({8, 7});
  graph->push_back({8, 6});

  int mst_weight = 0; /**< current minimal spanning tree weight. */

  /* use a priority queue for the convenience of graph representation. */
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;

  q.push({0, 0});

  while (!q.empty()) {
    pair<int, int> current = q.top();
    q.pop();

    int dst = current.first, v = current.second;

    if (included_node[v])   /**< node already included. */
      continue;
  
    included_node[v] = true;
    mst_weight += dst;

    for (pair<int, int> e: graph[v]) {
      int u = e.first, len_vu = e.second;

      if (!included_node[u]) {
        q.push({len_vu, u});
      }
    }
  }

  cout << "Minimum spanning tree weight: " << mst_weight << endl;
  return 0;
}