#include <bits/stdc++.h>
using namespace std;

int checkPal(char name[], int n){
    //for converting every upper case into lower case
    for(int i=0; i<n; i++){
        if((int)name[i]>=65 && (int)name[i]<=90)
            name[i]=(int)name[i]+32;
    }

    /*OR the below piece of code can also been effective
        for(int i=0; i<n; i++){
            if(name[i]>='A' && name[i]<='Z')
                name[i]=name[i]-'A'+'a';
        }
        lets suppose 'A' come into the scene which is caught by the IF BLOCK.
        when we analize the IF BLOCK in terms of ASCII code, 
        we have the code of 'A' as 65,
        here the IF BLOCK is subtracting 'A' i.e. 65 and adding 'a' i.e. 90 making the incoming 'A' to 'a'..
    */

    //to check palindrome
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

//the above code is more optimized as it is making every element of the char array to the same case...