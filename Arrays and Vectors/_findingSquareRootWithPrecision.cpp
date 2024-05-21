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

double morePrecision(int n, int pre, int tempsol){
    double factor=1; // let the factor be 1 initially
    double ans=tempsol; //let initially the ans be equal to the integral part it has got
    for(int i=1; i<=pre; i++){ //will search till the no of precision it has got through the formal argument
        factor/=10; // in order to to 1/(pre)th part
        for(int j=ans; j*j<n; j+=factor){ //will be written when i will do it again myself
            ans=j;
        }
    }
    return ans; // lastly the ans which consist of the integral paart with its near to accurate precision value
}

int main(){
    int n, p;
    cout<<"Enter the number you want the squar root of and till the precision with: ";
    cin>>n>>p;
    int t=sqrt(n); // whatever integral value the function returns, it is stored in the variable p
    cout<<endl<<"The square root of the given number is: "<<morePrecision(n, p, t); // and here the square root of the given num with the given precision is displayed with the help of the function call.
    return 0;
}

//no error but not exactly executed, need some rectification