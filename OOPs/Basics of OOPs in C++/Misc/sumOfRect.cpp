#include <bits/stdc++.h>
using namespace std;

class Rect{
    public:
        int length, breadth;
    public:
        void SetData(int l, int b){
            length = l;
            breadth = b;
        }
        void sum(Rect o1, Rect o2){
            length = o1.length + o2.length;
            breadth = o1.breadth + o2.breadth;
        }
        void print(){
            cout<<"The length is: "<<length<<" and the breadth is: "<<breadth;
        }
};

int main(){
    Rect r1, r2, r3;
    r1.SetData(4, 5);
    r2.SetData(4, 5);
    r2.sum(r1, r2);
    r2.print();
    return 0;
}