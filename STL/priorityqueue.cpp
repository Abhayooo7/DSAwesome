#include<iostream>
#include<queue>
using namespace std;

int main(){

    priority_queue<int> maxh;
    priority_queue<int, vector<int>, greater<int> > minh;

    maxh.push(1);
    maxh.push(10);
    maxh.push(11);
    maxh.push(4); 

    int n = maxh.size();

    for(int i=0;i<n;i++){
        cout<<maxh.top()<<" ";
        maxh.pop();
    }
    cout<<endl;

    minh.push(1);
    minh.push(10);
    minh.push(11);
    minh.push(4); 

    int c = minh.size();

    for(int i=0;i<c;i++){
        cout<<minh.top()<<" ";
        minh.pop();
    }
    cout<<endl;

    //empty size swap emplace

    return 0;
}