/*#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int n){
    if(n==0)
        return 0;
    if(n==1)
        return arr[0];

    int sumArr = arr[0] + sum(arr+1, n-1);
    return sumArr;
}

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    // int size=sizeof(arr);
    int s=sum(arr, 7);
    cout<<"the sum of the array element is: "<<s; 
    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int n){
    if(n==0)
        return 0;

    int sumArr = arr[0] + sum(arr+1, n-1);
    return sumArr;
}

int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    // int size=sizeof(arr);
    int s=sum(arr, 8);
    cout<<"the sum of the array element is: "<<s; 
    return 0;
}