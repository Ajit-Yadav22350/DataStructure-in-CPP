#include<iostream>
#include<algorithm>
using namespace std;
int  main(){
    cout<<"-----------------------INBUILT FUNCTION IN C++ ------------------------"<<endl;
    //reversing the string  using  inbuilt method
    string str;
    cout<<"Enter the  string:";
    getline(cin,str);
    reverse(str.begin(), str.end());
    cout<<"the reverse of  the  given string is : "<<str;


}