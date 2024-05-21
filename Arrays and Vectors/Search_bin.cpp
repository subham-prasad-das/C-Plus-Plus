#include <bits/stdc++.h>
using namespace std;

int binSearch(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while (start<=end)
    {
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            start=mid+1;
        else
            end=mid-1;
            
        mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int arr[9]={4,22,22,22,22,46,88,98,100};
    int key;
    cin>>key;
    int mid=binSearch(arr, 9, key);
    cout<<"The key is in index: "<<mid;
    return 0;
}