/*
The code will focus on adding two complex numbers. First through using normal class, methods and constructors. The second one will use all the concepts used in code 1 plus the concept of "Operator Overloading".
*/


/*
By Using Methods......


#include<iostream>
using namespace std;

class Complex{
    private:
        int a, b;
    public:
        Complex(int x, int y){ // parameterized constructor as the setter
            a = x;
            b = y;
        }

        Complex(){} // default constructor

        void showData(){
            cout << a << " + " << b << "i";
        }
        Complex add(Complex d){
            Complex temp;
            temp.a = a + d.a; // 'a' is the value of the calling object whereas 'd.a' is the value of the object which is passed as an argument.
            temp.b = b + d.b; // 'b' is the value of the calling object whereas 'd.b' is the value of the object which is passed as an argument.
            return temp;
        }
};

int main(){
    Complex fir(1,2);
    Complex sec(3,4);
    Complex thi;
    thi = fir.add(sec);
    thi.showData();
    return 0;
}
*/

#include<iostream>
using namespace std;

class Complex{
    private:
        int a, b;
    public:
        Complex(int x, int y){ // parameterized constructor as the setter
            a = x;
            b = y;
        }

        Complex(){} // default constructor

        void showData(){
            cout << a << " + " << b << "i";
        }
        Complex operator+(Complex d){
            Complex temp;
            temp.a = a + d.a; // 'a' is the value of the calling object whereas 'd.a' is the value of the object which is passed as an argument.
            temp.b = b + d.b; // 'b' is the value of the calling object whereas 'd.b' is the value of the object which is passed as an argument.
            return temp;
        }
};

int main(){
    Complex fir(1,2);
    Complex sec(3,4);
    
    Complex thi;
    thi = fir + sec;
    thi.showData();

    return 0;
}