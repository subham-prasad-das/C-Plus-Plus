#include <bits/stdc++.h>
using namespace std;


/* This is a funtional call to solve the recurssive case. Here it is not carrying the parameter along with it all the way till the base case is reached.
int sum(int n){
    if (n==0) return 0;
    
    return n+sum(n-1);
}*/

/*The below algorithm is a parameterized way. It is said so because it carried a parameter along with it and lastly it printed it when the base case is reached. 
void printSum(int n, int sum){
    if(n<0){
        cout<<sum;
        return ;
    }

    printSum(n-1, sum+n);

}*/

int main(){
    int s, end, start;
    cin>>start>>end;
    cout<<"The sum is: ";
    // printSum(end, start);
    return 0;
}