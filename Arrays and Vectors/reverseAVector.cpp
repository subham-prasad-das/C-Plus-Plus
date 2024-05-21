#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int>&v){
    cout<<"Going into the reverse function"<<endl;
    int s=0, e=v.size()-1;
    while(s<e){
        int temp=v[s];
        v[s]=v[e];
        v[e]=temp;
        s++; e--;
    }
}

void display(vector<int>&v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int>v;
    int element, size;
    cout<<"Enter The size of the vector: ";
    cin>>size;
    for(int i=0; i<size; i++){
        cin>>element;
        v.push_back(element);
    }
    reverse(v);
    cout<<"Displalying the reversed elements"<<endl;
    display(v);
    return 0;
}