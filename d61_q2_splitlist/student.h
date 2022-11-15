void splitList(list<T>& list1, list<T>& list2) {
    int count = 1;
    int oldsize = mSize;
    while(count <= oldsize){
        node* movenode = mHeader->next;
        mSize--;
        // fixed original list 
        mHeader->next = movenode->next;
        movenode->next->prev = mHeader;
        if(count <= (oldsize+1)/2){
            // move to list1
            list1.mHeader->prev->next = movenode;
            movenode->prev = list1.mHeader->prev;
            movenode->next = list1.mHeader;
            list1.mHeader->prev = movenode;
            list1.mSize++;
        }else{
            // move to list2
            list2.mHeader->prev->next = movenode;
            movenode->prev = list2.mHeader->prev;
            movenode->next = list2.mHeader;
            list2.mHeader->prev = movenode;
            list2.mSize++;
        }   
        count++;
    }

}
