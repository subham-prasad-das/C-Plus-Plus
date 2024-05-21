#include <bits/stdc++.h>
using namespace std;

void display(int a[], int n){
    for(int i=0; i<n; i++){
        cout <<  a[i] << " ";
     }
}

void rotate(int a[], int n, int k){
    int temp[n];
    for(int i=0; i<n; i++){
        temp[(i+k)%n]=a[i];
    }

    //temp[n]=a[n];
    display(temp, n);
}

int main(){
    int arr[]={3,4,5,6,7,8,9,1,2,5,6,8,9,0,-4};
    int k, n;
    cout<<"Enter the no of digit you want to rotate: ";
    cin>>k;
    n=sizeof(arr)/sizeof(arr[0]);
    rotate(arr, n, k);
    return 0;
}