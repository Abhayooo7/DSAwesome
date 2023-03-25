#include <iostream>

using namespace std;

int main(){

    int n,a;

    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter a sorted array:";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Number to be inserted: ";
    cin>>a;

    n=n+1;
    int i = n-2;

    while(a<arr[i]){

        arr[i+1] = arr[i];
        i--; 
    }
    arr[i+1] =a;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    
    return 0;
}