#include <iostream>

using namespace std;

int main(){

    //it has time complexity of O(n^2);
    //not efficient

    int n,temp;

    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the array: ";

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i =0; i<n-1; i++){

        for(int j=i+1; j<n;j++){

            temp = arr[i];

            if(arr[i]>arr[j]) {

                arr[i] = arr[j];
                arr[j] = temp;

            }
        }
          for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
      cout<<"\n";
    }

  
   


    return 0;
}