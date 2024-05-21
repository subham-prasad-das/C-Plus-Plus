#include <bits/stdc++.h>
using namespace std;

int main(){
    char name[20];
    cin>>name;

    cout<<"The name you have entered is "<<name<<endl;;

    //counting the length of the char array
    int count=0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    cout<<"The length of the elements in the array is: "<<count<<endl;
    //reversing the array
    int s=0, e=count-1;
    while(s<e){
        swap(name[s], name[e]);
        s++;
        e--;
    }
    cout<<"The reversed order of the character array you have entered is: "<<name<<endl;;
    return 0;
}