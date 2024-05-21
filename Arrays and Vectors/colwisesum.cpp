#include <bits/stdc++.h>
using namespace std;

void showVector(vector<int>v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
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
    showVector(v);
}

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    sum(arr, 3, 3);
    return 0;
}