#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int x = n&1;

    if(x==1){
        cout<<"The given number id ODD"<<endl;
    }
    else{
        cout<<"The given number is EVEN"<<endl;
    }

    return 0;
}