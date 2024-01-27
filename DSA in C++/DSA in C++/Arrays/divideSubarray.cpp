#include<iostream>
#include<vector>
using namespace std;

 bool divideArray(vector<int>arr){//Time complexity is O(n)
    //first find the total sum 
    int total_sum = 0, n=arr.size() ;
    for(int i=0; i<n; i++)
    {
       total_sum +=arr[i];
     }
    int prefix = 0;
     //now checking wether left sum of the array is equal to the right array or not 
     for(int i=0; i<n; i++){
        prefix+=arr[i];
        if(prefix == total_sum-prefix){
            return 1;
        }
     }
     return 0;
 }
int main(){
    int n; 
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the arrays : "; 
    vector<int>v(n);
    for(int i= 0; i<n; i++){
        cin>>v[i];
    }

    cout<<divideArray(v);
}