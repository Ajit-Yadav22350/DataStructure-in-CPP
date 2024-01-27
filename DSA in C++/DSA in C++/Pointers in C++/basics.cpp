#include<iostream>
using namespace std;
int main(){
    int b = 5;
    int *a=&b;
    cout<<"THe adress of a is "<<a;
    cout<<endl;
    cout<<"the value of b is :"<<*a;
   
}