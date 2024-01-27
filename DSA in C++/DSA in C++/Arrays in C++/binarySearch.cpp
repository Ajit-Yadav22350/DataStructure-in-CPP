#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int start, int end, int key){
    int mid=start+(end-start)/2;
    
    while(start<=end){
        if(arr[mid]==key){
            //found!!
           return mid;
        }
        else if (arr[mid]>key){
            //go to left 
            end=mid-1;
            
        }
        else{//arr[mid]<key, so, go to right 
            start=mid+1;
           
        }
         mid=start+(end-start)/2;
    }
    return -1;
   
}
int main(){
 
   int arr[]={4,6,7,9,12,34};
   int key; 
   cout<<"Enter the key: ";
   cin>>key;
   cout<<"the index of the key is: "<<  binarySearch(arr,0,5,key );
   return 0;
}