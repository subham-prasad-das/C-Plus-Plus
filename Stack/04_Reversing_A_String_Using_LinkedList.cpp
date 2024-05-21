#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<char> s;
    string str;

    cout << "Enter the string you want to reverse: ";
    cin >> str;

    for(int i = 0; i < str.length(); i++){
        s.push(str[i]);
    }

    for(int i = 0; i < str.length(); i++){
        cout << s.top();
        s.pop();
    }

    return 0;
}