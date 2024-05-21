// printing the linked list in the reverse order through its prev

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        Node(int d){
            data = d;
            prev = NULL;
            next = NULL;
        }
};

void insertAtFront(Node* &head, int d){
    Node* temp = new Node(d);

    temp-> next = head;
    head-> prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);

    temp-> prev = tail;
    tail-> next = temp;
    tail = temp;
}


void insertAtMiddle(Node* &head, int pos, int d){
    if(pos == 1) insertAtFront(head, d);

    else{
        Node* curr = head;
        Node* past = NULL;
        int cnt = 1;

        while(cnt < pos){
            past = curr;
            curr = curr-> next;
            cnt++;
        }

        Node* temp = new Node(d);
        
        temp-> next = curr; // will work for past-> next as well so we can check for all kinda possibilities for better understanding
        curr-> prev = temp;
        temp-> prev = past;
        past-> next = temp;
    }
}

void reverse(Node* &head){
    // making the last node as the head can make the job done

    Node* curr = head;
    Node* forward = curr-> next;
    
    while(forward != NULL){
        curr = curr-> next;
        forward = curr-> next;
    }

    head = curr;

    // for printing the linked list 
    Node* temp = head;
    while(temp != NULL){
        cout << temp-> data << " ";
        temp = temp-> prev;
    }
    cout << endl;
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp-> data << " ";
        temp = temp-> next;
    }
    cout << endl;
}

int main(){
    Node* n1 = new Node(3);
    Node* head = n1;
    Node* tail = n1;

    insertAtFront(head, 2);
    insertAtTail(tail, 5);
    insertAtMiddle(head, 1, 4);
    print(head);

    reverse(head);

    return 0;
}