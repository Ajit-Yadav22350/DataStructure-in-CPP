#include<iostream>
#include<climits>
using namespace std;
void printarr(int arr[], int n ){
    cout<<"actual array is : "<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void printSubarray(int arr[], int size , int k){
    int i = 0;
    cout<<"contiguous subarray of size "<<k <<" are: "<<endl;
    while( i <= size- k){
        cout<<i+1<<"th subarray = {";
        int maxi = INT_MIN;
        for(int j= i; j <=i+(k-1) ; j++){
            cout<<arr[j]<<" ";
            // if(arr[j]>maxi){
            //     maxi = arr[j];
            // }
            maxi = max(maxi,arr[j]);
        }
        cout<<"}max = ";
        cout<<maxi;
         cout<<endl;
         i++;
    }
}
int main(){
    int arr[]={1,2,3,1,4,5,2,3,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Enter the size of subarray: ";
    cin>>k;
    printarr(arr , n);
    cout<<endl;
    cout<<"------------------------------------------"<<endl;
    printSubarray(arr, n , k );
}