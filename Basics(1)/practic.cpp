#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter the array size: \n";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i =1;i<n;i++){
        int k= i-1;
        int temp = arr[i];
        while(temp < arr[k] && k>=0){
            arr[k+1] = arr[k];
            k--;
        }
        arr[k+1] = temp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}