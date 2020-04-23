#include "Kruskal.hpp"

extern int p[100];
extern int rk[100];

void init_dsu() {
  for (int i = 0; i < 100; i++) {
    p[i] = i;
    rk[i] = 1;
  }
}

int get_root(int vertex) {
  if (p[vertex] == vertex) {
    return vertex;
  } else {
    return p[vertex] = get_root(p[vertex]);
  }
}

bool merge(int a, int b) {
  int root_a = get_root(a), root_b = get_root(b);

  if (root_a == root_b) {
    return false;
  } else {
    if (rk[root_a] < rk[root_b]) {
      p[root_a] = root_b;
    } else if (rk[root_b] < rk[root_a]) {
      p[root_b] = root_a;
    } else {
      p[root_a] = root_b;
      rk[root_b]++;
    }

    return true;
  }
}

bool edge::operator<(const edge& other) {
  return len < other.len;
}