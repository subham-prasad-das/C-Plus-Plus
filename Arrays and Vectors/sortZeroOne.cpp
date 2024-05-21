#include <bits/stdc++.h>
using namespace std;

void printarr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void sort(int arr[], int n){
    int l=0, r=n-1;
    while (l<r)
    {
        if(arr[l]==0)
            l++;
        else if(arr[r]==1)
            r--;
        else if((arr[l]==1)&&(arr[r]==0)){
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
    }
    printarr(arr, n);
}

int main(){
    int arr[7] = {1, 0, 0, 1, 1, 0, 1};
    sort(arr, 7);
    return 0;
}