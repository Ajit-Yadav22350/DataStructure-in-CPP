#include<iostream>
using namespace std;
void lenghtOfStr(string str){
  int i=0;
  while(str[i]!='\0'){
         i++;
  }
  cout<<"the length of the given string is :"<<i<<endl;
}
void reverse(string str){
     int start=0; int end = str.length()-1;
     while(start <= end){
        swap(str[start] , str[end]);
        start++;
        end--;
     }
     cout<<"reverse of the given string is : "<<str<<endl;

}
bool isPalindrom(string str){
    int start = 0; int end =str.length()-1;
    while (start<=end){
        if(str[start]!=str[end]){
            return false;
        }
        start++;
        end--;
    }

}
int main(){
  string str;
  cout<<"Enter the string :";
  getline(cin , str);
  lenghtOfStr(str);
  reverse(str);
  if(isPalindrom(str)){
    cout<<"the given string is a palindrom . ";
  }
  else{
    cout<<"the given string is not a palindrom ";
  }

}