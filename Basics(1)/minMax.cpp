#include <iostream>

using namespace std;

int main(){

    int n; 

    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];

    int max = INT_MIN;
    int min = INT_MAX;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max = arr[i];
        }
        if(min>arr[i]){
            min = arr[i];
        }
    }
    cout<<"MAX: "<<max<<"\n";
    cout<<"MIN: "<<min<<"\n";


    
    

    return 0;
}