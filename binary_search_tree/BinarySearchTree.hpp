/**
 * \file BinarySearchTree.hpp
 * \author kolpakov
 * \brief Данная библиотека описывает построение бинарного дерева поиска.
 * \date 28.04.2020. 
 */
#ifndef BINARY_SEARCH_TREE_HPP_
#define BINARY_SEARCH_TREE_HPP_

class BinarySearchTree {
  private:
    int _data; /**< информация, которая должна лежать в узле. */
    BinarySearchTree *_left_edge; /**< указатель на левого потомка. */
    BinarySearchTree *_right_edge; /**< указатель на правого потомка. */

  public:
    /* Конструктор по умолчанию. */
    BinarySearchTree();
    /* Конструктор по умолчанию с передаваемым значением вершины. */
    BinarySearchTree(int root_vertex);
    /* Конструктор копирования. */
    BinarySearchTree(const BinarySearchTree &other_tree);
    /**
     * \brief Добавить вершину в дерево.
     * \param data значение, которое нужно добавить в дерево.
     * \param root_tree ссылка на указатель на корень бинарного дерева поиска.
     */
    void addVertexToTree(int data, BinarySearchTree *&root_tree);
    /**
     * \brief Найти вершину в дереве.
     * \param data значение, которе нужно найти в дереве.
     * \param root_tree ссылка на указатель на корень бинарного дерева поиска.
     */
    bool searchVertexInTree(int data, BinarySearchTree *&root_tree);
    /**
     * \brief Удалить вершину из дерева.
     * \param data значение, которое нужно удалить из дерева.
     * \param root_tree ссылка на указатель на корень бинарного дерева поиска.
     */
    void deleteVertexFromTree(int data, BinarySearchTree *&root_tree);
    /**
     * \brief Удалить всё дерево.
     * \param root_tree ссылка на указатель на корень дерева.
    */
    void deleteTree(BinarySearchTree *root_tree);
};

#endif /* BINARY_SEARCH_TREE_HPP_ */