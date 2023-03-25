#include <iostream>
#include <climits>

using namespace std;

int main(){

    int n;

    cout<<"Enter array size: ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=0,maxSum = INT_MIN;

    for(int i=0;i<n;i++){

        sum += arr[i];

        if(sum<0){
            sum=0;
        }
        maxSum = max(maxSum,sum);
    }
    
    cout<<maxSum<<"\n";

    return 0;
}