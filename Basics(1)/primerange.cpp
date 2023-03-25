#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    bool isPrime;

    for(int i=a; i<=b; i++){
        isPrime =true;
        for(int j=2; j<= sqrt(i);j++){

            if(i%j != 0){
                continue;
            }
            isPrime =false;
            break;

        }
        if(isPrime){
            cout<<i<<" ";
        }
        
    }
    cout<<"\n";

    
    return 0;
}