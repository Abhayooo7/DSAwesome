#include <iostream>

using namespace std;

int main(){

    int n,cd,max=2,counter=2;

    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the array: ";

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    cd = arr[1]-arr[0];

    for(int i = 2;i<n;i++){

        if(cd == arr[i]-arr[i-1]){
            counter++;
        }
        else{
            cd = arr[i]-arr[i-1];
            counter = 2;
        }
        if(max<counter){
            max = counter;
        }
    }

    // while(i<n){
        
    //     if(cd == arr[i]-arr[i-1]){
    //         counter++;
    //     }
    //     else{
    //         cd = arr[i]-arr[i-1];
    //         counter = 2;
    //     }
    //     if(max<counter){
    //             max = counter;
    //         }
    //     i++;
    // }
    cout<<max<<" \n";



    return 0;
}