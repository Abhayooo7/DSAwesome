#include <iostream>

using namespace std;

int main(){

     int n,temp,counter =1;;

    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the array: ";

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }


    for(int i =1;i<n;i++){
        temp = arr[i];
        int j = i-1;

        while(temp<arr[j] && j>=0){
            arr[j+1] = arr[j];
            j--;                                         
        }
        arr[j+1] = temp;

        for (int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        
    }
    cout<<"\n";
    }
    
    
    


    return 0;
}