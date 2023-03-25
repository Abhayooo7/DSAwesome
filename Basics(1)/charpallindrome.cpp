#include<iostream>

using namespace std;

int main(){

    int n;

    cout<<"Enter array size: ";
    cin>>n;

    char arr[n+1];
    cin>>arr;
    int res= 1;

    for(int i =0; i<n;i++){
        if(arr[i] != arr[n-i-1]){
            res =0;
            break;
        }
    }

    if(res==1){
        cout<<"PALLIDROME\n";
    }
    else{
        cout<<"NOT PALLINDROME\n";
    }
    return 0;
}