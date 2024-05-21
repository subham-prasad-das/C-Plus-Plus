#include <bits/stdc++.h>
using namespace std;

int findPivot(int arr[], int n){
    int s=0, e=n-1, m=(s+e)/2;
    while(s<e){
        if(arr[m]>arr[0]){
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
    int arr[10]={7,8,9,10,11,15,20,1,2,5};
    int ans=findPivot(arr, 10);
    cout<<ans;
    return 0;
}