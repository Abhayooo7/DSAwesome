#include <iostream>

using namespace std;

int main(){

    int n,sum =0;

    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"array: ";

    for(int i=0; i<n; i++){
        cin>>arr[i];

        sum+=arr[i];

        if(i==0){
            cout<<"Result: ";
        }
        cout<<sum<<" ";

    }
    cout<<"\n";

    return 0;
}