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

    cout<<"Enter position to be deleted: ";
    cin>>b;

    int i=n-1;

    for(int i = n-b; i<n; i++){
        arr[i] = arr[i+1];
    }

    n = n-1;

    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    return 0;
}