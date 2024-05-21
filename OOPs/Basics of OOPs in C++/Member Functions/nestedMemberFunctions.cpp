/*
//here we have calculated the area of a rectangle using different memberfunctions for getting its length, breadth and another one for calculating its area.

#include <bits/stdc++.h>
using namespace std;

class rectangle{
    private:
        int length;
        int breadth;
    
    public: 
        void setLength();
        void setBreadth();
        // void setDimensions();
        void getArea();
};

void rectangle :: setLength(){
    int l;
    cout<<"Enter the length of the rectangle: ";
    cin>>l;
    length = l;
}

void rectangle :: setBreadth(){
    int b;
    cout<<"Enter the breadth of the rectangle: ";
    cin>>b;
    breadth = b;
}

void rectangle :: getArea(){
    int area = length * breadth;
    cout<<"The area is: "<<area; 
}

int main(){
    rectangle rect;
    rect.setLength();
    rect.setBreadth();
    rect.getArea();
    return 0;
}
*/

//unlike the above one, here we will define all the required member functions but will be calling them inside another function

#include <bits/stdc++.h>
using namespace std;

class rectangle{
    private:
        int length;
        int breadth;
    
    public: 
        void setLength();
        void setBreadth();
        void setDimensions();
        void getArea();
};

void rectangle :: setLength(){
    int l;
    cout<<"Enter the length of the rectangle: ";
    cin>>l;
    length = l;
}

void rectangle :: setBreadth(){
    int b;
    cout<<"Enter the breadth of the rectangle: ";
    cin>>b;
    breadth = b;
}

void rectangle :: setDimensions(){
    // called the setLength and setBreadth functions inside the setDimension function.
    // this case is called as nesting of the member functions.
    // i.e. the function calls are done inside another function.
    setLength();
    setBreadth();
}

void rectangle :: getArea(){
    int area = length * breadth;
    cout<<"The area is: "<<area; 
}

int main(){
    rectangle rect;
    rect.setDimensions();
    rect.getArea();
    return 0;
}