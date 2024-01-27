#include<iostream>
using namespace std;
  int printSubArray(int arr[], int n){

    for(int i=0; i<n ; i++){
        for(int j = 0; j<n; j++){
            for(int k = i ; k<=j; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
  }
int main(){
    int arr[]= {2,4,1,6,3};
    
    int n= sizeof(arr)/sizeof(arr[0]);
    printSubArray(arr,n );
}