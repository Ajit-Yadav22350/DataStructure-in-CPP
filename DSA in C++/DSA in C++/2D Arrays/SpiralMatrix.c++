#include<iostream>
using namespace std;

void printSpiral(int matrix[][4]){
    int startRow = 0; 
    int endRow = 4;
    int startCol = 0; 
    int endCol = 4;
    while(startRow <= endRow && startCol <= endCol){
        //top 
        
        for(int i =startCol ; i< endCol ; i++){
            cout<<matrix[startRow][i]<<" ";
            
        }
    }
}
int main(){
     int matrix[4][4]={ {1,2,3,4},
                      {5,6,7,8},
                      {9,10,11,12},
                      {13,14,15,16}};

   
}