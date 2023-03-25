#include<iostream>

using namespace std;

int inc(int a){
    a++;
    return a;
}

int main(){

    int a = 2;
    
    cout<<inc(a);

    return 0;
}