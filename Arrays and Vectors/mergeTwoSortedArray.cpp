#include <bits/stdc++.h>
using namespace std;

void display(int a3[], int n){

    int i=0;
    while(i<n){
        cout << a3[i++] << " ";
    }

}

void merge2sortedarray(int a1[], int n, int a2[], int m, int a3[]){

    int i=0, j=0, k=0;
    while(i<n && j<m){  // this loop will ensure that equal no of elements from both the sorted arrays are inserted into the third array.
        // basically the comparision between elements of both the array happened and the smallest element goes into the 3rd array
        // making the 3rd array sorted in increasing order.
        if(a1[i]<a2[j]){
            a3[k++]=a1[i++];
        }
        else{
            a3[k++]=a2[j++];
        }
    }

    while(i<n){ // this loop will ensure that remaining element of the 1st array is inserted into the 3rd array 
        a3[k++]=a1[i++];
    }

    while(j<m){ // this loop will ensure that remaining element of the 2nd array is inserted into the 3rd array 
        a3[k++]=a2[j++];
    }

}

int main(){
    int a1[5] = {1,3,5,8,9};
    int a2[4] = {2,4,6,8};
    int a3[9];

    merge2sortedarray(a1, 5, a2, 4, a3);
    display(a3, 9);
    return 0;
}