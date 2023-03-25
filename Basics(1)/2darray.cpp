#include <iostream>
using namespace std;

int main(){

    int rows,cols;

    cout<<"Enter rows: ";
    cin>>rows;

    cout<<"Enter cols: ";
    cin>>cols;

    int arr[rows][cols];

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }

    // SEARCHING 

    // int n;

    // cout<<"Enter a number to find: ";
    // cin>>n;

    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         if(arr[i][j] == n){
    //             cout<<j+1<<" element of "<<i+1<<" row.\n";
    //         }
    //     }
        
    // }


    // SPIRAL TRAVERSE

    // int row_start = 0, row_end = rows-1, col_start = 0, col_end = cols-1;

    // while(row_start <= row_end && col_start <= col_end){

    //     for(int i=col_start; i<=col_end; i++){
    //         cout<<arr[row_start][i]<<" ";
    //     }
    //     row_start++;

    //     for(int i=row_start; i<=row_end; i++){
    //         cout<<arr[i][col_end]<<" ";
    //     }
    //     col_end--;
    //     for(int i=col_end; i>=col_start; i--){
    //         cout<<arr[row_end][i]<<" ";
    //     }
    //     row_end--;
    //     for(int i=row_end; i>=row_start; i--){
    //         cout<<arr[i][col_start]<<" ";
    //     }
    //     col_start++;
    // }
    
    // TRANSVERSE

    // cout<<"\n";

    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<"\n";
    // }


  
    


    return 0;
}
