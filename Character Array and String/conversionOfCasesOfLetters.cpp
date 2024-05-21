#include <bits/stdc++.h>
using namespace std;

int main(){
    char name[10];
    cin>>name;

    //counting the number of characters
    int count=0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }

    //converting the upper case to lower case and ignoring the lower cases
    for(int i=0; i<count; i++){
        if((int)name[i]>=65 && (int)name[i]<=90)
            name[i]=(int)name[i]+32;
    }

    cout<<name;
    return 0;
}