#include "BinarySearchTree.hpp"

#include <cstdio>

BinarySearchTree::BinarySearchTree(int root_vertex) {
  this->_data = root_vertex;
  this->_left_edge = nullptr;
  this->_right_edge = nullptr;
}

BinarySearchTree::BinarySearchTree() {
  _data = 0;
  _left_edge = nullptr;
  _right_edge = nullptr;
}

BinarySearchTree::BinarySearchTree(const BinarySearchTree &other_tree) {
  this->_data = other_tree._data;
  this->_left_edge = other_tree._left_edge;
  this->_right_edge = other_tree._right_edge;
}

void BinarySearchTree::addVertexToTree(int data, BinarySearchTree *&root_tree) {
  if (root_tree == nullptr) {
    BinarySearchTree *tree_node = new BinarySearchTree(data);
    root_tree = tree_node;
    return; 
  }
  if (data < 0) {
    perror("The binary search tree cannot have negative elements in its vertex");
    return;
  }
  if (root_tree->_data < data) 
    addVertexToTree(data, root_tree->_right_edge);
  else
    addVertexToTree(data, root_tree->_left_edge);
}

bool BinarySearchTree::searchVertexInTree(int data, BinarySearchTree *&root_tree) {
  if (root_tree == nullptr)
    return false;
  if (root_tree->_data == data)
    return true;
  if (root_tree->_data < data)
    return searchVertexInTree(data, root_tree->_right_edge);
  else
    return searchVertexInTree(data, root_tree->_left_edge);
}

void BinarySearchTree::deleteTree(BinarySearchTree *root_tree) {
  if (root_tree == nullptr)
    return;
  deleteTree(root_tree->_left_edge);
  deleteTree(root_tree->_right_edge);
  delete root_tree;
  return;
}