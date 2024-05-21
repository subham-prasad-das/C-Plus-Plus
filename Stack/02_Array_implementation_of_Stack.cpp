#include<bits/stdc++.h>
using namespace std;

class Stack{ // class to manually implement the stack methods
    public:
        int *arr; // made an array dynamically
        int top; //  to track the element at the top of the stack
        int size; // to use to have the desired size of the dynamic array

        Stack(int size){ // constructor to make the array of the size of the given input
            this-> size = size;
            arr = new int[size]; // given the input size to the dynamic array
            top = -1; // initialized the top as -1
        }

        void push(int element){ // method to add element to the stack
            if(size - top > 1){ // checking if the stack is not empty
                top++; // first of all increment the top as we will be adding element at the next empty space of the array
                arr[top] = element; // added the element to the index in which the top[ is sitting as the index
            }
            else{
                cout << "The stack is going 'Stack Overflow'" << endl; // if the stack is empty 
            }
        }

        void pop(){ // method to take out the top element of the stack
            if(top != -1){ // if the stack is not empty
                top--; // decrement the top
            }
            else{
               cout << "The stack is going 'Stack Underflow'" << endl; // if the stack is empty
            }
        }

        int peek(){ // method to find out the top of the stack
            if(top != -1){ // if the stack is not empty
                return arr[top]; // return the element at the top of the stack
            }
            else{ // if the stack is empty
                return -1; // return -1
            }
        }

        bool isEmpty(){ // method to check if the stack is empty or not
            if(top == -1){ // if top is at -1, the stack is empty
                return true;
            }
            else{ // else the stack has atleast one element
                return false;
            }
        }

};



int main(){
    // called the Stack constructor and initialized the dynamic array with the given size
    Stack st1(5);

    // demonstrating the push operation
    st1.push(71);
    st1.push(72);
    st1.push(73);
    st1.push(74);
    st1.push(75);

    cout << "After pushing elements into the stack---" << endl;

    // demonstrating the peek operation after pushing elements into it
    cout << "Now, the peak of the stack is: " << st1.peek() << endl;

    // demonstrating operation to check the stack whether it is empty or not after pushing elements into it
    if(st1.isEmpty()) cout << "The stack is Empty" << endl;
    else cout << "The stack is not empty" << endl;

    // demonstrating the pop operation
    st1.pop();
    st1.pop();
    st1.pop();
    st1.pop();
    st1.pop();

    cout << "After poping elements outta the stack---" << endl;

    // demonstrating operation to check the stack whether it is empty or not after poping elements outta it
    if(st1.isEmpty()) cout << "The stack is Empty" << endl;
    else cout << "The stack is not empty" << endl;

    // demonstration the peek operation after eliminating out all the elements from the stack
    cout << "Now, the peak of the stack is: " << st1.peek() << endl;

    return 0;
}
