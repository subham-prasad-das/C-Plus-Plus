/*
The purpose of namespace is to reduce the number of name clashes that occur with multiple, independently developed libraries.
A namespsce is a "declarative region" that can be used to package name, improve program readability, and reduce name clashes in the global namespaces.
Namespaces facialiate building large systems by partitioning names into logical groupigs.
The allow to group a set of global classes, objects and/or functions under a name.
Saying it in other way, it split the global scope in sub-scopes known as namespaces.
syntax: 
    namespace name_of_the_namespace{
        namespace body;
    }
sample program:
    #include<iostream>
    using namespace std;

    namespace one{
        int a = 5;
    }

    namespace two{
        int b = 10;
    }

    int main(){
        cout << one :: a;
        cout << two :: b;
        return 0;
    }

A namespace defined globally can be used by using the keyword "using".
for ex: 'using namespace std;' --> here 'std' is a namespace containg functions like cout, cin, endl etc..
                                --> 'using' tell the compiler that in the program we are going to use the members of the namespace 'std'.
The 'using' directive followed by 'namespace' serves to associate the present nesting level with a certain 'namespace' so that the objects and functions of that 'namespace' can be accessed directly as if they were defined in the global scope. 
*/