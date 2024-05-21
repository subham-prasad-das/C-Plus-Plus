/*
    -> When we call a member function of the derieved class having the same name and same signature as of the member function of the base class, method overriding happens.
    -> When the object of the derived class invokes the function, it will invoke the function defined in the derived class even though the function is defined in both base and derived classes.
    -> Method overriding happens when the following things happen:-
        - It can only be achieved using inheritance.
        - return type should be same.
        - name of the function should be same.
        - no of args should be same
        - Data type of args should be same.
*/

#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
        void print(){
            cout << "Inside the 'Base' class" << endl;
        }

        void add(){
            cout << "Inside the 'Base' class" << endl; 
        }
};

class Derieved : public Base{
    public:
        void print(){
            cout << "Inside the 'Derieved' class" << endl;
        }

        void add(int c){
            cout << "Inside the 'Derieved' class" << endl; 
        }
};

int main(){
    Derieved d;
    d.print(); // should run the function of the derieved class and here the method overriding will come to effect i.e. despite having the sole same function in base as well as in derived class, the function of the derived class will be executed.
    d.add(4); // should run the function of the derieved class
    // d.add(); // not possible to overload because method overloading occur only when two of more intended functions are in same class.
    d.Base::add(); // will run fine and execute the function of the base class as we have used the scope resolution operator
    return 0;
}