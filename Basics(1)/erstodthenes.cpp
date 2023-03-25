#include<iostream>
using namespace std;

void primeSieve(int n){

    int arr[100] = {0};

    for(int i=2;i<=n;i++){
        if(arr[i] == 0){
            for (int j = i*i; j<=n; j+=i)
            {
                arr[j] = 1;
            }
        }
    }
    for(int i =2;i<=n;i++){
        if(arr[i] == 0){
            cout<<i<<" ";
        }
    }
}

void spf(int n){

    int arr[100] = {0};

    for(int i=2;i<=n;i++){
        arr[i]=i;
    }

    for(int i=2;i<=n;i++){
        if(arr[i] == i){
            for (int j = i*i; j<=n; j+=i){
                if(arr[j] == j)
                {
                    arr[j] = i;
                }
        }   }
    }
    while(n!=1){
        cout<<arr[n]<<"\n";
        n=n/arr[n];
    }


}

void gcd(int a,int b){

    
    while(b!=0){
    int rem = a%b;
    a=b;
    b=rem;
    }
    cout<<a;
    
}


int main(){

   int a,b;
   cin>>a>>b;
//    primeSieve(50);
//    spf(n);
    gcd(a,b);
    return 0;
}