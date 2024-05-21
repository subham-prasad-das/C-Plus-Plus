/*
    This segment of code defines < CONSTRUCTOR OVERLOADING >  < DEFAULT CONSTRUCTOR >  and  < PARAMETERIZED CONSTRUCTOR >
*/

#include<iostream>
using namespace std;
class Demo{
    private:
        int a, b;
        int c;
    
    public:
        Demo(int x, int y){ // here we wrote the contents of the setData function inside the constructor "Demo".
            a = x;
            b = y;
        }

        Demo(int z){ // here we have made a constructor with same name as the previous one but just the number of the parameters are not same
            c = z;
        }

        Demo(){ 
            // This one will run for the objects which doesn't pass any value when declared. ex. object 'c'.
        }
        //Here in the class 1st and 2nd are the PARAMETERIZED CONSTRUCTORS and 3rd one is the DEFAULT CONSTRUCTOR.
        void getData();
};

void Demo :: getData(){
    cout<<a<<" "<<b; 
}

int main(){
    Demo a(4, 5); // as our constructor takes the values and assign them to the private data members of the class Demo.
                    // and as we know that constructors are invoked when objects are created, so we've passed values to the constructors through the objects we've created.

    Demo b(5); // here constructor overloading comes into scene. Like functions, constructors can also be overloaded.
    Demo c; // constructor number 3 will accept it as it is not having any actual argument which matches the overloading with constructor 3.
    /*
        we could have also written that Demo a = Demo (4, 5);
                                        Demo b = Demo (5); (OR) Demo b = 5; because it is single valued so we can write with this type also.
    */

    a.getData();
    return 0;
}

/*
    -> What happens when we wont make any constructor and keep on making objects like 'c' in our program. That time also a constructor is automatically made by the compiler.
    -> That kinda constructor dont take any args from the object also dont have anything inside its body. 
    -> Whenever an object is declared, a cpnstructor is made which is of the above mentioned type. It is called as DEFAULT CONSTRUCTOR.
    -> So whenever we make an object which gives some arguments explicitely, we have to make that type of constructor by ourselves.
    -> Also the rule says that if one makes a constructor expicitely then compiler wont manage to make a DEFAULT CONSTRUCTOR. We need to make it by ourselves.
*/