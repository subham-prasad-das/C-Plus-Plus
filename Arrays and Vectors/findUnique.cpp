#include <bits/stdc++.h>
using namespace std;

int unique(int arr[], int n){
    int temp=0;//initialized with zero as the idintity of xor is 0

    for (int i = 0; i < n; i++){
            temp=temp^arr[i];/*when we xor any element with temp, temp stores that element because anything xored with 0 is the number itself
                                and when a number is xored with itself it will become 0. this process will continue till xor stores a 
                                single value. so basically, every number with multiple occurence will cancel themselves, giving the unique one*/
    }

    return temp;
}

int main(){
    int arr[9]={4,4,6,7,7,7,8,8,9};
    int u=unique(arr, 9);
    cout<<u;
    return 0;
}