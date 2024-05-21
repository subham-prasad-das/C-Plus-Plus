/*
    ---> Features of Encapsulation:

    -> We can not access any function from the class directly. We need an object to access that function that is using the member variables of that class. 
    -> The function which we are making inside the class must use only member variables, only then it is called encapsulation.
    -> If we don’t make a function inside the class which is using the member variable of the class then we don’t call it encapsulation.
    -> Encapsulation improves readability, maintainability, and security by grouping data and methods together.
    ->  It helps to control the modification of our data members.


    ---> Role of Access Specifiers in Encapsulation:

    Access specifiers facilitate Data Hiding in C++ programs by restricting access to the class member functions and data members.
    There are three types of access specifiers in C++:

    -> Private: Private access specifier means that the member function or data member can only be accessed by other member functions of the same class.
    -> Protected: A protected access specifier means that the member function or data member can be accessed by other member functions of the same class or by derived classes.
    -> Public: Public access specifier means that the member function or data member can be accessed by any code. 
    
    * By default, all data members and member functions of a class are made private by the compiler.
*/