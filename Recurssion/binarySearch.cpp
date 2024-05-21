#include <bits/stdc++.h>
using namespace std;

bool binSea(int arr[], int s, int e, int k){
    if(s==e) //the whole array is traversed and the required element is still not found
        return false;

    int mid = (s+e)/2; // the mid, primary key of the binary search
    int ans; 
    if(arr[mid]==k)
        return true; // if found return true 
    else if(arr[mid]>k)
        ans=binSea(arr, s, mid-1, k); // for traversing the left part
    else
        ans=binSea(arr, mid+1, e, k); // for traversing the right part

    return ans;
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key;
    cin>>key; // the target taken as input
    if(binSea(arr, 0, 10, 5)) // result of the returned element of the afore-defined function will work as the true value 
        cout<<"Found";
    else
        cout<<"Not Found";    
    return 0;
}