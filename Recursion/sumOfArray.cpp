#include<iostream>
using namespace std;

int sumOfArray(int arr[], int n){

    if(n<=0){
        return 0;
    }
    return sumOfArray(arr,n-1) + arr[n-1];
}

int main(){
    
    int arr[4] = {4,3,2,6};
    int sum = 0;
    
    cout<<sumOfArray(arr,4);


    return 0;
}