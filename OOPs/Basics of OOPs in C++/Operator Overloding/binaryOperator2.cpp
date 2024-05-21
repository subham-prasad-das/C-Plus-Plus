/*
Below is the program to compare the values of the object by the use of normal method "compare".

#include<iostream>
using namespace std;

class Test{
    private:
        int a;
    
    public:
        void setData(int a){
            this->a = a; // 'a' is assigned to the object situated in the private section of the class by whichever object it is called from.
        }
        void compare(Test b){
            if (this->a==b.a) // compares the values of the calling object with the value of the object passed as formal argument.
                cout << "The values are equal" << endl;
            else
                cout << "The values are not equal" << endl;

        }
};

int main(){
    Test a, b;

    // values set 
    a.setData(5);
    b.setData(8);

    a.compare(b); 
    // here the calling object is 'a' and as an argument we are passing 'b' of 'Test' type.
    // The calling object must always be in the LHS.
    return 0;
}
*/

/*
The above program can be written using operator overloading too
As we know that, the operators can only work on the pre defined datatypes.
But here we ll be using them with use defined data types. 
*/

#include<iostream>
using namespace std;

class Test{
    private:
        int a;
    
    public:
        void setData(int a){
            this->a = a; 
        }
        void operator == (Test b){ // definition of the ' == ' operator.
            if (this->a==b.a) 
               cout << "The values are equal" << endl;
            else
                cout << "The values are not equal" << endl;

        }
};

int main(){
    Test a, b;

    // values set 
    a.setData(5);
    b.setData(8);

    a == b; // As we have defined the function of the operator ' == ' , it will now work on the user defined data types also.
    return 0;
}

/*
Now we can make a calculator using operator overloading.
Existing operator will only work on the predefined datatypes, but using the "operator overloading" concept we can also make the existing oprators to work on user defined datatypes also.  
*/