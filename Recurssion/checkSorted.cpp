#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){
    if(n==0 || n==1) // base case is taken that if the size of the array is 0 or 1,
                        // automatically the remaining part of the array is sorted
        return true;
    if(arr[0]>arr[1]) // as the array is to be sorted in ascending order so the 1st element must be smaller than the 2nd one
        return false;
    else{
        bool ans = isSorted(arr+1, n-1); // recurssive case
                                        //  here we are just incrementing the index of the array and subsequently 
                                        // decrementing the size of the array to reach till the base case for returning true.
        return ans; // finally the ans is returned to the main where the array is stored
    }
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    if(isSorted(arr, 10))
        cout<<"sorted";
    else
        cout<<"not sorted";
    return 0;
}