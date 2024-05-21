/*
    -> A unary operator operates only one operang object.
    -> Hence, it may not return a value. However, there is no such rule. An overloaded unary operator function can return a value.
*/

#include<bits/stdc++.h>
using namespace std;

class Point{
    private:
        int xCord = 0;
        int yCord = 0;

    public:
        Point(){
            xCord = 0;
            yCord = 0;
        }
        void inputCord(){
            cout << "Enter x-cordinate value: " << endl;
            cin >> xCord;
            cout << "Enter the y-coordinate value: "<< endl;
            cin >> yCord;
        }
        void operator-(){
            xCord = -xCord;
            yCord = -yCord;
        }
        void displayCord(){
            cout << "Point is: " << "(" << xCord << ", " << yCord << ")";
        }
};

int main(){
    Point p;
    p.inputCord();
    cout << "Before operator overloading: ";
    p.displayCord();
    cout << endl;
    cout << "After operator overloading ";
    -p;
    p.displayCord();
    return 0;
}

/*
    -> Here we have taken a class having co-ordinates (x, y) as its private members.
    -> Inside the constructor, we have defined them to be 0 each.
    -> in the inputCord method we have taken the input of the co-ordinates and in the displayCord method we have shown the values of the co-ordinates.
    -> The operator overloading is done in the method having the name as operator followed by its sign.
    -> when it is used before the object, the sign of the object which was previously positive, changed to negative.
*/