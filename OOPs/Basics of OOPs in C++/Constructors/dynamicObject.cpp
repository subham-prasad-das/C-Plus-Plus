#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length, breadth;

    public:
        Rectangle(int l = 0, int b = 0){ // the constructor assigning the values to the private members
            length = l;
            breadth = b;
        }
        void getData(){ // getter function
            cout << "The area is " << (length * breadth);
        }
};

int main(){
    Rectangle *e1 = new Rectangle(2, 3); // dynamically created object

    (*e1).getData(); // as e1 is a pointer created dynamically, we can call the  pointer by using (*) 
    e1 -> getData(); // also we can call it by using arrow (->) which replaces asterick(*) as well as dot(.)
    return 0;
}