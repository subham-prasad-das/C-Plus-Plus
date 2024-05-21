<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

class Node{ // the classic way to make a linked list for the implementation of Stack
    public:
        int data;
        Node* next;

        Node(int data){

            this-> data = data;
            this-> next = NULL;

        }
};

class Stack{
    public:
        Node* top = NULL;

        void push(int d){ // no need to check for the "Stack Overflow", because heap memory is so large that it barely gets full.
                        // Also there is no size specifications in the case of linked list unlike Arrays..
                        // here we need to push elements in the head of the linkedlist
            Node* temp = new Node(d);
            temp-> next = top;
            top = temp;

        }

        bool isEmpty(){ // operation to check if the linked list is containing NULL or has atleast one element

            if(top == NULL) return true;

            else return false;
        }

        void pop(){ // Like push operation, we will be invoking the pop operations at the head of the linkedlist

            if(isEmpty()) cout << "Stack Underflow" << endl; // Here we just need to check if the linkedlist is empty or not, if empty we will return "Stack Underflow".

            else{

                Node* temp = top;
                top = top-> next;
                cout << "Poped out " << temp-> data << endl;
                delete temp;

            }

        }

        void peek(){ // to return the top element

            if(top == NULL) cout << "Stack is empty" << endl;

            else cout << "The top of the stack is: " <<  top-> data << endl;

        }

        void print(){ // to print the contents of the linkedlist

            if(top == NULL) cout << "Stack is empty" << endl;

            else{

                Node* temp = top;
                cout << "The contents of the stack are: ";
                while(temp != NULL){

                    cout << temp-> data << " ";
                    temp = temp-> next;

                }

                cout << endl;

            }

        }

};

int main(){

    Stack s1; // made a stack using linked list

    s1.push(40); // pushed 40
    s1.push(30); // pushed 30
    s1.push(20); // pushed 20
    s1.push(10); // pushed 10
    s1.print(); // 10 20 30 40

    s1.pop(); // removed 10
    s1.peek(); // now peek is 20
    s1.print(); // 20 30 40

    s1.pop(); // removed 20
    s1.peek(); // now peek is 30
    s1.print(); // 30 40

    s1.pop(); // removed 30
    s1.peek(); // now peek is 40
    s1.print(); // 40

    s1.pop(); // removed 40
    s1.peek(); // now peek is NULL so it will show -> "Stack is empty"
    s1.print(); // as there are no remaining elements in the stack so it will show -> "Stack is empty"

    return 0;
=======
#include<bits/stdc++.h>
using namespace std;

class Node{ // the classic way to make a linked list for the implementation of Stack
    public:
        int data;
        Node* next;

        Node(int data){

            this-> data = data;
            this-> next = NULL;

        }
};

class Stack{
    public:
        Node* top = NULL;

        void push(int d){ // no need to check for the "Stack Overflow", because heap memory is so large that it barely gets full.
                        // Also there is no size specifications in the case of linked list unlike Arrays..
                        // here we need to push elements in the head of the linkedlist
            Node* temp = new Node(d);
            temp-> next = top;
            top = temp;

        }

        bool isEmpty(){ // operation to check if the linked list is containing NULL or has atleast one element

            if(top == NULL) return true;

            else return false;
        }

        void pop(){ // Like push operation, we will be invoking the pop operations at the head of the linkedlist

            if(isEmpty()) cout << "Stack Underflow" << endl; // Here we just need to check if the linkedlist is empty or not, if empty we will return "Stack Underflow".

            else{

                Node* temp = top;
                top = top-> next;
                cout << "Poped out " << temp-> data << endl;
                delete temp;

            }

        }

        void peek(){ // to return the top element

            if(top == NULL) cout << "Stack is empty" << endl;

            else cout << "The top of the stack is: " <<  top-> data << endl;

        }

        void print(){ // to print the contents of the linkedlist

            if(top == NULL) cout << "Stack is empty" << endl;

            else{

                Node* temp = top;
                cout << "The contents of the stack are: ";
                while(temp != NULL){

                    cout << temp-> data << " ";
                    temp = temp-> next;

                }

                cout << endl;

            }

        }

};

int main(){

    Stack s1; // made a stack using linked list

    s1.push(40); // pushed 40
    s1.push(30); // pushed 30
    s1.push(20); // pushed 20
    s1.push(10); // pushed 10
    s1.print(); // 10 20 30 40

    s1.pop(); // removed 10
    s1.peek(); // now peek is 20
    s1.print(); // 20 30 40

    s1.pop(); // removed 20
    s1.peek(); // now peek is 30
    s1.print(); // 30 40

    s1.pop(); // removed 30
    s1.peek(); // now peek is 40
    s1.print(); // 40

    s1.pop(); // removed 40
    s1.peek(); // now peek is NULL so it will show -> "Stack is empty"
    s1.print(); // as there are no remaining elements in the stack so it will show -> "Stack is empty"

    return 0;
>>>>>>> e14b8b8098a98fa3406e26b83297aaf5a50768a4
}