#include <bits/stdc++.h>
using namespace std;

bool chkPal(string s, int i, int j){
    if(i>j) // if the whole string is traverssed and everything found ok then return true
        return true;
    
    if(s[i] != s[j]) // if once found not equal then return false
        return false;

    i++; 
    j--;
    bool ans = chkPal(s, i, j); // recurssive case
    return ans;
}

int main(){
    string s;
    cin>>s;
    if(chkPal(s, 0, s.length()-1))
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
    return 0;
}