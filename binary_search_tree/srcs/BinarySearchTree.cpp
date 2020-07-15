#include <cstdlib>
#include <cstdio>

#include "BinarySearchTree.hpp"

BinarySearchTree::BinarySearchTree() {
  this->_data = 0;
  this->_left_edge = nullptr;
  this->_right_edge = nullptr;
}

BinarySearchTree::BinarySearchTree(int root_vertex) {
  this->_data = root_vertex;
  this->_left_edge = nullptr;
  this->_right_edge = nullptr;
}

BinarySearchTree::BinarySearchTree(const BinarySearchTree &other_tree) {
  this->_data = other_tree._data;
  this->_left_edge = other_tree._left_edge;
  this->_right_edge = other_tree._right_edge;
}

bool BinarySearchTree::addVertexToTree(int data, BinarySearchTree *&root_tree) {
  if (root_tree == nullptr) {
    BinarySearchTree *alloc_node = new BinarySearchTree;
    alloc_node->_data = data;
    alloc_node->_left_edge = nullptr;
    alloc_node->_right_edge = nullptr;
    return true;
  }
  if (data > root_tree->_data) {
    addVertexToTree(data, root_tree->_right_edge);
    return true;
  } else {
    addVertexToTree(data, root_tree->_left_edge);
    return true;
  }
  perror("The tree already has a vertex with same data.");
  return false;
}

bool BinarySearchTree::searchVertexInTree(int data, BinarySearchTree *&root_tree) {
  if (root_tree == nullptr) {
    return false;
  }
  if (data == root_tree->_data) {
    return true;
  }
  if (data > root_tree->_data) {
    searchVertexInTree(data, root_tree->_right_edge);
  } else {
    searchVertexInTree(data, root_tree->_left_edge);
  }
}

