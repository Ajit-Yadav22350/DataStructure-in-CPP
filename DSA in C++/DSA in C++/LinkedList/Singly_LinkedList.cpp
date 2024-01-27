#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
//Travesing the linked List
void printLinkdeList(Node *head){
    Node *temp =head;
    while (temp!=NULL){
        cout<<temp->data<<" -> ";
        temp =temp->next;
    }
    cout<<"NULL";
}
//Insertion at the Head 
void insertAtHead(Node* &head, int data){
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

//Insertion at the tail
void insertAtTail(Node *&tail , int data){
    while(tail->next!=NULL){
        tail = tail->next;
        
    }
    Node *temp = new Node(data);
    tail->next = temp;
    tail =temp;

}

//Insert at the Middle
void insertAtPosition (Node * &tail , Node * &head, int position, int data){
     //inserting at head
    if(position ==1){
        insertAtHead(head,data);
        return;
    }
    int cnt =1;
    Node *temp = head;
    while(cnt < position){
        temp = temp->next;
        cnt++;

    }
    //Inserting at tail
    if(temp->next == NULL){
        insertAtTail(tail,data);
    }
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}
int main(){
    Node *head =new Node(10);
    Node *tail = head;
    insertAtHead(head,20);
    printLinkdeList(head);
    cout<<endl;
    
    insertAtHead(head,40);
    printLinkdeList(head);

    cout<<endl;

    insertAtTail(tail,90);
    printLinkdeList(head);
    cout<<endl;
    
    insertAtPosition(tail, head,1,42);
    insertAtPosition(tail, head,3,22);
    insertAtPosition(tail,head , 6,99);
    printLinkdeList(head);
    cout<<endl;
    cout<<"Head of the Linked List is "<<head->data<<endl;
    cout<<"Tail of the Linked List is "<<tail->data;
}