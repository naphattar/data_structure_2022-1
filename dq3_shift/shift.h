void shift(int k) {
	if(mSize == 0){return;}
	if(k%mSize == 0){return;}
	iterator it = begin();
	if(k > 0){
		k = k%mSize;
	}else{
		k = (-1*k);
		k = k%mSize;
		k = mSize-k;
	}
	while(k--){
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
