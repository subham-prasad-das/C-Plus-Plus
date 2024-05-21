/*
-> Constructor is basically  a member function of the class.
-> The name of the constructor is same as the class name.
-> It has no return type so uses no return keyword.
-> It must be an instance member function, that is, it can never be static.

for example: 
    class Complex{
        private: 
            int a, b;

        public:
            Complex(){
                Here Complex is a constructor of the class Comolex. As we know, Constructor Complex doesnt have any return type and its name is same as the name of the class.
            }
    };

-> How is a comstructor called ?
    -> It is implicitely invoked when an object is created.

    for example: 
        class Complex{
            private: 
                int a, b;

            public:
                Complex(){
                    cout << "hello";
                }
        };

        int main(){
            Complex c1;
            return 0;
        }
         
        **The above code will run without any error and will be initialized with the making of the oobject c1 of the class and no doubt will print "hello".
        **When we will make <n> number of objects, "hello" will be printed <n> number of times. Bcoz FOR EVERY OBJECT OF THE CLASS, CONSTRUCTOR IS INDEPENDENTLY MADE FOR THEM.
 
    -> Constructor is used to solve the problem of initialization.
        -> Normally during programming in classes, We used to initialize member functions explicitely after making the objects of the class.
        -> Thsi problem of initialization can be reduced by storing the declarations of the member functions inside the block of the constructor.
        -> As with the making of the object the member functions will also be initialized automatically.
*/