#include <bits/stdc++.h>
using namespace std;

void max(vector<int>v){
    int index;
    int max=v[0];
    for(int i=0; i<v.size(); i++){
        if(v[i]>max)
        max=v[i];
        index=i;
    }
    cout<<"The Row With Max Index Is: "<<index;
}

void sum(int arr[][3], int r, int c){
    vector<int>v;
    int i=0;
    while(i<c){
        int sum=0, j=0;
        while(j<r){
            sum+=arr[j][i];
            j++;
        }
        v.push_back(sum);
        i++;
    }
    max(v);
}

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    sum(arr, 3, 3);
    return 0;
}

/*And thats how we can code for the maximum sum of coloumns in the 2D array*/