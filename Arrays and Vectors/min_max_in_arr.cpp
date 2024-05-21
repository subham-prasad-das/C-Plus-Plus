#include <bits/stdc++.h>
using namespace std;

void getMin(int arr[], int size){
    int mini=INT_MAX;
    for (int i = 0; i < size; i++){
        if(arr[i]<mini)//if the element in the array is smaller than the value of mini then store the minimum value in mini
            mini=arr[i];
    }
    cout<<"The minimum element is "<<mini<<endl;    
}

void getMax(int arr[], int size){
    int maxi=INT_MIN;
    for (int i = 0; i < size; i++){
        if (arr[i]>maxi)//if the element in the array is smaller than the value of mini then store the minimum value in mini
            maxi=arr[i];
    }
    cout<<"The maximum element is "<<maxi<<endl;
}

int main(){
    int arr[5]={1, 44, 654, 77, -76};
    /*cout<<"printing the array inside the function: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }*/
    getMin(arr, 5);
    getMax(arr, 5);
    return 0;
}
