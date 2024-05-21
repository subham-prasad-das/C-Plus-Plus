#include <bits/stdc++.h>
using namespace std;

bool search(int a[][3], int r, int c, int k){
    int s=0; //starting index of the array
    int e=r*c-1; //ending index of the array
    int mid=s+(e-s)/2; //mid point of the array when it is mapped as a 1D array
    while(s<e){
        int m2 = a[mid/c][mid%c]; //mid point of the array when it is mapped as a 2D array
        if(m2 == k)
            return 1;
        //as the mid point of the array is totally dependent on the mid we found out for the 1D array, 
        //so in further parts of the function, the mid of the 1D array will be updated.
        if(m2<k)
            s=mid+1; 
        else
            e=mid-1;

        mid=s+(e-s)/2;
    }
    return 0;
}

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int key;
    cout<<"Enter the element you want to search for: ";
    cin>>key;
    if(search(arr, 3, 3, key))
        cout<<"found";
    else
        cout<<"not found";
    return 0;
}