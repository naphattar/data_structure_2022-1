#include<stdexcept>
namespace CP{
    template <typename T>
    class vector{
        protected:
            T *mData; // dynamic array
            size_t mCap; //size of dynamic array
            size_t mSize; // the real size of vector
            typedef T* iterator;
            void rangeCheck(int n){
                if( n < 0 || (size_t)n >= mSize){
                    throw std::out_of_range("index out of range");
                }
            }

            void expand(size_t capacity){
                T *arr = new T[capacity]();
                for(size_t i = 0;i<mSize;i++){
                    arr[i] = mData[i];
                }
                delete[] mData;
                mData = arr;
                mCap = capacity;
            }

            void ensureCapacity(size_t capacity){
                if(capacity > mCap){
                    size_t s = (capacity > 2*mCap) ? capacity : 2*mCap;
                    expand(s);
                }
            }

        public:
        //constructor
            vector() {
                int cap = 1;
                mData = new T[cap]();
                mCap = cap;
                mSize = 0;
            }
            vector(size_t capacity){
                mData = new T[capacity]();
                mCap = capacity;
                mSize = capacity;
            }
        // deconstructor
            ~vector() {
                delete [] mData;
            }
        // access
            T& at(int index){
                rangeCheck(index);
                return mData[index];
            }
            T& operator[](int index){
                return mData[index];
            }
        //modifier
            void push_back( const T& element){
                ensureCapacity(mSize+1);
                mData[mSize++] = element;
            }
            void pop_back(){
                mSize--;
            }
        // more function to access the variable
            bool empty() const{
                return mSize == 0;
            }
            size_t size() const{
                return mSize;
            }
            size_t capacity() const{
                return mCap;
            }
        // copy constructor
            vector(const vector<T> &a){
                mData = new T[a.capacity()]();
                mCap = a.capacity();
                mSize = a.size();
                for(size_t i = 0;i<a.size();i++){
                    mData[i] = a[i];
                }
            }
        // copy assignment operator ex. v = w
            vector<T>& operator= (vector<T> &other){
                // this protect against v = v 
                if(mData != other.mData){
                    delete [] mData;
                    mData = new T[other.capacity()]();
                    mSize = other.size();
                    mCap = other.capacity();
                    for(size_t i = 0;i<other.size();i++){
                        mData[i] = other[i];
                    }
                }
            }
        // add iterator to CP::vector
            iterator begin(){
                return &mData[0];
            }
            iterator end(){
                return begin+mSize;
            }
        // add insert
            iterator insert(iterator it , const T &element){
                size_t pos = it-begin();
                ensureCapacity(mSize+1);
                //move by end to begin
                for(size_t i = mSize;i>pos;i--){
                    mData[i] = mData[i-1];
                }
                mData[pos] = element;
                mSize++;
                return begin()+pos;
            }

            void erase(iterator it){
                while((it+1) != end()){
                    *it = *(it+1);
                }
                mSize--;
            }

        //add clear and resize
            void clear(){
                mSize = 0;
                delete [] mData;
                mCap = 1;
                mData = new T[mCap]();
            }

        

    };
}