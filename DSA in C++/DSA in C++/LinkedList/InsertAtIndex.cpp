#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

//function to Insert Node at any index 
void insertAtIdx(Node *&head,int  data, int position){
   
    int  cnt  = 1;
    Node *temp = head; 
    while(cnt <position){
         temp = temp->next;
         cnt++;      
    }
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}
//creating  a linked  list using recursion (insertion at  tail)
Node* CreateLinkedList(int arr[], int  idx, int size){
    //base case
    if(idx == size ){
        return NULL;
    }
    Node *temp = new Node(arr[idx]);
    temp->next = CreateLinkedList(arr, idx+1 , size);
    return temp;

}

//printing the  linked list
void printLinkedList(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;

    }
    cout<<"NULL";

}
int main(){

    Node *head  = NULL; 
    int arr[]= {2,4,6,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"---------------LinkedList------------------"<<endl;
    head = CreateLinkedList(arr, 0 , n);
    insertAtIdx(head, 5,3);
    printLinkedList(head);
}