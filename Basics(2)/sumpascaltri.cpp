#include<iostream>
using namespace std;

int main(){

    int n = 5;
    // cin>>n;

    for(int i=1; i<=n;i++){
            for(int j=0;j<i;j++){
                
                cout<<(1<<(i-1));
            }
            cout<<endl;
    }

    return 0;
}