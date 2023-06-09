#include<iostream>
using namespace std;

float binarySearchSqrt(int n, int p){

    int s = 0;
    int e = n-1;
    float root = 0.0;

    while(s<=e){
        int m = s + ((e-s)/2) ;

        if(m * m == n){
         root = m;
         break;
        }
        else if(m * m < n){
            s = m+1;
            root = m;
        }
        else{
            e = m-1;
        }
    }
    
    float incr = 0.1;
    for(int i=0;i<p;i++){
        while(root*root<=n){
            root += incr;
        }
        root -= incr;
        incr = incr/10;
    }
    return root;
}

int main(){
    int n = 40;
    int p = 3;

    cout<<binarySearchSqrt(n,p)<<endl;
    return 0;
}