#include <bits/stdc++.h>
using namespace std;

void printWave(int arr[][3], int r, int c){
    vector<int>v;
    for(int i=0; i<c; i++){
        if(i&1){
            for(int j=0; j<r; j++){ //for printing the coloumn top to bottom in case of odd coloumn number
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int j=r-1; j>=0; j--){ //for printing the coloumn bottom to top in case of even coloumn number
                cout<<arr[j][i]<<" ";
            }
        }
    }
}

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    printWave(arr, 3, 3);
    return 0;
}