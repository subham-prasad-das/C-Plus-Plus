//Below is the example of a tail recurssion

#include <bits/stdc++.h>
using namespace std;

void print(int n){
    if(n>0){
        cout<<n<<" ";
        print(n-1);
    }
}

int main(){
    int i;
    cout<<"Enter the limit: ";
    cin>>i;
    print(i);
    return 0;
}

/*
//Below is the example of a head recurssion
#include <bits/stdc++.h>
using namespace std;

void print(int n){
    if(n>0){
        print(n-1);
        cout<<n<<" ";
    }
}

int main(){
    int i;
    cout<<"Enter the limit: ";
    cin>>i;
    print(i);
    return 0;
}
*/
