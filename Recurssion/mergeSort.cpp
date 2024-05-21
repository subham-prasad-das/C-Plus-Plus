#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int e){
    int mid = s+(e-s)/2;
    int len1 = (mid-s)+1; //length of the 1st array
    int len2 = e-mid; //length of the 2nd array

    int *first = new int[len1]; // dynamically created 1st array
    int *second = new int[len2]; // dynamically created 2nd array

    // copying the elements of the array into the dynamically created 'first' array
    int index=s; // for the 1st array, index should start from s - starting index of the given array for accessing the 1st part of the array
    for(int i=0; i<len1; i++){
        first[i] = arr[index++];
    }

    // copying the elements of the array into the dynamically created 'second' array
    index=mid+1; // for the 1st array, index should start from index next to mid of the given array, for accessing the 2nd part
    for(int i=0; i<len2; i++){
        second[i] = arr[index++];
    }

    // mearging the two arrays 
    int index1=0;
    int index2=0;
    index=s;
    while(index<len1 && index<len2){ // mearging till one of the array's element get over
        if(first[index1] < second[index2])
            arr[index++] = first[index1++];
        else
            arr[index++] = second[index2++];
    }

    while(index1 < len1){ // will mearge if elements of the 1st array is still remainilng
        arr[index++] = first[index1++];
    }

    while(index2 < len2){ // will mearge if elements of the 2nd array is still remainilng
        arr[index++] = second[index2++];
    }

    // deleting the dynamically created array 
    delete []first;
    delete []second;
}

void mergeSort(int arr[], int s, int e){
    if(s>=e) //base case will happen if the starting index goes larger or equal to the ending index
        return ;
    // separating the elements
    int mid = s+(e-s)/2; // mid of the array, to separate the elements of the array everytime it is recurssively called
    mergeSort(arr, s, mid); // to pass the 1st part i.e. starting index to the mid index
    mergeSort(arr, mid+1, e); // to pass the 1st part i.e.  next element of mid index to the ending of the array


    // merging the array after comparing elelments and thereafter sorting them
    merge(arr, s, e); 
}

int main(){
    int arr[10] = {23,456,75568,979,8,87,64,34324,5,67};
    int n = sizeof(arr);
    mergeSort(arr, 0, n-1);

    // printing the array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}