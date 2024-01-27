#include<iostream>
using namespace std;

bool checkPal(string str,int start , int end){
    //base case 
    if(start>=end){
        return 1;
    }
    if(str[start]!= str[end]){
        return 0;
    }
    return checkPal(str, start+1 , end-1);   
}
int main(){

    string str;
    cout<<"Enter the string : ";
    cin>>str;
    cout<<checkPal(str,0,str.length()-1);
}