#include<iostream>
#include<stack>
using namespace std;
int main(){
    //creation of stack
    stack<int>s;
    //push operation
    s.push(4);
    s.push(2);
    s.push(5);
    s.push(9);
    //pop
    s.pop();
    cout<<"Printing top element: "<<s.top()<<endl;
    if(s.empty()){
        cout<<"stack is  empty.";

    }
    else{
        cout<<"stack is not empty."<<endl;
    }
 cout<<"Size of the stack is : "<<s.size();
}