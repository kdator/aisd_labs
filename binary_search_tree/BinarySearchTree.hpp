/**
 * \file BinarySearchTree.hpp
 * \author kolpakov
 * \brief Данная библиотека описывает построение бинарного дерева поиска.
 * \date 28.04.2020. 
 */
#ifndef BINARY_SEARCH_TREE_HPP_
#define BINARY_SEARCH_TREE_HPP_

class BinarySearchTree{
  private:
    int _data; /**< информация, которая должна лежать в узле. */
    BinarySearchTree *_left_edge; /**< указатель на левого потомка. */
    BinarySearchTree *_right_edge; /**< указатель на правого потомка. */

  public:
    /* Явно запрещаем конструктор копирования. */
    BinarySearchTree(const BinarySearchTree &other_tree) = delete;
    /* Конструктор по умолчанию. */
    BinarySearchTree();
    /* Конструктор по умолчанию с передаваемым значением вершины. */
    BinarySearchTree(int root_vertex);
    /**
     * \brief Добавить вершину в дерево.
     * \param _vertex значение, которое нужно добавить в дерево.
     */
    void addVertexToATree(int _data, BinarySearchTree *&edge);
    /**
     * \brief Удалить вершину из дерева.
     * \param _vertex значение, которое нужно удалить из дерева.
     */
    void deleteVertexFromTree(int _data);
    /**
     * \brief Найти вершину в дереве.
     * \param _vertex значение, которе нужно найти в дереве.
     */
    void searchVertexInATree(int _data);
};

#endif /* BINARY_SEARCH_TREE_HPP_ */