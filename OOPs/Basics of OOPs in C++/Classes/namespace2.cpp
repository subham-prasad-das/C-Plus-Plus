/*The function namespace is defined another time. But this time we wont be using any namespaces. Here we will be dealing only with scope resolution operator (::)*/

#include<iostream>

namespace mine{
    int a;
    void fun();
    class Show{
        public: 
            void prnt();
    };
}

void mine :: fun(){
    std :: cout << "The curser is inside the function of the namespace." << std :: endl;
}

void mine :: Show :: prnt(){
    std :: cout << "Now the curser is inside the function which is declared inside the class of the namespace mine";
}

int main(){
    mine :: a = 5;
    std :: cout << (mine :: a);
    mine :: Show obj;
    obj.prnt();
    return 0;
}