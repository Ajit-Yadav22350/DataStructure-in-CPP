#include<iostream>
#include<vector>
using namespace std;

void subSequence (int arr[],int idx,int n, vector<vector<int>>&ans , vector<int>temp){


   //base case 
   if(idx == n ){
    ans.push_back(temp);
    return;
   }
   subSequence(arr,idx+1,n, ans,temp);
   temp.push_back(arr[idx]);
   subSequence(arr,idx+1,n,ans,temp);

}
int main(){
    int arr[]={1,2,8,9,3};
    int n =sizeof(arr)/sizeof(arr[0]);
    vector<vector<int>>ans;
    vector<int>temp;
    subSequence(arr,0,n,ans,temp);

    for(int  i =0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}