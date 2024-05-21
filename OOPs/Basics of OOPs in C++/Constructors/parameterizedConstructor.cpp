/*
`   A non-default coonstructor is one that takes one or more arguments is known as parameterized constructor.
*/
#include<iostream>
using namespace std;

class Date{
    private: 
        int day, month, year;
    public:
        Date(int d, int m, int y); // declaration of the parameterized constructor
        void showDate(); // function to show the set date
};

Date :: Date(int d, int m, int y){ // definiton of the parameterized constructor
    day = d;
    month = m;
    year = y;
}

void Date :: showDate(){ // definition of the member function
    cout<<"The day is: "<<day<<", month is: "<<month<<" and the year is: "<<year<<endl;
}

int main(){
    Date dt2(10, 05, 2023);
   // dt1.showDate(); // it will invoke the default constructor i.e. the output will be the values set during the definition of the constructor Date. 
    dt2.showDate(); // it will rsult in invoking the constructor with parameter i.e. the output will be the values passed during the declaration of the object dt2.
    return 0;
}