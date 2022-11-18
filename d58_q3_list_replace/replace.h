void replace(const T& x, list<T>& y) {
  //write your code here
  /*
  iterator it = begin();
  while(it != end()){
    node * n = it.ptr;
    if(n->data == x){
      // must delete 
      iterator it2 = erase(it);
      for(iterator it3 = y.begin();it3 != y.end();it3++){
        insert(it2,*it3);
      }
      it = it2;
    }else{
      it++;
    }
  }
  */
 int k = mSize;
 node* rf = mHeader;
 for(int i = 0;i<k;i++){
  rf = rf->next;
  if(rf->data == x){
    list<T> cy = y;
    mSize += y.size()-1;
  }
  //std::cout << "this is checklist for i = " << i << " : ";
  //print();
  //std::cout << std::endl;
 }

}
