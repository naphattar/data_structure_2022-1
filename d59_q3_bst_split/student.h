#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  //your code here
  CP::map_bst<KeyT,MappedT,CompareT> result;
  node* res = result.mRoot;
  node* walk = mRoot;
  node* pr = mRoot;
  node* ml = mRoot;
  while(walk != NULL){
    pr = walk->parent;
    if(compare(val ,(walk->data).first) <= 0){
      // move mRoot and mRoot->right to result 
      ml = walk->left;
      walk->left = NULL;
      walk->parent = NULL;
      if(result.mSize == 0){
        // in case of empty tree
        result.mRoot = walk;
        result.mSize++;
      }else{
        // put in the left child of res
        res->left = walk;
        walk->parent = res;
      }
      res = walk;
      // in case of deleting mRoot 
      if(walk == mRoot){
        mRoot = ml;
      }else {
        pr->right = ml;
        if(ml != NULL){
          ml->parent = pr;
        }
      }
      walk = ml;
      //std::cout << "Debugging" << std::endl;
      //print();
    }else{
      // checking right sign
        walk = walk->right;
    }
    //std::cout << "debugging print ----- \n" << (walk->data).first << std::endl; 
    //print();
  }
  return result;
}

#endif
