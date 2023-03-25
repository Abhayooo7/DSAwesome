#include <iostream>
using namespace std;

void sieve(int n, bool notPrime[]){

    for(int i=2; i*i <= n ; i++){
        if(!notPrime[i]){
            for(int j=2*i; j<=n;j+=i){
                notPrime[j] = true;
            }
        }
    }
    for(int i=2; i<=n ; i++){
        if(!notPrime[i]){
            cout<<i<<" ";
        } 
    }
}

int main(){

    int n = 5s0;
    bool notPrime[n+1];

    
    for (int i=0;i<=n;i++){
            notPrime[i] = false;
    }
    sieve(n,notPrime);


    return 0;
}