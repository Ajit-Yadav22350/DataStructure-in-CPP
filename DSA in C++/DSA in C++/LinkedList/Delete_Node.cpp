#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node(int value){
        data = value; 
        next =  NULL;
    }

};

Node *CreateLinkedList( int  arr[] ,int idx ,int size){
       //base case  
       if(idx == size ){
          return NULL;

       }
       Node *temp = new Node(arr[idx]);
       temp->next = CreateLinkedList(arr , idx +1 , size);
       return temp;
}

void deleteFirstNode(Node * &head){
     Node *temp = head;
     head = head ->next;
     delete temp;
}
void deleteLastNode(Node * &head){
    Node *curr = head ;
    Node *prev = NULL;
    while (curr->next !=  NULL){
        prev = curr;
        curr = curr->next;
        
    }
    delete curr; 
    prev->next = NULL;


}
void deleteNodeAtIndex(Node * &head , int idx){
    Node *curr =head; 
    Node *prev = NULL;
    idx--;
    while (idx--){
        prev = curr; 
        curr = curr->next;

    }
    prev->next = curr->next;
    delete curr;
}
void printLinkedList(Node *&head){
    Node  *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main(){
   
     Node* head =NULL;
     //First create a linked  list , after onwards only we can test the deletion of the linked list  
     int arr[5] = {3,4,7,9,6};
     head = CreateLinkedList( arr , 0 , 5 );
     cout<<"Linked list before deleting any node: "<<endl;
     printLinkedList(head);
     cout<<endl;
     cout<<"linked list after deleting the Node at idx =3"<<endl;
     deleteNodeAtIndex(head , 3);
     printLinkedList(head);
     cout<<endl;
     deleteFirstNode(head);
     deleteLastNode(head);
     cout<<"After  deleting first and last node."<<endl;
     printLinkedList(head);
}