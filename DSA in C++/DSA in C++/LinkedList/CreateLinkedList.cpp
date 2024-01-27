#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data = value ;
        next = NULL;
    }
};

Node* CreateLinkedList(int arr[], int  idx , int  size){
    //Base Case
    if (idx == size ){
        return NULL;
    }
    //create  a new node
    Node *temp = new Node(arr[idx]);
    temp->next = CreateLinkedList(arr , idx+1 , size);
    return temp ;
}
int main(){
    Node *head = NULL;

    int  arr[]= {2,4,6,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    head = CreateLinkedList(arr, 0 , n);
    

    //print the node
    Node *temp = head;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"********************LINKED LIST*****************"<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp ->next;
    }
    cout<<"NULL";
}