void shift(int k) {
	if(mSize <=1 ){return;}
	if(k%mSize == 0){return;}
	if(k > 0){
		k = k%mSize;
	}else{
		k = (-1*k);
		k = k%mSize;
		k = mSize-k;
	}
	iterator it = begin();
	for(int i = 0;i<k;i++){
		it++;
	}
	node* nd = it.ptr;
	mHeader->next->prev = mHeader->prev;
	mHeader->prev->next = mHeader->next;
	mHeader->prev = nd->prev;
	nd->prev->next = mHeader;
	mHeader->next = nd;
	nd->prev = mHeader;

}
