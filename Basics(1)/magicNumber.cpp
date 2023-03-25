#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n,sum=0,i=1;
    cout<<"Which magic number you want to find? ";
    cin>>n;

    while(n>0){
    
        int x = n&1;
        sum += x * pow(5,i);
        n = n>>1;
        i++;
    }

    cout<<"The magic number is: "<< sum<<endl;

    return 0;
}