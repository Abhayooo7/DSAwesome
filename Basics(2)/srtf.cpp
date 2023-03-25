#include<iostream>
using namespace std;

int main(){

    int n, counter =1;
    cout<<"Enter the size of array: ";
    cin>>n;

    int P[n];
    int bt[n];
    int wt[n];
    int ct[n];

    cout<<"Enter processes no.";
    for(int i=0;i<n;i++){
        cin>>P[i];
    }
    cout<<"Enter burst time: ";
    for(int i=0;i<n;i++){
        cin>>bt[i];
    }
    while (counter<n){

        for(int i=0;i<n-counter;i++){

            if(bt[i]>bt[i+1]){
                int temp = bt[i];
                bt[i] = bt[i+1];
                bt[i+1] = temp;

                int temp2 = P[i];
                P[i] = P[i+1];
                P[i+1] = temp2;
            }

        }
        counter++;
    }
    for(int i=0;i<n;i++){
        cout<<bt[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<n;i++){
        cout<<P[i]<<" ";
    }
    wt[0] = 0;
    for(int i=1;i<n;i++){
        wt[i] = bt[i-1] + wt[i-1];
    }
    cout<<"Waiting time for processes:\n";
    for (int i=0; i<n; i++){
        cout<<"WT of "<<P[i]<<": "<< wt[i]<<" ";
        cout<<"\n";
    }

    int sum = 0;
    for(int i =0;i<n;i++){
        ct[i] = sum + bt[i]; 
        sum = ct[i];
    }
    cout<<"\n";
    cout<<"Completion time for processes:\n";
    for (int i=0; i<n; i++){
        cout<<"CT of "<<P[i]<<": "<< ct[i]<<" ";
        cout<<"\n";
    }
    cout<<"\n";

        
    
    return 0;
}