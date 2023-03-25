#include <iostream>

using namespace std;

int main(){

    int n,rb=0;

    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n+1];
    arr[n]  =-1;

    cout<<"Enter the array: ";

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    // if(n==1){
    //     cout<<"1"<<"\n";
    //     return 0;
    // }
    // int mx = -1;
    // for(int i=0; i<n;i++){
    //     if(arr[i]>mx && arr[i]>arr[i+1]){
    //         rb++;
    //     }
    //     mx = max(mx,arr[i]);
    // }



    if(n==1){
        cout<<"1"<<"\n";
        return 0;
    }

    int mx=-1 ;
    for(int i=0;i<n;i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){
            rb++;
        }
        
        mx = max(mx,arr[i]);
    }

   
    cout<<rb<<"\n";
    



    return 0;
}