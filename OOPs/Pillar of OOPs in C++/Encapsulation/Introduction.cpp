/*
    -> Encapsulation means wrapping up of the data members as well as the member functions into a class
    -> Its like wrapping up of the tiny bids of medicines in one capsule.
    -> Consider a real-life example of encapsulation, in a company, there are different sections like the accounts section, finance section, sales section, etc. 
    Now, The finance section handles all the financial transactions and keeps records of all the data related to finance.
    Similarly, the sales section handles all the sales-related activities and keeps records of all the sales.
    Now there may arise a situation when for some reason an official from the finance section needs all the data about sales in a particular month.
    In this case, he is not allowed to directly access the data of the sales section. He will first have to contact some other officer in the sales section and then request him to give the particular data.
    -> Two Important  property of Encapsulation:-
        - Data Protection: Encapsulation protects the internal state of an object by keeping its data members private. Access to and modification of these data members is restricted to the class’s public methods, ensuring controlled and secure data manipulation.
        - Information Hiding: Encapsulation hides the internal implementation details of a class from external code. Only the public interface of the class is accessible, providing abstraction and simplifying the usage of the class while allowing the internal implementation to be modified without impacting external code.
*/

#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;

    public:
        Rectangle(int length, int breadth){
            this-> length = length;
            this-> breadth = breadth;
        }

        void getArea(){
            cout << "The area of the rectangle is: " << length * breadth << endl;
        }
};

int main(){
    
    Rectangle rect1(3, 4);
    rect1.getArea();
    return 0;

}