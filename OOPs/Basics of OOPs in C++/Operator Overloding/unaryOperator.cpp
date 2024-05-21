#include<iostream>
using namespace std;

class Cordinates{
    private:
        int x;
    public:
        Cordinates (int x){
            this->x = x;
        }

        Cordinates(){}

        const void showData(){
            cout << x;
        }

        Cordinates operator-(){ // as the operator's working on unary operator, so no arguments'll be taken only calling object'll be considered.
            Cordinates temp;
            temp.x = -x;
            return temp;
        }
};

int main(){
    Cordinates m(2), n;
    n = (-m); // operator overloading called
    n.showData();
    return 0;
}