#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int  size, int key){
    int mini=INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]==key)
            return i;
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int key;
    cout<<"enter the digit you wanna search for: "<<endl;
    cin>>key;
    int c=linearSearch(arr, 10, key);
    cout<<"The searched digit is in index: "<<c;
    return 0;
}