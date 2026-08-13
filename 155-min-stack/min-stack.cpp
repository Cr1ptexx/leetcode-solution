class MinStack {
public:
    int* mData;
    int mCap , mSize;
    MinStack() {
        mData = new int[1];
        mCap = 1;
        mSize = 0;
    }
    
    void push(int value) {
        if(mSize+1 > mCap){
            int* arr = new int[mCap*2]();
            mCap*=2;
            for(int i = 0 ; i < mSize ; i++){
                arr[i] = mData[i];
            }
            delete [] mData;
            mData = arr;
        }
        mData[mSize++] = value;
    }
    
    void pop() {
        mSize--;
    }
    
    int top() {
        return mData[mSize-1];
    }
    
    int getMin() {
        auto first = &mData[1];
        auto last = &(mData[mSize-1]);
        int min = mData[0];
        while(first<=last){
            int x = *first<*last ? *first : *last;
            if(x<min) min = x;
            first++; last--;
        }
        return min;
    }
};