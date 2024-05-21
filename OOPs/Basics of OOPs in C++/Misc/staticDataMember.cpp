#include <bits/stdc++.h>
using namespace std;

class date{
    private:
        int day, month, year;
        static char slash; // declared the static data member inside the class
    public:
        void setDate(int, int, int);
        void showDate();

};

char date :: slash = '/'; // defined the static data member outside the class using scope resolution

void date :: setDate(int d, int m, int y){
    day = d;
    month = m;
    year = y;
}

void date :: showDate(){
    cout<<day<<slash<<month<<slash<<year;
}

int main(){
    date birthday, admission;
    int d, m, y, dd, mm, yy;

    cout<<"Enter your birthday: ";
    cin>>d>>m>>y;
    birthday.setDate(d, m, y);

    cout<<"Enter your admission day: ";
    cin>>dd>>mm>>yy;
    admission.setDate(dd, mm, yy);

    cout<<"Your Birthday is: ";
    birthday.showDate();
    cout<<" and ";
    cout<<"Your Birthday is: ";
    admission.showDate();

    return 0;
}

/*
here, the above program is having two data members.
we have declared the static variable slash within the class and defined it outside the class.
Thus, we have shown here that both our data member are using the slash independently.
*/