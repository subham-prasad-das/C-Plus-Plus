#include<bits/stdc++.h>
#define PI 3.14
using namespace std;

class Polygon{
    public:
        int length;
        int breadth;
        int radius;
        void showArea(int l, int b){
            length = l;
            breadth = b;
            cout << "The area of the rectangle is: " << length * breadth << endl;
        }
        void showArea(int r){
            radius = r;
            cout << "The area of the circle is: " << PI * radius * radius << endl;
        }
};

int main(){
    Polygon c;
    c.showArea(3);
    c.showArea(3, 4);
    return 0;
}

/*
    -> Here we have two functions with same name "showArea()", but the parameters of both are different. When the functions haaving same name but differs in parameters and does the job to execute preffered program appropriately, it is called "Function Overloading".
    -> Function overloading can be successful if the name of the functions are same but:-
        - numbers of parameters are different.
        - type of parameters are different.
        - sequence of parameters are different.
    -> If the parameters are same in numbers, type and sequence and only the return type of the function are different only, then it will show "Funtion redefination error".
*/