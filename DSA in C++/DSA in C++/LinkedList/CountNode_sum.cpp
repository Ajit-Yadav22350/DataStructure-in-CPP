#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next =NULL;
    }
};

Node *CreateLinkedList(Node* &head , int idx ,int arr[] ,int size){
     //base case    
    if(idx ==size){
        return NULL;
    }
    Node *temp = new Node(arr[idx]);
    temp->next =CreateLinkedList(head, idx+1 , arr , size);
    return temp ; 
}

void countNode(Node* head){
    int cnt =1;
    Node *temp= head;
    while(temp->next != NULL){
         temp = temp->next;
         cnt++;
        
    }
    cout<<"The lenght/Number of nodes is : "<<cnt;

}
void sumOfNodes(Node* head){
    Node *temp= head;
    int  sum =0;
    while(temp!= NULL){
       sum+= temp->data;
       temp = temp->next;
    }
    cout<<"The sum of  the Node is :"<<sum;
}

int main(){

    Node* head =NULL;
    int arr[5]={3,6,8,9,12};
    head = CreateLinkedList(head, 0 , arr , 5);
    // print linked list
    Node *temp = head;
    while (temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL";
    cout<<endl;
    countNode(head);
    sumOfNodes(head);
}