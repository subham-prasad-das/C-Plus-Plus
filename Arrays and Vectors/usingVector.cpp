#include <bits/stdc++.h>
using namespace std;

void showData(vector<int>&v){
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
}

void takeAndShowData(vector<int>&v){
    int element;
    for(int i=0; i<10; i++){
        cin>>element;
        v.push_back(element);
    }

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

bool searchInTheArray(vector<int>&v, int key){
    for(int i=0; i<v.size(); i++){
        if(v[i]==key){
            return true;    
        }
    }
    return false;
}

int main(){
    int n, key;
    vector<int> v;
    takeAndShowData(v);
    cout<<"Enter the number you wanna search for: "<<endl;
    cin>>key;
    if(searchInTheArray(v, key))
        cout<<endl<<"The element is present in the vector";
    else
        cout<<endl<<"The element is not found";
    // showData(v);
    return 0;
}