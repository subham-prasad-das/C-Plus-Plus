#include <bits/stdc++.h>
using namespace std;

class Salary{
    public:
        float basic;
        float perks;
    public:
        Salary(float b, float p){
            basic = b;
            perks = p;
        }
        float getBasic(){
            return basic;
        }
        float getPerks(){
            return perks;
        }
};

class Deduction{
    private:
        float incomeTax;
        float otherTax;
    public:
        Deduction(float i, float o){
            incomeTax = i;
            otherTax = o;
        }
        float getIncomeTax(){
            return incomeTax;
        }
        float getOtherTax(){
            return otherTax;
        }
};

class Pay{
    private:
        float otherIncome;
        Salary s;
        Deduction d;
    public:
        Pay(float b, float p, float i, float o, float h) : s(b, p), d(i, o){
            otherIncome = h;
        }
        void displaySalary();
};

void Pay :: displaySalary(){
    float netPay;
    cout<<"Salary Statement---"<<endl;
    cout<<"Basic Pay: "<<s.getBasic()<<endl;
    cout<<"Perks: "<<s.getPerks()<<endl;
    cout<<"Income from other sources: "<<otherIncome<<endl;
    cout<<"Income tax deduction: "<<d.getIncomeTax()<<endl;
    cout<<"Other tax deduction: "<<d.getOtherTax()<<endl;
    netPay = s.getBasic() + s.getPerks() + otherIncome - d.getIncomeTax() - d.getOtherTax();
    cout<<"Net pay: "<<netPay<<endl;
}

int main(){
    Pay emp(15560.0, 9700.0, 7200.0, 200.0, 3500.0);
    emp.displaySalary();
    return 0;
}

/*
Here, The classes Salary and Deduction are simple classes. But the class Pay is not a simple class. Here the member of this class are objects of this classes Salary and Deduction. The function displaySalary() shows the object of the class Pay is a collection of objects of other two classes. This concept is called 'containeership', which will be implemented using "nested classes".
*/