#include <bits/stdc++.h>
using namespace std;

int binSearch(int arr[], int start, int end, int k){
    int s=start, e=end; /* we need to change the values of s and e throughout our program and 
                           as start and end are not created in the scope of this function 
                           there is a need for assigning the values of start and end to s and e. */
    int mid=(start+end)/2;
    while(s<=e){
        if(arr[mid]==k)
            return mid;
        else if(arr[mid]>k)
            s=mid+1;
        else
            e=mid-1;
        mid=(start+end)/2;
    }
    return -1; // will be executed if the desired element is not found
}

int getPivot(int arr[], int n){
    int s=0, e=n-1, mid=(s+e)/2;
    while(s<e){
        if(arr[mid]>=arr[0])
            s=mid+1;
        else
            e=mid;
        mid=(s+e)/2; // get the mid updated subsequently
    }
    return s;
}

int main(){
    int r, key;
    int arr[10]={7,8,9,10,11,15,20,1,2,5};
    cout<<"Enter the element you want to search for: ";
    cin>>key;// key taken

    //for finding out the size of the given array
    int s=sizeof(arr)/sizeof(arr[0]); 

    //here is the pivot
    int p=getPivot(arr, 10);
    cout<<"The pivot is "<<p;

    //conditionals for binary search
    if(key>=arr[p] && key<=arr[s-1])
        r=binSearch(arr, p, s-1, key);
    else
        r=binSearch(arr, 0, p-1, key);

    cout<<endl<<r;
    /*
    //conditionals to check found or not
    if(r>=0)
        cout<<endl<<"The element is found in index: "<<r;
    else    
        cout<<endl<<"The element is not found";
    */
    return 0;
}

//need to be checked again.....................