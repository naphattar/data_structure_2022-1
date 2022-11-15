#include<stdexcept>
namespace CP{
    template <typename T>
    class queue{
        protected:
        T *mData;
        size_t mSize;
        size_t mCap;
        size_t mFront;
        void expand(size_t capacity){
            T *newData = new T[capacity]();
            for(size_t i = 0;i<mSize;i++){
                newData[i] = mData[(mFront+i)%mCap];
            }
            delete[] mData;
            mData = newData;
            mCap = capacity;
            mFront = 0;

        }
        void ensureCapacity(size_t capacity){
            if(capacity > mCap){
                expand((size_t)(2*mCap));
            }

        }
        public:
            queue(){
                mData = new T[1]();
                mSize = 0;
                mCap = 1;
                mFront = 0;
            }
            queue(const queue<T> &a){
                mData = new T[a.mCap]();
                mSize = a.mSize;
                mCap = a.mCap;
                mFront = a.mFront;
                for(size_t i = 0;i<mCap;i++){
                    mData[i] = a.mData[i];
                }
            }
            queue<T>& operator= (queue<T> other){
                using std::swap;
                swap(mSize,other.mSize);
                swap(mCap,other.mCap);
                swap(mData,other.mData);
                swap(mFront.other.mFront);
                return *this;
            }
            ~queue(){
                delete[] mData;
            }
            bool empty() const{
                return (mSize == 0);
            }
            size_t size() const{
                return mSize;
            }

            //queue function
            const T& front() const{
                return mData[mFront];
            }
            const T& back() const{
                return mData[(mFront+mSize-1)%mCap];
            }
            void push(const T& element){
                ensureCapacity(mSize+1);
                mData[(mFront+mSize)%mCap] = element;
                mSize++;
            }
            void pop(){
                mFront = (mFront+1)%mCap;
                mSize--;

            }
    }
}