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

void BinarySearchTree::addVertexToTree(int data, BinarySearchTree *&root_tree) {
  if (root_tree == nullptr)
    root_tree = new BinarySearchTree(data);
    return;
  if (data < 0) {
    perror("The binary search tree cannot have negative elements in its vertex");
    return;
  }
  if (root_tree->_data < data)
    addVertexToTree(data, root_tree->_right_edge);
  else
    addVertexToTree(data, root_tree->_left_edge);
}

// /*ФУНКЦИЯ ЗАПИСИ ЭЛЕМЕНТА В БИНАРНОЕ ДЕРЕВО*/
// void push(int a, node **t)
// {
//     if ((*t) == NULL)                   //Если дерева не существует
//     {
//         (*t) = new node;                //Выделяем память
//         (*t)->info = a;                 //Кладем в выделенное место аргумент a
//         (*t)->l = (*t)->r = NULL;       //Очищаем память для следующего роста
//         return;                         //Заложили семечко, выходим
//     }
//        //Дерево есть
//         if (a > (*t)->info) push(a, &(*t)->r); //Если аргумент а больше чем текущий элемент, кладем его вправо
//         else push(a, &(*t)->l);         //Иначе кладем его влево
// }