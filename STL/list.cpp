#include<iostream>
#include<list>
using namespace std;

int main(){

    list<int> l;

    list<int> n(l); //copying list
    list<int> m(5,100);
    l.push_back(1);
    l.push_back(2);

    l.erase(l.begin());
    l.size();

    return 0;
}