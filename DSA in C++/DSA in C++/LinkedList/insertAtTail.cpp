#include<iostream>
using namespace std;
class Node {

    public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next =NULL;

    }
}; 

void insertAtTail (Node * &head , Node* tail,int data ){

            if(head == NULL){
                    Node *temp =new Node(data);
                    head = tail = temp;
                    
                    }
            else{
                    Node *tail =head ; 
                    while(tail->next !=NULL){
                        tail =tail->next;

                    }
                    Node *temp =new Node(data);
                    tail->next = temp;
                    tail = temp->next;

                
            }
}

void printLinkedList(Node * &head , Node *&tail ){

    
    //Traversing through the linked list .....
    Node *temp = head;
    while(temp != NULL){
           
           cout<<temp ->data<<" -> ";
           temp = temp->next; 
           }
          cout<<"NULL";
}
            

int main(){
    Node *head = NULL; 
    Node *tail = NULL;
    insertAtTail (head ,tail , 5);
    printLinkedList(head , tail);
    cout<<endl;
    insertAtTail(head , tail , 4);
    printLinkedList(head , tail);
    cout<<endl;
    insertAtTail(head , tail , 9);
    printLinkedList(head,tail);

}