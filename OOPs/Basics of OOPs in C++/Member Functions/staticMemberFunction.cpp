/*
Taking about the static member function, they have limited applications, but the good one is to "preinitialize" private static data before any object is actually created, which is done below..
*/
#include <bits/stdc++.h>
using namespace std;

class test{
    private: 
        static int x; // declared the variable with static type

    public: 
        static void init(int a){
            x = a; //assigned the value of 'a' as of 'x'
        }
        void show(){ //member function to show the value of x;
            cout<<x;
        }
};

int test :: x; //redifine x

int main(){
    test::init(100); //value passed to the member function
    test x; //object made
    x.show(); //invoked the show function to show the value passed to static variable ans this will show 100 i.e. the value passed to it.
    return 0;
}

/*
In this program,  the static member 'init' has been invoked prior to creation of the object 'x'. The 'init' static member function initializes the static data member 'x'. So the 'static' data member 'x' has been initialized prior to creation of any object.
*/