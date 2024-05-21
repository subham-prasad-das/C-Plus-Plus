/*#include <bits/stdc++.h>
using namespace std;

void reverse(string s){
    for(int i=s.length(); i>=0; i--){
        cout<<s[i];
    }
}

int main(){
    string s = "subham";
    reverse(s);
    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

void print(string s){
    for(int i=0; i<s.length(); i++){
        cout<<s[i];
    }
}

void reverse(string &s, int i, int j){
    if(i>j)
        return ;

    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    i++;
    j--;
    reverse(s, i, j);
}

int main(){
    string s = "subham";
    reverse(s, 0, s.length()-1);
    print(s);
    return 0;
}

