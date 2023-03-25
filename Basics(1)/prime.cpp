#include <iostream>

using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool isPrime = true;

    for(int i=2; i<=sqrt(n);i++){

        if(n%i != 0){
            continue;
        }
        isPrime =false;
        break;

    }

    if(isPrime){
        cout<<"It is Prime\n";
    }
    else{
        cout<<"Not PRIME\n";
    }




    return 0;
}
