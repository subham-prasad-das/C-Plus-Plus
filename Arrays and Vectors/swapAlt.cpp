#include <bits/stdc++.h>
using namespace std;

void swapAlt(int arr[], int n){
    for (int i = 0; i < n; i+=2)
    {
        if(i+1<n)
            swap(arr[i], arr[i+1]);
    }
    
}
void printArr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int arr[5]={12,345,656,4666,757};
    swapAlt(arr, 5);
    printArr(arr, 5);
    return 0;
}