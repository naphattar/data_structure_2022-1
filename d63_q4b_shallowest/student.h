#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

//you can use this function
template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT,MappedT,CompareT>::shallowest_leaf(node* n) {
  if(n == NULL){
    return -1;
  }
  int leftchild = shallowest_leaf(n->left)+1;
  int rightchild = shallowest_leaf(n->right)+1;
  if(leftchild == 0 && rightchild == 0){
    return 0;
  }
  if(rightchild == 0){
    return leftchild;
  }
  if(leftchild == 0){
    return rightchild;
  }
  return (std::min(leftchild,rightchild));
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT,MappedT,CompareT>::shallowest_leaf() {
  //write your code here
  if(mSize == 0){
    return -1; // empty tree
  }
  return shallowest_leaf(mRoot);
}


#endif
