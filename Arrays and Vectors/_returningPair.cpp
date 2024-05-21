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

int lastOcc(int arr[],int n, int k){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>k)
            e=mid-1;
        else
            s=mid+1;
        mid=(s+e)/2;
    }
    return ans;
}

pair<int,int>firstLast(int arr[], int n, int k){
    pair<int,int>p;
    p.first=firstOcc(arr, n, k);
    p.second=lastOcc(arr, n, k);
    return p;
}
int main(){
    int a, key;
    cin>>key;
    int arr[7]={1,2,2,2,2,2,7};
    //a=std::firstLast(arr,7, key);
    cout<<a;
    return 0;
}

/*The basic need of this code is to return two values through making a pair. But this code is incomplete due to lack of knowledge in pair
But this code will be successfully completed someday*/