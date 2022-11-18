#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"

template <typename KeyT,typename MappedT, typename CompareT >
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* n) {
  //to count the size of tree
  if(n == NULL){
    return 0;
  }
  return (process(n->left)+process(n->right)+1); // recursive
}

template <typename KeyT,typename MappedT, typename CompareT >
std::pair<KeyT,MappedT> CP::map_bst<KeyT,MappedT,CompareT>::subtree(map_bst<KeyT,MappedT,CompareT> &left, map_bst<KeyT,MappedT,CompareT> &right) {
  //write your code here
  if(mRoot == NULL || mSize == 0){return std::pair<KeyT,MappedT>();}
  // clear left and right tree
  left.clear();
  right.clear();
  // move the subtree
  if(mRoot->left != NULL){
    left.mRoot = mRoot->left;
    left.mRoot->parent = NULL;
    left.mSize = process(left.mRoot);
    mRoot->left = NULL;
  }
  if(mRoot->right != NULL){
    right.mRoot = mRoot->right;
    right.mRoot->parent = NULL;
    right.mSize = process(right.mRoot);
    mRoot->right = NULL;
  }
  mSize = 1;
  return mRoot->data;
}

#endif

