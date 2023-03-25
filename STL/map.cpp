#include<iostream>
#include<map>

using namespace std;

int main(){

    //in map data is stored as key value pair
    map<int,string> m;

    m[1] = "abhay";
    m[2] = "mahajan";

    for(auto i : m){
        cout<<i.second<<" ";

    }



    return 0;
}