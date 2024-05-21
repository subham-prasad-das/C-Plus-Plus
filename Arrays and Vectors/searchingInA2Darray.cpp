#include <bits/stdc++.h>
using namespace std;

int search(int a[][3], int r, int c, int key){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(a[i][j]==key)
                return 1;
        }
    }
}

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int key;
    cout<<"Enter the element you want to search: ";
    cin>>key;
    if(search(arr, 3, 3, key))
        cout<<"The element is present in the given array";
    else
        cout<<"The element is absent in the given array";
    return 0;
}