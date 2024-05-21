#include<iostream> // -> iostream is a file which consist of declarations of many pre-defined functions, classes, namespaces etc.
using namespace std; // -> from all the namespaces we are declaring to use only the namespace "std".

namespace Mine{ // defined a namespace "Mine".
    int a; // taken a variable a inside it, a is undefined yet.
    void show(); // declared a function "show", which will eventually show the message we are going to define inside it. 
    class Name{ // made a class "Name".
        public: // public section started...
            void print(); // in the public section, declared a function print().
    }; // end of the class
} // end of the namespace

void Mine :: show(){ // defined the function "show" which is inside Mine namespace. 'so as in enlish it is WHICH IS INSIDE, in coding it is THE SCOPE RESOLUTION OPERATOR(::)'.
    cout << "The curser is inside the function of the namespace." << endl; // we will get this message when the compiler comes inside it through function call.
}

void Mine :: Name :: print(){ // defined the function WHICH IS INSIDE (::) class "Name" WHICH IS further INSIDE (::) namespace "Mine". 
    cout << "Now the curser is inside the function which is declared inside the class of the namespace mine"; // we will get this message when the compiler comes inside it through function call.
}

using namespace Mine; // declared to use the contents (declarations) we ve done inside namespace Mine.
int main(){ // The main started
    a = 5; // As we have declared two lines earlier that we are going to use the declaarations of the namespace Mine, so without any error we are using a, which is one of the member of the namespace Mine. 
    cout << a; // printed 'a'.
    show(); // as Show is inside the namespace Mine, We dont need to have an object to call its functions unlike it happened incase of class(es). 
    Name obj; // made an object of class Name which is inside the namespace Mine. 
    obj.print(); // called the member function print() by the help of the object 'obj' of class Name.
    return 0;
}

