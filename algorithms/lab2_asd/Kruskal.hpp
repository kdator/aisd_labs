/**
 * \file Kruskal.hpp
 * \author kolpakov 
 */
#ifndef KRUSKAL_HPP_
#define KRUSKAL_HPP_

/**
 * /brief Struct for a edge representation.
*/
struct edge {
  int a; /**< first vertex of the edge. */
  int b; /**< second vertex of the edge. */
  int len; /**< lenght of the edge. */

  bool operator<(const edge& other);
};

/**
 * \brief Helps to find out if the edges are in the same connectivity component.
 * \param a first vertex of the edge.
 * \param b second vertex of the edge.
*/
bool merge(int a, int b);

/**
 * \brief Initialize our tree. 
 */
void init_dsu();

/**
 * /brief To find out a root node for node with name "v".
 * \param v the vertex for which to find the root. 
 */
int get_root(int v);
#endif /* KRUSKAL_HPP_H */