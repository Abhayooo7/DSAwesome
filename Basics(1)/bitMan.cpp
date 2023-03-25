#include<iostream>
using namespace std;

int getBit(int n, int i){
    return((n & (1<<i))!=0);
}
int setBit(int n, int i){
    return(n|(1<<i));
}
int clearBit(int n, int i){
    int inv  = ~(1<<i);
    return(n&inv);
}
int updateBit(int n,int i,int value){
    int inv = ~(1<<i);
    n = n&inv;
    return((n|(value<<i)));
}
int main(){
    
    cout<<getBit(7,2);
    cout<<setBit(8,1);
    cout<<clearBit(6,1);
    cout<<updateBit(5,1,1);

    return 0;
}