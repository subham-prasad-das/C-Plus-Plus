#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s]; //lets suppose the 1st element is the pivot

    int count = 0; //count variable is taken to count the no. of elements in the array which are smaller than the pivot element
    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivot)
            count++; //count is incremented whenever a smaller no. is detected
    }

    int pivotIndex = s + count; // pivotIndex is the index in which the pivot index is to be placed.
    swap(arr[pivotIndex], arr[s]); // pivot element is placed in the right place

    int i = s, j = e;
    while((i < pivotIndex) && (j > pivotIndex)){
        while (arr[i] <= pivot){ //jete parjyanta arr[i] ta chota achi pivot thu, i badhei chala
            i++;
        }

        while (arr[j] > pivot){ //jete parjyanta arr[j] ta bada achi pivot thu, j kamei chala
            j--;
        }

        if((i < pivotIndex) && (j > pivotIndex)) // if the control comes here then we can consider that it has not gone inside the above two loops
            swap(arr[i++], arr[j--]);
    }
    
    for(int i=s; i<e; i++){ // printing the sorted array 
        cout<<arr[i]<<" ";
    }  cout << endl;

    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    if(s >= e) // base case
        return ;

    int p = partition(arr, s, e); //partition done 

    quickSort(arr, s, p-1); // recurssive case for the left part of the pivot element

    quickSort(arr, p+1, e); // recurssive case for the right part of the pivot element
}

int main(){
    int arr[5] = {3, 5, 8, 2, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++){ // printing the sorted array 
        cout<<arr[i]<<" ";
    }    

    return 0;
}