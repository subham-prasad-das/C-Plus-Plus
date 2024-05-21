/*A Valid string is a string which only contain alphanumerics as its element*/

#include <bits/stdc++.h>
using namespace std;

int getlength(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}

bool checkPVal(char name[], int n){
    for(int i=0; i<n; i++){
        if((name[i]>='A' && name[i]<='Z') || (name[i]>='a' && name[i]<='z') || (name[i]>='0' && name[i]<='9'))
            return 1;
    }
    return 0;

}

int main(){
    char name[10];
    cin>>name;

    int n=getlength(name); //size of the char array
    if(checkPVal(name, n))
        cout<<"The name you entered is Valid string";
    else
        cout<<"The name you entered is not Valid string";
    
    return 0;
}