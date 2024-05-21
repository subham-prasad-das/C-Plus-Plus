#include <bits/stdc++.h>
using namespace std;

int sqrt(int n){
    int s=0, e=n, m=(s+e)/2, ans=-1;
    while(s<=e){
        int square=m*m; //value of square will be updated with the updation of m atlast.
        if(square==n){ //if square is found then return
            return m;
        }
        if(square<n){
            ans=m; // if the value of square is less, store that value in ans for it may be the probable value 
            s=m+1; // s is further updated
        }
        else{ // its the case when sqaure is more than the given number that is 'n'
            e=m-1; // e is updated
        }
        m=(s+e)/2; //everytime a conditional statement goes true m that is the mid is updated 
    }
    return ans; // finally the ans where the mid is stored which is virtually the value of the required square root is returned
}

int main(){
    int n, p;
    cin>>n;
    p=sqrt(n); // whatever value the function returns, it is stored in the variable p
    cout<<"The square root of the given number is: "<<p; // and here p is displayed
    return 0;
}