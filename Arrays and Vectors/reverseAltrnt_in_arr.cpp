#include <iostream>
using namespace std;

void reverse(int arr[], int size){
	for (int i = 0; i < size; i+=2)
    {
        if (size>i+1)
            swap(arr[i], arr[i+1]);
    }
    
}

void print(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[10]={1,2,3,4,5,6,275,87,80,9};
    reverse(arr, 10);
    print(arr, 10);
    return 0;
}