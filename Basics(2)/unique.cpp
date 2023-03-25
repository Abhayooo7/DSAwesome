#include<iostream>
using namespace std;

int unique(int arr[], int n){

    int x = 0;
    for (int i =0; i<n;i++){
        x = x^arr[i];
    }
    return x;
}


int main(){

    int arr[] =  {2,4,6,3,4,6,2};
    cout<<unique(arr,7);

    return 0;
}