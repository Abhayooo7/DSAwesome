#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v(5,1); // 5->size, 1-> initialize with 1
    //capacity == memory allocated;
    //size == elements present currently

    cout<<v.capacity();
    //its capacity gets doubled every time new element added to it and it does not have any space
    v.push_back(2);
    v.pop_back();
    v.clear();
    return 0;
}