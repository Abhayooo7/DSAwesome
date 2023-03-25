#include <iostream>

using namespace std;

int main(){

    int n;

    cout<<"Enter Array Size: ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 

    int totalSum =0;
    for(int i =0;i<n;i++){
        totalSum += arr[i];
    }

    int ncSum =INT_MIN,sum=0;


    for(int i=0;i<n;i++){
        sum += (-arr[i]);

        if(sum<0){
            sum=0;
        }
        ncSum = max(ncSum,sum);
    }

    int cSum = totalSum+ncSum;
    cout<<cSum<<"\n";

    return 0;
}