#include <bits/stdc++.h>
using namespace std;

void selSort(int arr[], int size){
    for (int i = 0; i < size-1; i++)/*i is running till size-1 bcz here size is 5 so size-1 is 4 and
                                    size-1 gives to run till last 2nd index becoz 
                                    by then the last index will have updated automatically.*/
    {
        int minIndex=i;//let the minimum value is stored in 1st index
        for (int j = i+1; j < size; j++)/*j is initialized from i+1 to size for 
                                        we wanna compare the whole array with the 1st element with the remaining ones.*/
        {
            if (arr[j]<arr[minIndex])//if arr[j] is lesser than arr[minindex]
            {
                minIndex=j;//then make the element be stored in minIndex
            }
        }
        swap(arr[minIndex], arr[i]);//at last we will be storing the value at minindex in arr[i].
    }
}

void print(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[5]={22,35,66,75,4};
    selSort(arr, 5);
    print(arr, 5);
    return 0;
}