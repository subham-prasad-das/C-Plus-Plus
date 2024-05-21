#include <bits/stdc++.h>
using namespace std;

class Square; //forward declaration to the compiler that it will get this class at some moment of time
class Rectangle{ // 
    private:
        int length;
        int width;
    public:
        int area();
        void convert(Square sq);
};

class Square{
    private:
        int side;
    public:
        void setSide(int x);

    friend class Rectangle;
};

int Rectangle :: area(){
    return (length*width);
}

void Rectangle :: convert(Square sq){
    length = sq.side;
    width = sq.side;
}

void Square :: setSide(int x){
    side = x;
}

int main(){
    Square sqr;
    Rectangle rect;
    sqr.setSide(4);
    rect.convert(sqr);
    cout<<rect.area();
    return 0;
}