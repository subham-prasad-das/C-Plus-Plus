#include <bits/stdc++.h>
using namespace std;

int checkPal(char name[], int n){
    int s=0, e=n-1;
    while(s<e){
        if(name[s]!=name[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int main(){
    char name[10];
    cin>>name;

    //finding out the no of characters in the character array
    int count=0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }

    if(checkPal(name, count))
        cout<<"The name you have entered is palindrome";
    else
        cout<<"The name you have entered is not a palindrome";

    return 0;
}