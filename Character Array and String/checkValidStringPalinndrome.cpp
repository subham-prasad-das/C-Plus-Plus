#include <bits/stdc++.h>
using namespace std;

bool validChar(char c){
    if((c>='A' && c<='Z') || (c>='a' && c<='z') || (c>='0' && c<='9')){
        return 1;
    }
    return 0;
}

char convertCase(char c){
    if(c>='a' && c<='z')
        return 1;
    else
        return (c-'A'+'a');
}

bool checkPal(string a){
    for(int s=0, e=a.length(); s<e; s++, e--){
        if(a[s]!=a[e])
            return 0;
    }
    return 1;
}

bool CheckPalindrome(string s){
    string temp = " ";
    for(int i=0; i<s.length(); i++){
        if(validChar(s[i]))
            temp.push_back(s[i]);
    }

    for(int i=0; i<s.length(); i++){
        temp[i]=convertCase(temp[i]);
    }

    return checkPal(temp);
}

int main(){
    string s;
    cin>>s;

    if(CheckPalindrome(s))
        cout<<"The string you have entered is palindromic after discarding the non-alphanumeric characters(if any)";
    else
        cout<<"The string you have entered is palindromic after discarding the non-alphanumeric characters(if any)";
        
    return 0;
}