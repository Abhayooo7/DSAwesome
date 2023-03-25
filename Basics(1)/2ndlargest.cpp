#include <iostream>

using namespace std;

int main(){

    int n,max;

    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];

    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    int counter =1;

    while(counter < n-1){

        for(int i=0 ; i<n-counter ; i++){

            int temp = arr[i];

            if(arr[i]>arr[i+1]){

                arr[i] = arr[i+1];
                arr[i+1] = temp;

            }
        }
        counter++;
    }

    max = arr[n-1];
    int i=n-2;
    while(i>=0){

        if(arr[i] != max){
            cout<<arr[i];
            break;
        }
        i--;

    }
    cout<<"\n";

    return 0;
}