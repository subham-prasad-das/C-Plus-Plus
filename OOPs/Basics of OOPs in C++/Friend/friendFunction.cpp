/*
Friend Function--
-> These are the functions those are not member function of the class but still can access all the private datas of the class.
-> It is created by just adding a "friend" keyword before the declaration which is done inside the class.
-> Through the keyword "friend", the class gives the absolute permission to access all the private datas of the same class.
*/
#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
private:
    int length, breadth;

public:
    void setData(int l, int b)
    {
        length = l;
        breadth = b;
    }
    void printData()
    {
        cout << "The length is: " << length << " and the breadth is: " << breadth;
    }
    friend Rectangle sum(Rectangle o1, Rectangle o2); // declared sum as friend function
};

Rectangle sum(Rectangle o1, Rectangle o2)
{
    // As sum is friend to the class Rectangle so it is able to use its objects/member function
    Rectangle r1;
    r1.setData((o1.length + o2.length), (o1.breadth + o2.breadth));
    return r1; // returned the value of r1 to main
}

int main()
{
    Rectangle r1, r2;

    r1.setData(2, 3);
    r2.setData(2, 6);

    Rectangle sumo = sum(r1, r2); // called the friend function and passed the objects as arguments
    sumo.printData(); // lastly printed the value. 
    return 0;
}

/*
likewise we can also make and apply the uses of friend class. There we just have to make a claas and declare it as a friend of our main class. And thats how it will also be able to use all the data members of the prevoius class.
*/