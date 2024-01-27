#include<iostream>
using namespace std;
int main(){
    int arr[]={2,6,5,8,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"Enter the target element: ";
    cin>>target;

    for(int i=0; i<n; i++){
        for(int j =i+1; j<n; j++){
            if(arr[i]+arr[j]==target){
                cout<<"["<<i<<","<<j<<"]";
            }
            
        }
 
    }
    
}  