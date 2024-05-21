#include <bits/stdc++.h>
using namespace std;

int facto(int n){
    if(n==0)
        return 1;

    return n*facto(n-1);
}

int main(){
    int n;
    cout<<"Enter the number you wanna get the factorial of: ";
    cin>>n;
    int f=facto(n);
    cout<<f;
    return 0;
}