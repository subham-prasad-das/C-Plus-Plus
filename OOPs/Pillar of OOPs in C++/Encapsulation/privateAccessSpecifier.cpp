/*
#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    private:
        int b;
        int c;

    public:
        int a;
        // Rectangle(int length, int breadth){
        //     this-> length = length;
        //     this-> breadth = breadth;
        // }

        void print(){
            cout << "Its accessed through other member outside the class" << endl;
            cout << "the value of a is: " << a << ". The length is: " << length << " and the breadth is: " << breadth << endl; 
        }
};

int main(){
    
    Rectangle rect1;
    rect1.a = 4;
    rect1.b = 33;
    rect1.c = 44;
    rect1.print();
    return 0;

}

---> The above code will show error because:-
        Here, in this code, we made "a as public" and "b, c as private".
        As 'a' is private, we are able to modify it through the object "rect1"
        But we are not able to do so with 'b' and 'c' because they are private and as per the properties, only the functions of members made inside the class can access it, where the object 'rect1' is defined otside that particular class.

*/