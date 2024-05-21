#include<iostream>
class Employee{
    private:
        int eid;
    public: 
        Employee(int eid){
            this -> eid = eid;
        }
        void show(){
            std :: cout << "The employee id is: " << eid;
        }
};