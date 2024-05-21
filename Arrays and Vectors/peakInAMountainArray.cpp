#include <bits/stdc++.h>
using namespace std;

int findPeak(int arr[], int n){
    int s=0, e=n-1, m=(s+e)/2;
    while(s<e){
        if(arr[m]<arr[m+1]){
            s=m+1;
        }
        else{
            e=m;
        }
        m=(s+e)/2;
    }
    return s;
}

int main(){
    int arr[10]={2,3,4,5,7,16,100,-3,-21,-33};
    int ans=findPeak(arr, 10);
    cout<<"The peak in the given mountain array lies in index: "<<ans;
    return 0;
}