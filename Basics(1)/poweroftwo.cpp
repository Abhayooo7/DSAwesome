#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a number: ";
    cin>>n;

    if(n==0){
        cout<<"The number is not power of two";
        return 0;
    }
    if((n & (n-1)) == 0){
        cout<<"the number is power of two";
    }
    else{
        cout<<"The number is not power of two";
    }


    return 0;
}