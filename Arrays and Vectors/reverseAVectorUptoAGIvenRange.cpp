#include <bits/stdc++.h>
using namespace std;

void display(vector<int>&v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<'\t';
    }
}

void reverse(vector<int>&v, int m){
    cout<<"Entered the reverse function"<<endl;
    int start=m, end=(v.size()-1), temp;
    while(start<end){
        // temp=v[start];
        // v[start]=v[end];
        // v[end]=temp;
        swap(v[start], v[end]);
        start++;
        end--;
    }
}

int main(){
    vector<int>vec;
    int element, size, m;
    cout<<"Enter the size you want to have for your vector: ";
    cin>>size;
    cout<<endl<<"Enter the elements of the vector: ";
    for(int i=0; i<size; i++){
        cin>>element;
        vec.push_back(element);
    }
    cout<<"Enter the index after which you want the vector to be reversed: ";
    cin>>m;
    reverse(vec, m);
    display(vec);
    return 0;
}