#include<iostream>
using namespace std;

class Employee{
    private:
        int eid;
    public: 
        Employee(int eid){ // constructor
            cout << "Now we are inside the constructor" << endl;
            this -> eid = eid;
        }

        void show(){
            cout << "The employee id is: " << eid;
        }
        /*
        A Destructor never takes an argument nor returns any values.
        */
        ~Employee(){ // destructor
            cout << "Destructor is executed";
        }
};

int main(){
    Employee e1(40034);
    // e1.show();
    return 0;
}