#include <bits/stdc++.h>
using namespace std;

class date{
    private: 
        int dd, mm, yyyy; // Data members of the class date
    public:
        void setDate();
        void getDate();
}today;

void date :: setDate(){
    int d, m, y;
    cout<<"Enter the date, month, year: ";
    cin>>d>>m>>y;
    dd = d;
    mm = m;
    yyyy = y;
}

void date :: getDate(){
    cout<<"The day is: "<<dd<<" month is: "<<mm<<" and the year is: "<<yyyy;
}

int main(){
    today.setDate();
    today.getDate();
    return 0;
}