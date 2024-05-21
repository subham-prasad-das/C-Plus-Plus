/*
-> Just as we have the possibility to define FRIEND function, we can also define a class as friend of another one, allowing the second one access to the protected and private members of the first one. 
-> when we have many functions we want to make friend of our required class and let there be 100 of those member functions, that is the time when we require the friend class i.e. declaring the entire class as friend
    
*/

#include <bits/stdc++.h>
using namespace std;

class Complex; // Forward declaration as we dont get any compilation error

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // friend int Calculator ::sumRealComplex(Complex, Complex);
    // friend int Calculator ::sumCompComplex(Complex, Complex);
    /*
    in the above two line of code, we tried to make the member functions of class complex s friend, but done the next line of code instead.
    Basically we saw that at many point of time, class calculator will need to access the private datas of the class complex. Instead of making every individual function a friend to class Calculator, we made the whole class Calculator as a friend to class Complex. By doing so it can easily access all the members of the Complex and do all the required functionalities.
    */
    friend class Calculator; //instead of making the whole member functions as friend, we made this class as a friend of another class.

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}


int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;
    return 0;
}
