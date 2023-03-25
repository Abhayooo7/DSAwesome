#include <iostream>

using namespace std;

int main(){

    int n;

    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    
    cout<<"Enter the array: ";

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    const int N = 1e6+2;
    int ind[N];

    for (int i=0; i<N; i++){
        ind[i] = -1;
    }

    int minind = INT_MAX;

    for(int i =0; i<n;i++){

        if(ind[arr[i]] != -1){
            minind = min(minind, ind[arr[i]]);
        }
        else{
            ind[arr[i]] = i;
        }
    }

    if(minind == INT_MAX){
        cout<<"-1"<<"\n"; 
    }
    else{
        cout<< minind+1 <<"\n";
    }

    return 0;
}

    