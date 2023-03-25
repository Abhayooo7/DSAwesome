#include<iostream>
#include<array>
using namespace std;

int main(){

    array<int,4> a = {1,2,3,4}; //static array

    int s = a.size();

    for(int i=0;i<s;i++){
        cout<<a[i]<<endl;
    }

    cout<<a.at(1);
    cout<<"empty or not"<<a.empty();
    cout<<"first"<<a.front()<<endl;
    cout<<"last"<<a.back()<<endl;
    




    return 0;
}