#include<iostream>
using namespace std;
void defendingIP(string str){
      string ans="";
      int idx;
  while(idx <str.length()){
  
    if(str[idx]=='.'){
        ans +="[.]";
    }
    else{
        ans = str[idx];
    }
    idx++;
  }
   cout<<ans;
cout<<"Now the ip address is : ";
}
int main(){
   string ip;
   cout<<"Enter the IP Address: ";
   cin>>ip;
   defendingIP(ip);
}
