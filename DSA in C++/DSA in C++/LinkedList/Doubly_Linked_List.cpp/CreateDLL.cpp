#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node*prev;

    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(Node*&head , int data){
    if(head == NULL){
        head = new Node(data);
    }
    
   else{
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
        
   }

}
int main(){

    Node *head = NULL;
    insertAtHead(head,3);
    insertAtHead(head,5);
    insertAtHead(head,7);
    insertAtHead(head,9);
    insertAtHead(head,8);

    //print linked list
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next; 
    }
    cout<<"NULL";

}