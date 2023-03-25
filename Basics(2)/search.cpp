#include <iostream>

using namespace std;
int main(){

    int n,a;
    cout<<"Enter Array Size: ";
    cin>>n;
    int arr[n];

    cout<<"Enter Array: ";

    for(int i =0; i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the number to search: ";
    cin>>a;
    int x = -1;

    for(int i=0; i<n;i++){

        if(arr[i] == a){
           x = i;
           break;
        }
    }
    cout<<"It is at index: "<<x<<"\n";


    return 0;
}