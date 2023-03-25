#include <iostream>
#include <math.h>
#include <deque>
using namespace std;



int main(){

    deque<int> d;

    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(4);

    for(auto i : d){
        cout<<i<<" ";
    }



    return 0;
}