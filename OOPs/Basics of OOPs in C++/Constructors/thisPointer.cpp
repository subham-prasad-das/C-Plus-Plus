#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length, breadth;

    public:
        Rectangle(int length, int breadth){ // the constructor assigning the values to the private members
/*          -> It is a case where we have the data members name equal to the name of formal arguments of the constructor
            -> while assigning the values as of the input recieved to the data members like below ---
            length = length;
            breadth = breadth;
                as we know that, local variables have highest priority so the the local members will assign value within itself without accessing the private data members.
            -> here we need 'this' pointer to assign the values from the given input to the values to the data members.
            -> 'this' is basically a pointer that holds the address of the "current object"
            -> As we know that, every object has its own copy of data members, so every time the member function is called through the object its copy gets initialized.  
            */

           this -> length = length;
           this -> breadth = breadth;
           cout << "The value of this is: " << this << endl;
           
        }
        void getData(){ // getter function
        }
};

int main(){
    Rectangle *e1 = new Rectangle(2, 3); // dynamically created object and passed the arguments

    cout << "To prove the same we'll print the address of the object in the main function and the value of this in the constructor" << endl;
    cout << "address of the object created is: " << e1 <<endl; 
    e1 -> getData();
    return 0;
}