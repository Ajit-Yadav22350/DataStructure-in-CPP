// #include<iostream>
// #include<map>
#include<bits/stdc++.h>
using  namespace std;
int main(){
    map<int,string>m;
    m[1] = "ajit";
    m[3] = "amit";
    m[9] = "slok";

cout<<"----------------Map in C++ ----------------------"<<endl;
    for(auto i:m){
        cout<<i.first<<setw(8)<<i.second;
        cout<<endl;
        
    }
}