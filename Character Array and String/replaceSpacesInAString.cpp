#include <bits/stdc++.h>
using namespace std;

void removeSpace(string s){
    string temp=" ";
    for(int i=0; i<s.length(); i++){
        if(s[i]==' '){
            temp.push_back('_');
        }
        else{
            temp.push_back(s[i]);
        }
    }

    cout<<temp;
}

int main(){
    string s="My Name Is Subham";
    removeSpace(s);
    return 0;
}