#include <bits/stdc++.h>
using namespace std;

class Box{
    private:
        int l, b, h; // here l, b, h are instance member variables for object smallBox.
    public:
        void setDimension(int x, int y, int z); // here x, y, z are local variable.
        void showDimension();
};

void Box :: setDimension(int x, int y, int z){
    l = x;
    b = y;
    h = z;
} 

void Box :: showDimension(){
    cout<<"length is: "<<l<<" breadth is: "<<b<<" and height is: "<<h;
}

int main(){
    Box smallBox;
    /*
    Below we have used object to call the member functions of the class Box.
    smallBox.setDimension(1,2,3);
    smallBox.showDimension();
    */

    /*
    Below we have used pointer and arrow to set and show dimensions. 
    Like we use dot operator while calling the member functions using object, here in case of pointer we will be using arrow operator.
    Box* p = &smallBox;
    p -> setDimension(4,5,6);
    p -> showDimension();
    */

   /*
   -> 'this' is a keyword in c++.
   -> 'this' is a "local" object pointer in every instance member function(here setDimension and showDimension) containing address of the caller object i.e. every local member function consist of a this pointer by default which consist of the address of the object calling that particualar member function. and that is why 'this' pointer can not be modified.
   -> It is used to refer caller object in member function.
   */
    
    return 0;
}