#include <bits/stdc++.h>
using namespace std;

void bin(int n){
    if(n==0)
       return ;
    bin(n/2);
    cout<<n%2;
}

int main(){
    int n;
    cout<<"enter a no:";
    cin>>n;
    bin(n);
    

    return 0;
}

// here time complexity will be 0(N).