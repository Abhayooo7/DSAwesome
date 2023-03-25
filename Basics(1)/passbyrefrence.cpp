#include <iostream>

using namespace std;

//functions
void swap(int *a,int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}
int inc(int a){
    a++;
    return a;
}
//functions

//main code
int main(){

    int a =5, b= 10,c=15;

    swap(&a,&b);
    inc(c);

    cout<<a<<" "<<b<<" "<<c<<" "<<inc(c);


    return 0;
}
//main code