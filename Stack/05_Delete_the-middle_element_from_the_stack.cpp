#include<bits/stdc++.h>
using namespace std;

void deleteMiddle(stack<int> &s1, int cnt, int size){
    if(cnt == size/2){ // made the cnt as half the size of the stack. Thats how we can delete the middle element of the stack
        s1.pop(); // when cnt reaches the middle of the stack, we just need to pop the top that is the middle element of the stack and return to the calling position
        return ;
    }

    int num = s1.top(); // here we have stored the top of the stack in the num before poping it out
    s1.pop(); // poped out the top element of the stack

    // will call the function recurssively till we reach the base case i.e. when we reach the middle element of the stack, there we will just pop out the top element i.e. the middle element at that time, and return whereas here we will be storing the top element which were present before the middle element as we can push it further after reaching out the base case i.e. poping out the middle element.
    deleteMiddle(s1, cnt + 1, size);

    s1.push(num); // after poping out the middle element we will just return the elements poped out and stored before the middle element is poped out as we can push them to make it show as it is but excluding the middle element because we have poped it out in the base case and this operations will be executed while the program is returning continuously after reaching out the base case.
}

void print(stack<int> s1){
    vector<int> v;
    int n = s1.size();
    for(int i = 0; i < n; i++){
        v.push_back(s1.top());
        s1.pop();
    }

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    stack<int> s;

    int i = 0; 
    // we will be using i for keeping a track for coming down to the middle of the stack. Initialized i as we are taking the 1st element to start from 0th index.
    int n;
    cout << "Enter the number of elements in the stack: ";
    cin >> n;

    cout << endl << "Enter the elements to push into the stack: ";
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        s.push(temp);
    }
    
    cout << "The stack before deletion is: ";
    print(s);

    deleteMiddle(s, i, 5);

    cout << "The stack after deletion is: ";
    print(s);

    return 0;
}