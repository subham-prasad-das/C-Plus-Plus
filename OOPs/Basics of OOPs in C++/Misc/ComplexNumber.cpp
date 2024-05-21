#include <bits/stdc++.h>
using namespace std;
/*
Objects can be passed as function arguments. This is useful when we want to assign the values of a passed object to the current object.
*/
class Complex
{
private:
    int a, b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setDataBySum(Complex o1, Complex o2)
    {
    // Here we will first set the sum of 'a' of object 1 and 'a' of object 2 in 'this->a' i.e. in the data member of the calling function. This is also done with 'b'.
        this->a = o1.a + o2.a;
        this->b = o1.b + o2.b;
    }
    void printNumber()
    {
        cout << "The complex number is: " << a << " + " << b << " i " << endl;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2); //Objects of same class are passed to the member function.
    c3.printNumber();

    return 0;
}

/*
As a summary, we wrote the class, defined the member functions. we made a member function which will take the objects of the same class as arguments and sum them. 
First we took three objects c1, c2 and c3. Then set the values of objects c1 and c2 in them through the "setData" member function. 
Then called the setDataBySum member function and gave c1 and c2 (objects of the same class) as actual parameter.
while describing the "setDataBySum" member function, we set the values of object 3 i.e. of the c3 object, a to be the sum of a of object c1 and object c2. Likewise, we set the values of object 3 i.e. of the c3 object, b to be the sum of b of object c1 and object c2.
Then we invoked the printNumber member function to show the sum we have done with the objects.
*/