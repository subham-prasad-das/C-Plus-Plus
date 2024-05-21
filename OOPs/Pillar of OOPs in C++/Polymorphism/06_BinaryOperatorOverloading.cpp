/*

    -> The overloading of binary operators does the same job as of the unary operators.
    -> The binary overloaded operator function takes the first object as an implicit operand and the second operand must be passed explicitely.
    -> The data members of the first object are accessed without using the dot operator whereas, the second member can be accessed using the dot operator, if the argument is an object. 

*/

#include<bits/stdc++.h>
using namespace std;
 
class Complex{
    private:
        int real;
        int imag;
    public:
        Complex(){}
        Complex(int real, int imag){
            this-> real = real;
            this-> imag = imag;
        }
        void displayComplex(){
            cout << real << " + " << imag << "i ";
        }
        Complex operator+(Complex c){
            Complex temp;
            temp.real = real + c.real;
            temp.imag = imag + c.imag;
            return temp;
        }
};

int main(){
    Complex x(2, 3), y(4, 5);
    Complex sum = x + y;
    sum.displayComplex();
    return 0;
}

/*

    -> First we have described one parameterized constructor and one default constructor. 
    -> In the parameterized constructor, we have initiated the values of the objects of the complex class.
    -> In the operator overloading function, we have overloaded the plus(+) operator.
    -> Taking the fact into consideration that in the binary operator overloading, the calling object will be the first operand and the object passed as an argument is the second operand, here 'x' is the calling object (1st operand) and 'y' is the passed object (2nd operand) to the operator overloading function.
    -> Inside the operator overloading function, we have declared the object of the Complex class, taken its 'real' as the sum of real of both the operands and its 'imag' as the sum of imag of both the operands. Atlast we have returned the object made inside the operator overloading function which is eventually caught by sum object declared and defined inside the main(). 
 
*/