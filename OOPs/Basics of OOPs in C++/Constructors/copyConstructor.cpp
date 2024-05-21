/*
    -> When an object is made, Compiler makes two kinds of constructor.
    -> One is Default Constructor and another one is COPY CONSTRUCTOR.
    -> As we know that, if we define a constructor in the class, the compiler wont again made the DEFAULT construuctor. But still it will make a COPY Constructor.
    ->  But if we define a COPY Constructor in our class, then as there is a constructor already defined inside the class so the compiler is neither gonna make a default constructor and as we have already made a copy constructor, so nor a COPY constructor is made by the compiler.
*/

#include<iostream>
using namespace std;
class Demo{
    private:
        int a, b;
        int c;
    
    public:
        Demo(int x, int y){ 
            a = x;
            b = y;
        }

        Demo(int z){ 
            c = z;
        }
        /*
        -> Here we have made a constructor which takes object of the class Demo, to which it belongs to, as formal argument.
        -> This is made to recieve the parameter send by 'Demo c', that is the object of the class it also belongs to.
        -> We have made the below constructor, taking in mind that, it is recieving an arg of type Demo.
        -> But this is a wrong process. When the object c is called, below constructor is also called and the parameter, "Demo c" is also made as a reason the constuctor is again called with the object declaration. Thus as this process repeats, we end with a "RECURSSION" which is not a good practise.
        Demo(Demo c){ 
            a = c.a;
            b = c.b;
        }
        */
        Demo(Demo &c){ // Instead we can take the reference of ' object c' as no other copy of the object is made and it dont call a constructor again and again whenever it is declared.
            a = c.a;
            b = c.b;
        }

        void getData();
};

void Demo :: getData(){
    cout<<a<<" "<<b; 
}

int main(){
    Demo a(4, 5);
    Demo b(5); 
    Demo c(a);
    // Demo c = a; // This could also be written
    a.getData();
    return 0;
}