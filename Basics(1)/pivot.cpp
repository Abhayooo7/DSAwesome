#include<iostream>
using namespace std;

int main(){

    int arr[] = {7,9,1,2,3};

    int s = 0;
    int e = sizeof(arr)/sizeof(arr[0]);
    int mid;

    while(s<e){
        mid = s + (e-s)/2 ;
        
        if(arr[mid]>=arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
    }
    cout<<arr[e];
    return 0;
}