#include <bits/stdc++.h>
using namespace std;

// here we are not considering the first and second value of the fibonacci series, 
// instead we are taking the next elements as its first and second value.

void printFib(int n, int a=0, int b=1){ // default argument of a (0) and b (1).
    if(n==0)
        return ;

    int temp=a+b;
    cout<<temp<<" ";
    n--;
    printFib(n, b, temp); // here as usual n will be passed to n, but in order to print fibonacci series,
                          // we are passing b to a and temp to b.
}
int main(){
    int i=10; //limit can alsi be taken as input
    printFib(i);
    return 0;
}