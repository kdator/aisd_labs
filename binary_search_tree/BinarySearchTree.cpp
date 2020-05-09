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

void BinarySearchTree::addVertexToATree(int data, BinarySearchTree *&root_tree) {
  if (this == nullptr) {
    this->_data = data;
    this->_left_edge = nullptr;
    this->_right_edge = nullptr;
  }
  if (data < 0) {
    perror("The binary search tree cannot have negative elements in its vertex");
    return;
  }
  if (data > this->_data)
    addVertexToATree(data, this->_right_edge);
  else
    addVertexToATree(data, this->_left_edge);
}

void BinarySearchTree::searchVertexInATree() {

}