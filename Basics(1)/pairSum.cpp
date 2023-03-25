#include<iostream>

using namespace std;

int main(){

    int n,sum=0;

    cout<<"Enter array size: ";
    cin>>n;

    int arr[n];

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int s;
    cout<<"enter sum: ";
    cin>>s;

    int st=0,en=n-1;

    while(st<en){
        sum = arr[st]+arr[en];

        if(sum==s){
           cout<<st<<" "<<en<<"\n";
           break;
        }
        else if(sum<s){
            st++;
        }
        else{
            en--;
        }
    }

    return 0;

}