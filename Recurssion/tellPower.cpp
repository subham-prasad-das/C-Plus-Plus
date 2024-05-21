#include <bits/stdc++.h>
using namespace std;

/*
int tellPower(int base, int exp){
    if(exp==0) //any digit to the power 0 is 1.
        return 1;

    return (base*tellPower(base, exp-1)); //remember one thing, if the function have a return type then 
                                        // you have to store the value returned by the recurssive case
}
// it is not the best way to do the job as it is not the best optimized way to calculate the power
*/

int tellPower(int base, int exp){
    if(exp == 0) //any digit to the power 0 is 1.
        return 1;

    if(exp == 1) //any digit to the power 1 is the digit itself
        return base;

    int ans = tellPower(base, exp/2); // this case has been described below

    if(exp & 1) // if exponential value is odd
        return base * ans * ans;

    else        // if exponential value is even
        return ans * ans; 

}

/*
we know that when the exponential value is even, we just have to multiply the base value itself with half of the given exponent value  
similarly, when the exponential value is odd, we just have to multiply the base value with with the value found for the even case.  
Thats what the recurssive call in the ab0ve function is doing.
*/

int main(){
    int base, exp;
    cout<<"Enter the base followed by the exponintial value: ";
    cin>>base>>exp;
    cout << tellPower(base, exp);
    return 0;
}