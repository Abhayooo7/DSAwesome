#include<iostream>
using namespace std;

float NRM(float n){
    float x = n;
    float root;
    while(true){
        root = 0.5 *(x+(n/x));

        if(abs(root-x)<0.5)
            break;

        x = root;
    }
    return root;
}
int main(){

   cout<<NRM(40)<<endl;

    return 0;
}