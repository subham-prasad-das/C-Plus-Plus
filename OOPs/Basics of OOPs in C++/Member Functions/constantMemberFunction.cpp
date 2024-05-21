/*
A class object is not directly modified by the program. Rather, the set of 'public member functions' are invoked when a class object is required to be modified. The constant member function are used to modify the objects. So the compiler must distinguish between constant and non-constant member functions.
*/
#include <bits/stdc++.h>
using namespace std;

class date{
    private: 
        int d, m, y;

    public: 
        void setDate(){
            int dd, mm, yy;
            cout<<"Enter todays date: ";
            cin>>dd>>mm>>yy;
            d = dd; m = mm; y = yy;
        }

        void showDate(){
            cout<<"Todays date is: "<<d<<" "<<m<<" "<<y;
        }
};

int main(){
    // const date dt; //show error when ran.
    date dt;
    dt.setDate();
    dt.showDate();
    return 0;
}

/*
-> Here, 'dt' is declared as a constant object of 'date class'
-> In 'setDate' function, the data members are modified.
-> Since constant object will not be modified after its declaration, the invocation of 'setDate'
function will lead to "compile time error".
-> That is why the function that does not modify the data of the class at all can be declared as 'CONST'.
for example we can take the member function that is only used to show the end result can be called as 'CONST'.
*/