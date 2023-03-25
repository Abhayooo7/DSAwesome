#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter array size: ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    const int N = 1e6+2;
    bool chk[N];

    for(int i =0;i<N;i++){
        chk[i] = false;
    }

    for(int i=0 ; i<n ; i++){
        if(arr[i]>=0){
            chk[arr[i]] = true;
        }
    }
    int ans =-1;
    for(int i=0 ; i<n ; i++){
        if(chk[i]==false){
            ans = i;
            break;
        }
    }
    cout<<ans<<"\n";

    return 0;
}