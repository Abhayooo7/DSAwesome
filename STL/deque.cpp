#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> q;

    q.push_back(1);
    q.push_front(2);

    for(int i : q){
        cout<<i;
    }
    q.pop_back();

  for(int i : q){
        cout<<i;
    }

    q.at(2);//at particular posi

    //front / back / empty / size / erase(from,to) /
    return 0;
}