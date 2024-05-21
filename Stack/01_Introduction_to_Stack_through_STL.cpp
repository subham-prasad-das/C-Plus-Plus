#include<bits/stdc++.h>
using namespace std;

void print(stack<int> s){
    vector<int> v;
    for(int i = 0; s.size(); i++){
        v.push_back(s.top());
        s.pop();
    }

    // for printing the content of the stack indirectly
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){

    // implementing Stack using STL
    stack<int> s1;
    stack<int> s2;

    // taking the size of both the stacks as 5

    // pushing values into the stack 1
    cout << "Enter the values you want to enter into the stack 1: ";
    for(int i = 0; i < 5; i++){
        int temp;
        cin >> temp;
        s1.push(temp);
    }

    // pushing values into the stack 2
    cout << "Enter the values you want to enter into the stack 2: ";
    for(int i = 0; i < 5; i++){
        int temp;
        cin >> temp;
        s2.push(temp);
    }

    // printing the content of the stack we just created and pushed items into it
    cout << "The contents of the stack 1 is: " ;
    print(s1);

    // checking if the stack is empty or not
    if(s1.empty()) cout << "The stack 1 is empty" << endl;
    else cout << "The stack 1 is not empty" << endl;
    
    // emplace() method in the stack pushes a '0' at the top of the stack
    cout << "Size before the implementaition of emplace on stack 1 is: " << s1.size() << " and the top element is: " << s1.top() << endl;
    s1.emplace();
    cout << "Size after the implementaition of emplace on stack 1 is: " << s1.size() << " and the top element is: " << s1.top() << endl;

    // checking the top of the stack before the pop operation
    cout << "Before the pop operation the top of the stack 1 contains: " << s1.top() << endl;

    // checking the size of the stack before pop operation
    cout << "the size of the stack 1 before pop operation: " << s1.size() << endl;

    // printing the stack content before the pop operations
    cout << "content of the stack 1 before the pop operations: "; 
    print(s1);

    // taking out the values of the stack from the top of the stack
    s1.pop(); // taken out '0'
    s1.pop(); // taken out '7'
    s1.pop(); // taken out '6'

    // printing the stack content after the pop operations
    cout << "content of the stack 1 after the pop operations: "; 
    print(s1);

    // checking the size of the stack after pop operation
    cout << "the size of the stack 1 after pop operation: " << s1.size() << endl;

    // checking the top of the stack after pop operation
    cout << "After the pop operation the top of the stack 1 contains: " << s1.top() << endl;

    cout << "Before the swapping between two stacks happened the contents of the stack 1 is: " ;
    print(s1);

    s1.swap(s2); // swap basically swaps the contents of two stacks of irrespective of the size of the two stacks 

    cout << "After the swapping between two stacks happened the contents of the stack 1 is: " ;
    print(s1);

    return 0;
}