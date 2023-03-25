#include <iostream>
using namespace std;

int main(){

    int n,temp;

    cout<<"Enter size of array: ";
    cin>>n;

    int bt[n];
    int wt[n];
    int ct[n];
    // int tat[n];

    cout<<"Enter the array: ";

    for (int i=0; i<n; i++){
        cin>>bt[i];
    }
    wt[0] = 0;
    for(int i=1;i<n;i++){
        wt[i] = bt[i-1] + wt[i-1];
    }

    cout<<"Waiting time for processes:\n";
    for (int i=0; i<n; i++){
        cout<<wt[i]<<" ";
    }
    cout<<"\n";

    int sum = 0;
    cout<<"Completion Time: \n";
    for(int i =0;i<n;i++){
        ct[i] = sum + bt[i]; 
        sum = ct[i];
        cout<<ct[i]<<" ";
    }
    cout<<"\n";

    // cout<<"Turn-Around time: \n";
    // for(int i=0;i<n;i++){
    //     tat[i] = ct[i] - wt[i];
    //     cout<<tat[i]<<" ";
    // }
    // cout<<"\n";
    return 0;
}