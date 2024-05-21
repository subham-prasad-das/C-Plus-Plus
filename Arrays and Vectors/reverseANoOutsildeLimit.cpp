#include <bits/stdc++.h>
using namespace std;

int reverse(int x){
    int dig, rev=0;
        while(x!=0){
            dig=x%10;
            rev=(rev*10);
            if((rev>INT_MAX/10)||(rev<INT_MIN/10))
                return 0;
            rev=rev+dig;
            x/=10;
        }
        return rev;
    }

int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    int r = reverse(x);
    cout<<r;
    return 0;
}