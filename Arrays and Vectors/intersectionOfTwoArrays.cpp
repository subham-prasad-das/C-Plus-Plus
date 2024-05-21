#include <bits/stdc++.h>
using namespace std;

void intersectArrays(int arr1[], int n, int arr2[], int m){
    int count=-1;
    for(int i=0; i<n; i++){
        int element=arr1[i];
        for(int j=0; j<m; j++){
            if(element==arr2[j]){
                cout<<element<<"\t";
                arr2[j]=count;
                break;
            }
            count--;
        }
    }
}
/*The code is good but can exceed the time limit.*/

/*This code need some verification...
void intersectArrays(int arr1[], int n, int arr2[], int m)
{
    int i = 0, j = 0;
    
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << "\t";
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}*/

int main()
{
    int arr1[5] = {1, 32, 54, 65, 79};
    int arr2[5] = {11, 62, 54, 75, 79};
    intersectArrays(arr1, 5, arr2, 5);
    return 0;
}