#include<bits/stdc++.h>
using namespace std;
 
class Complex{
    private:
        int real; // for the real part
        int imag; // for the imaginary part
    public:
        void display(){
            cout << "(" << real << ", " << imag << "i)" << endl;
        }
        Complex(){}
        Complex(int real, int imag){
            this->real = real;
            this->imag = imag;
        }
        Complex operator+(Complex c){
            Complex result;
            result.real = real + c.real;
            result.imag = imag + c.imag;
            return result;
        }
        Complex operator-(Complex c){
            Complex result;
            result.real = real - c.real;
            result.imag = imag - c.imag;
            return result;
        }
        Complex operator*(Complex c){
            Complex result;
            result.real = real * c.real;
            result.imag = imag * c.imag;
            return result;
        }
        Complex operator/(Complex c){
            Complex result;
            result.real = real / c.real;
            result.imag = imag / c.imag;
            return result;
        }
};

int main(){
    Complex x(4, 5), y(3, 4);

    Complex sum = x + y;
    sum.display(); // 7 + 9i

    Complex diff = x - y;
    diff.display(); // 1 + 1i

    Complex mult = x * y;
    mult.display(); // 12 + 20i

    Complex div = x / y;
    div.display(); // 1 + 1i

    return 0;
}