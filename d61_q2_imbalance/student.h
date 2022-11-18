int treewalk(node* n , KeyT &k , int &maxabs){
    // use to walk through a tree also return height from the deepest leave to node n
    // maxabs keep the maximum absolute and k keep minimum key process maxabs
    if(n == NULL){
        return -1; // reach tree leave return height = -1
    }
    int left = treewalk(n->left,k,maxabs); // walk left
    int right = treewalk(n->right,k,maxabs); //  walk right
    int abs = (left - right > 0 ? left-right : right-left);
    // ------ for debugging -----------
    //std::cout << "Node : " << (n->data).first << " : " << abs << std::endl;
    // ------ end debugging -----------
    if(abs > maxabs){
        k = (n->data).first;
        maxabs = abs;
    }else if(abs == maxabs){
        if(mLess((n->data).first,k)){
            k = (n->data).first;
        }
    }
    return (1+std::max(left,right));

}
KeyT getValueOfMostImbalanceNode() {
    // Your code here
    int maxabs = 0;
    KeyT k = (mRoot->data).first;
    treewalk(mRoot,k,maxabs);
    return k;
}




