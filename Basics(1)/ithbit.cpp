#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i;
    cout<<"Enter the bit you want to find";
    cin>>i;

    int ans = n & (1<<i);
    cout<<ans;
}