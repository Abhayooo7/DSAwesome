#include <iostream>

using namespace std;

int main(){

    int n,a,b;

    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];

    for(int i =0; i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter element to be inserted: ";
    cin>>a; 

    cout<<"Enter position to be inserted at: ";
    cin>>b;

    n = n+1;
    int i=n-1;

    while(i>=b){

        arr[i]  = arr[i-1];
        i--;
    }
    arr[b-1] = a;
    

    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";



    return 0;
}