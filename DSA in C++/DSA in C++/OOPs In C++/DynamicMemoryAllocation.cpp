#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age ;
    int roll_Number;
    string section;
    string  department;
};

int  main(){
    student *S = new student;
    (*S).name = "ajit";
     S->age = 19;
     cout<<S->name;
     cout<<S->age; 

     
}