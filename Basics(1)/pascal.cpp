#include <iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter n: ";
    cin>>n;
    
    int k=1;

    for(int i =0; i<n; i++){
        for(int j=0; j<n-i;j++){
            cout<<" ";
        }
        for(int j=0; j<=i;j++){

            if(i==0 || j==0){
                k=1;
            }
            else{
                k = k * (i-j+1)/j;
            }
            cout<<k<<" ";

        }
        cout<<"\n";
    }
    return 0;
}