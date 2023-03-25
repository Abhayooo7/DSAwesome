#include<iostream>
using namespace std;

int main(){

    int n = 10, c= 0;

    while(n>0){
        c++;
        n -= (n & (-n));
    }
    cout<<c<<endl;

    return 0;
}
