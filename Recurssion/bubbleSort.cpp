#include <bits/stdc++.h>
using namespace std;

void bubbSort(int arr[], int n){
    if(n == 1 || n == 0) // base case for an already sorted array
        return ;

    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);
    }

    bubbSort(arr, n-1); //the size is reduced to terminate using the base case
}

int main(){
    int arr[8]={34,67,84,23,46,7,865,9};
    bubbSort(arr, 8);
    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}