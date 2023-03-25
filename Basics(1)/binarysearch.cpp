#include <iostream>
using namespace std;

int main(){

    //Works on SORTED arrays only
    //Find the mid point and copare with arr[i]
    //if less then search backword else forward

    int n;

    cout<<"Enter Array Size: ";
    cin>>n;

    int s=0,e=n-1,key,mid,i=-1;
    int arr[n];
    
    cout<<"Enter Array: ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the Key: ";
    cin>>key;

    while(s<=e){

        mid = (s+e)/2;

        if(arr[mid] == key){
            i = mid;
            break;
        }
        else if(arr[mid]>key){
            e = mid - 1;
        }
        else{
            s = mid +1;
        }       
    }

    cout<<"The Index is: "<<i<<"\n";



    return 0;
}