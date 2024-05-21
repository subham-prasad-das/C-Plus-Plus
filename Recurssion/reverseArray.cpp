#include <bits/stdc++.h>
using namespace std;


void printArr(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

/* Here we are reversing the string using double pointer.

void reverse(int arr[],int s, int e, int n){
    if(s>=e) return ;

    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;
    reverse(arr, s+1, e-1, n);

}

int main(){
    int arr[5] = {2,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr, 0, n-1, n);
    printArr(arr, n);
    return 0;
}*/

// Here we will not be using double pointers, rather we will use single pointer.
void reverse(int arr[], int s, int n){
    // int s = 0;
    if(s>=n/2) return ;

    int temp = arr[s];
    arr[s] = arr[n-s-1];
    arr[n-s-1] = temp;
    s++;
    reverse(arr, s, n);

}

int main(){
    int arr[5] = {2,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr, 0, n);
    printArr(arr, n);
    return 0;
}

