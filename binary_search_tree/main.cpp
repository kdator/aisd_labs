#include <iostream>

#include "BinarySearchTree.hpp"

using namespace std;

int main() {

  BinarySearchTree* binary_tree = nullptr;
  binary_tree->addVertexToTree(5, binary_tree);
  binary_tree->addVertexToTree(6, binary_tree);
  binary_tree->addVertexToTree(4, binary_tree);
  if (binary_tree->searchVertexInTree(4, binary_tree)) {
    cout << "\ntrue" << endl;
  } else {
    cout << "\nfalse." << endl;
  }
  binary_tree->deleteTree(binary_tree);
  return 0;
}