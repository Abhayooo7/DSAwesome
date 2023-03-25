#include<iostream>
using namespace std;

void qsort(int *arr, int low, int high){

    if(low>=high){
        return;
    }

    int s = low;
    int e = high;
    int m = s + (e-s)/2;
    int pivot = arr[m];

    while(s<=e){
        while(arr[s]<pivot){
            s++;
        }
        while(arr[e]>pivot){
            e--;
        }
        if(s<=e){
            int temp = arr[s];
            arr[s]  = arr[e];
            arr[e] = temp;
            s++;
            e--;
        }
    }
    //now pivot is at correct position therfore recursion calls
    qsort(arr,low,e);
    qsort(arr,s,high);
}

int main(){

    int arr[] = {35,50,15,25,80,20,90,45};
    int n = sizeof(arr)/sizeof(arr[0]);
    qsort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}