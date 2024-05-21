/*

-> We know how a copy of any object is made. 

-> Whenever we try to do a copy of an object, we do the following :
    - let 'Demo' be a class and we have previously made an object as 'obj1' of the class 'Demo'. 
    - Now we want to make an object 'obj2' in which we will be copying all the datas of 'obj1'.
    - so what we need to do is we can simply write, "Demo obj2 = obj1;".
    - In the above example we described the 'obj2' as it will be holding the values of 'obj1' while its initialization.

-> Understanding the BTS, 
    - there is an object 'obj1' with some data let say "a = 3, b = 6".
    - Now we have another object 'obj2' assigned with the values of 'obj1' during its initialization.
    - So when we wrote "Demo obj2 = obj1;", our compiler made a "copy constructor" for us by default.
    - A "Copy Constructor" is invoked when we are making an object and at the same time we are initializing that object with an object of the same class.
    - Also when a copy of the object is made, the "default assignment operator" or the "inmplicit copy assignment operator" is also invoked.
    - Any one from the above constructor or the operator is invoked.
    - when we do the following :
            Demo d1;
            d1.setData(4, 5)
            Demo d2;
            d2 = d1;

            - In line 1, we made an object d1 and assigned values to that in line 2.
            - In line 3, We made another object of same class. In line 4, we made d2 == d3, i.e. making the values of d2 same as of d1.
            - In the above program, the copy constructor wont be invoked, because we have not equalized the value of d2 at the time of making the object d2.
            - Here "assignment operator" is called.
            - While making a class, along with making a default constructor and default copy constructor, the C++ compiler make a "copy assignment operator".
            - This is the case when the "default assignment operator" or the "inmplicit copy assignment operator" is invoked for copying the data of d1 into d2.
            - The overloading of "default assignment operator" is done by the compiler. It is done during the formation of default constructors.
         
-> Creating copy of object by copying data of all member variables the same way is called as "Shallow Copy". An example of the same is:

    #include<bits/stdc++.h>
    using namespace std;

    class Demo{
        private:
            int a, b;
        public:
            Demo(){ // default constructor

            }
            Demo(int x, int y){ // parameterized constructor
                a = x;
                b = y;
            }
            void showData(){ // member function to show the values of the data members of the calling object
                cout << "The value of a: " << a << "and b is: " << b << endl;
            }
            Demo(Demo &d){ // copy constructor
                a = d.a;
                b = d.b;
            }

    };

    int main(){
        Demo d1(4, 5); // parameterized constructor called
        d1.showData();

        Demo d2(d1); // copied the the data of d1 into d2 through the copy constructor 
        d2.showData();

        Demo d3; // default constructor  called
        d3 = d2; // copied the data of d2 into d3 through overloading the assignment operator
        d3.showData();

        return 0;
    }
*/
