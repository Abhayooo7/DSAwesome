#include <iostream>

using namespace std;

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"Triangle\n";
    cout<<"\n";

    for(int i =0; i<n; i++){
        for(int j=0; j<=i;j++){

            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"\n";
    cout<<"Inverted Triangle\n";
    cout<<"\n";

    for(int i =0; i<n; i++){
        for(int j=0; j<n-i;j++){

            cout<<"*";
        }
        cout<<"\n";
    }

    cout<<"\n";
    cout<<"180 rot. Triangle\n";
    cout<<"\n";

    for(int i =0; i<=n; i++){
        for(int j=0; j<=n-i;j++){

            cout<<" ";
        }
         for(int j=0; j<i;j++){

            cout<<"*";
        }
        
        cout<<"\n";
    }
    cout<<"\n";
    cout<<"Number Triangle\n";
    cout<<"\n";

    for(int i=0; i<=n; i++){

        for(int j=1; j<=i ; j++){
            cout<<j;
        }
        cout<<"\n";
    }

    cout<<"\n";
    cout<<"Inverted Number Triangle\n";
    cout<<"\n";

    for(int i =0; i<n; i++){

        for(int j =1; j<=n-i; j++){
            cout<<j;
        }
        cout<<"\n";
        
    }

    cout<<"\n";
    cout<<"Inverted Number Triangle-2\n";
    cout<<"\n";

    for(int i =1; i<=n; i++){

        for(int j =0; j<=n-i; j++){
            cout<<i;
        }
        cout<<"\n";
        
    }

    cout<<"\n";
    cout<<"Number Triangle -2 \n";
    cout<<"\n";

    for(int i=1; i<=n; i++){

        for(int j=1; j<=i ; j++){
            cout<<i;
        }
        cout<<"\n";
    }

    cout<<"\n";
    cout<<"Floyd Triangle \n";
    cout<<"\n";

    int k =1;

    for(int i=0; i<n; i++){
        for(int j =0; j<=i; j++){
            cout<<k<<" ";
            k++;

        }
        cout<<"\n";
    }

    cout<<"\n";
    cout<<"0-1 Triangle  \n";
    cout<<"\n";

    for(int i =0; i<n;i++){

        for( int j =0; j<=i;j++){
            if((i+j)%2 == 0 ){
                cout<<1<<" ";
            }
            else{
                cout<<0<<" ";
            }

        }
        cout<<"\n";
    }

    cout<<"\n";
    cout<<"Palindromic Triangle  \n";
    cout<<"\n";


    for(int i=1; i<=n; i++){

        for(int j = 0; j<n-i ; j++){
            cout<<"  ";
        }
        for(int j = i; j>=1; j--){
            cout<<j<<" ";
        }
        for(int j = 2; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }         

    


    return 0;
}