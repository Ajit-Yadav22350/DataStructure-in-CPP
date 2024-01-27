#include<iostream>
using namespace std;
class Customer{
    string name;
    int account_number;
    int balance;
    
    public:
    Customer(){
        cout<<"hello constructor";
        name = "ajit yadav";
        account_number=353;
        balance = 3004;

    }

    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};


int main(){
    Customer a1;   
    a1.display();
}