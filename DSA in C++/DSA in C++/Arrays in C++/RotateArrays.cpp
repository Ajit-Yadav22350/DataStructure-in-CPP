#include<iostream>
#include<algorithm>

using namespace std;
void leftRotate(int arr[], int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d , arr+n);
    reverse(arr,arr+n);
    
}
int main(){
    int size,d;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the Elements of the arrays."<<endl;
    for(int i= 0; i<size ; i++){
        cout<<"Enter arr["<<i<<"]:";
        cin>>arr[i];
    }
    cout<<"Array before rotation: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<"Enter the value of d by which you wants to rotate the array:";
    cin>>d;
    leftRotate(arr , size , d);
    cout<<"Array after left rotate is:";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}