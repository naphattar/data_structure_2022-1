#include<stdexcept>
namespace CP{
    template<typename T>
    class stack
    {
    protected:
        size_t mSize;
        size_t mCap;
        T *mData;
        void expand(size_t capacity){
            T *newData = new T[capacity]();
            for(size_t i  0;i<mSize;i++){
                newData[i] = mData[i];
            }
            delete[] mData;
            mData = newData;
            mCap = capacity;
        }
        void ensureCapacity(size_t capacity){
            if(capacity > mCap){
                expand((size_t)(2*mCap));
            }
        }
    public:
        // variable access
        size_t size() const{
            return mSize;
        }
        size_t capacity() const{
            return mCap;
        }
        //costructor
        stack(){
            mSize = 0;
            mCap = 1;
            mData = new T[1]();
        }
        stack(const stack<T> &a){
            mSize = a.size();
            mCap = a.capacity();
            mData = new T[a.capacity()]();
            for(size_t i = 0;i<a.size();i++){
                mData[i] = a.mData[i];
            }
        }
        stack<T> & operator=(stack<T> &other){
            mSize = other.size();
            mCap = other.capacity();
            // protected against self-destruction
            if(mData != other.mData){
                delete [] mData;
                mData = new T[other.capacity()]();
                for(size_t i = 0;i<other.size();i++){
                    mData[i] = other.mData[i];
                }
            }
        }
        // deconstructor
        ~stack(){
            delete[] mData;
        }

        bool empty() const{
            return (mSize == 0);
        }
        const T& top() const{
            return mData[mSize-1];
        }
        void push(const T &element){
            ensureCapacity(mSize+1);
            m[mSize] = element;
            mSize++;
        }
        void pop(){
            mSize--;
        }
       
    };
    





}