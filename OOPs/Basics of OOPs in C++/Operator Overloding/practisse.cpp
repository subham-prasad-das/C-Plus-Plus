#include<iostream>
using namespace std;

class Complex{
    private:
        int a, b;
    public:
        Complex (){}

        Complex(int a, int b){
            this->a = a; // 'this->a' symbolizes the data member and 'a' symbolizes the values passed by the calling object.
            this->b = b; // 'this->b' symbolizes the data member and 'b' symbolizes the values passed by the calling object.
        }

        void showData(){ // for showing the datas
            cout << a << " + i" << b;
        }

        Complex operator- (Complex c){
            Complex d;
            d.a = a - c.a;
            d.b = b - c.b; 
            // b is the value of the calling object and c.b is the value of the passed object
        }

};

int main(){
    Complex a(4,5);
    Complex b(3,4);
    Complex c;
    c = a - b;
    c.showData();
    return 0;
}