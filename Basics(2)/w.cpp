#include <iostream>

using namespace std;

int raise(int n, int p){

    if(p==0){
        return 1;
    }
    int prod = raise(n,p-1);
    return n*prod;
}
int factorial(int n){
    if (n==0)
    {
        return 1;
    }
    
    int fac = factorial(n-1);
    return n*fac;
}
int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}

int main(){

    cout<<fib(7);

    return 0;
}