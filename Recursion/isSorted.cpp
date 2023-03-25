#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){

    if(n==0 || n==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }else{
        return isSorted(arr+1,n-1);
    }
}

int main(){

    int arr[4] = {2,3,5,6};
    cout<<isSorted(arr,4);
    return 0;
}