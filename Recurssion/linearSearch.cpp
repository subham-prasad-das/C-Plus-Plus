#include <bits/stdc++.h>
using namespace std;

bool linSea(int arr[], int n, int k){
    if(n==0)
        return false;
    if(arr[0]==k)
        return true;

    bool ans = linSea(arr+1, n-1, k);
    return ans;
}

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int key;
    cin>>key;
    if(linSea(arr, 7, key))
        cout<<"Found";
    else
        cout<<"Not Found";
    return 0;
}