#include <bits/stdc++.h>
using namespace std;

int power(int n){
    // lets suppose we are finding the power of 2
    if(n==0)
        return 1;

    return 2*power(n-1); //whatever the base value is, we just have to put that value in place of 2 in this line.
}

int main(){
    int n;
    cout<<"Enter the power of two you wanna get: ";
    cin>>n;
    cout<<"The desired power is: "<<power(n);
    return 0;
}