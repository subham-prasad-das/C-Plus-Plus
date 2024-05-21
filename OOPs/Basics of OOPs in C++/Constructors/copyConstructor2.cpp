/*
Here we have used the dymical representation of the copy constructor.
*/

#include<iostream>
using namespace std;

class Employee{
    private:
        int eid;
    public:
        Employee (int eid){
            this -> eid = eid;
        }

        Employee (Employee& e1){
            eid = e1.eid; 
            // here the "this -> eid" represents the eid of the object which has invoked this constructor.
            // it symbolizes that eid of the object which has invoked it should be assigned with the value of the object which it has as its formal parameter i.e. the value of the object e1.
            
        }

        void show(){
            cout << "the employee id is: " << eid << endl;
        }

};

int main(){
    Employee (*e1) = new Employee(30034); // initialized e1 to 30034
    e1 -> show();
    Employee (*e2) = new Employee(*e1); // copied the value of e1 to e2 by copy constructor.
    e2 -> show();

    return 0;
}