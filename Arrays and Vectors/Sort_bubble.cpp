#include <bits/stdc++.h>
using namespace std;

void bubSort(int arr[], int n){
    int r, c;
    for(r=0; r<n-1; r++){
        for(c=0; c<n-r; c++){
            if(arr[c]>arr[c+1])//check the values of adjacent elements. The one which is smaller, moves to left, sorting it in ascending order
                swap(arr[c], arr[c+1]);
        }
    }
}

void print(int arr[], int size){//only to print the sorted array.
    for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={24,535,654,3,64};
    bubSort(arr, 5);
    print(arr, 5);
    return 0;
}