/*
    -> Run-time polymorphism allows postponing the decision ofselecting the suitable member functions until run-time. In C++, this is achieved through "Virtual Function".
    -> The virtual functions allow programmers to declare functions in a base class, which can be defined in each derived class.
    -> A pointer to an object of a base class can also point to the objects of its derived classes. In this case, a member function to be invoked depends on the class's object to which the pointer is pointing. When a call to any object is made using the same interface, the function relevant to that object will be selected at run-time.
    -> The keyword "virtual" provides a mechanism for defining the virtual functions. When declaring the base class member functions, the keyword virtual is used with those functions. which are to be bound dynamically. The syntax of defining a virtual function is-----
                        -------virtual returntype functionname (argumentlist)------
                        
*/