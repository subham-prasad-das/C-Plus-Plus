#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    int salary;

public:
    void setData();
    void getData();
};

void Employee ::getData()
{ // for printing the contents of all the employees
    cout << "My name is " << name << " my employee id is " << id << " and i am getting salary " << salary;
}

void Employee ::setData()
{
    int i, n, s; // i = id, n = name, s = salary
    cout << "Enter your name followed by employee id and salary: ";
    cin >> name >> id >> salary; // taking input and displaying the data simultaneously
    getData();                   // calling getData method inside the setData function
}

int main()
{
    Employee emp[4]; // made an array of employees
    for (int j = 1; j <= 4; j++)
    {
        emp[j].setData(); // loop for taking inputs about the attributes of the employee into the array
    }
    return 0;
}