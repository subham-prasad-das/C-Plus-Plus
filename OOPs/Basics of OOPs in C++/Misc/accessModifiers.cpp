/*
||-> Why use classes instead of structures ?
    Classes and structures are somewhat the same but still, they have some differences. For example, we cannot hide data in structures which means that everything is public and can be accessed easily which is a major drawback of the structure because structures cannot be used where data security is a major concern. Another drawback of structures is that we cannot add functions in it.

||-> Classes in C++
    Classes are user-defined data-types and are a template for creating objects. Classes consist of variables and functions which are also called class members.

||-> Public Access Modifier in C++
    All the variables and functions declared under public access modifier will be available for everyone. They can be accessed both inside and outside the class. Dot (.) operator is used in the program to access public data members directly.

||-> Private Access Modifier in C++
    All the variables and functions declared under a private access modifier can only be used inside the class. They are not permissible to be used by any object or function outside the class.
*/


#include <bits/stdc++.h>
/*
class Employee
{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1); // Declaration of the setData function
        void getData(){ //getdata defined inside the class, so we didnt use ::
            std::cout<<"The value of a is "<<a<<std::endl;
            std::cout<<"The value of b is "<<b<<std::endl;
            std::cout<<"The value of c is "<<c<<std::endl;
            std::cout<<"The value of d is "<<d<<std::endl;
            std::cout<<"The value of e is "<<e<<std::endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){ //setdata defined outside the class through ::
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee subham;
    subham.d = 34;
    subham.e = 89;
    subham.setData(1,2,4);
    subham.getData();
    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
        int id;
        string name;
        int salary;
    
    public: 
        void setData(int, string, int);
        void getData();
};

void Student :: setData(int a1, string s, int c3){
    id = a1;
    name = s;
    salary = c3;
}

void Student :: getData(){
    cout<<"The ID is: "<<id<<endl;  
    cout<<"The name is: "<<name<<endl;
    cout<<"The salary is: "<<salary<<endl;
    //as getdata is a member function so it can directly be accessed by the members of the class
    (id, name, salary are defined within the private section of the class but can be accessed by function getdata which is declared in public section of the class but is the member of the class) 
}

int main(){
    Student Subham;
    Subham.setData(444, "subham", 69);
    Subham.getData();
    return 0;
}
*/


/*
In the above code, 
1: we created an “employee” class, 
2: three integer variables “int a”, “int b”, and “int c” were declared under the private access modifier, 
3: two integer variables “int d” and “int e” was declared under the public access modifiers, 
4: “setData” function was declared,
5: “getData” function was defined and values of all the variables are printed.
6: “setData” function was defined outside the “employee” class by using a scope-resolution-operator(::); “setData” function is used to assign values to the private member of the class.
Then in the main function,
1: we created an object “harry” of the class “employee”; 
2: we assigned values to “int d” and “int e” which are public class members. 
    *If we try to assign values to the private class member’s compiler will throw an error.
3: we passed the values to the function “setData” and at the end, we called “getData” function which will print the values of all the variables as we had defined the getdata function.
*/