#include<bits/stdc++.h>
using namespace std;

class Boy{
    public:
        char* name;

        Boy(){
            name = new char[100];
        }
 
        void setName(char name[]){
            strcpy(this-> name, name);
        }

        void getNAme(){
            cout << "The name of the boy is: " << name << endl;
        }
};

int main(){
    Boy b1;
    char name[7] = "Subham";
    b1.setName(name);
    b1.getNAme();
    Boy b2(b1);
    b2.getNAme();

    b1.name[0] = 'B';
    b1.getNAme(); 
    b2.getNAme();
    return 0;
}
