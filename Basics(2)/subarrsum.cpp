#include <iostream>

using namespace std;

int main(){

    int n,sum=0;

    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the array: ";

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n;i++){

        sum =0;

        for(int j=i;j<n;j++){

            sum += arr[j];
            cout<<sum<<"\n";
            
        }
    }

    return 0;
}