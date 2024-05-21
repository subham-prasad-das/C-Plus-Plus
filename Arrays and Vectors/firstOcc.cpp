#include <bits/stdc++.h>
using namespace std;
int firstOcc(int arr[],int n, int k){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>k)
            e=mid-1;
        else
            s=mid+1;
        mid=(s+e)/2;
    }
    return ans;
}

int main(){
    int a, key;
    cin>>key;
    int arr[7]={1,2,2,2,2,2,7};
    a=firstOcc(arr,7, key);
    cout<<a;
    return 0;
}