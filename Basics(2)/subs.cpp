#include<iostream>
#include <string>
using namespace std;


void subseq(string p, string up){
    if(up.empty()){
        cout<<p<<" \n";
        return;
    }
    char ch = up.at(0);

    subseq(p+ch, up.substr(1));

    subseq(p, up.substr(1));


}

int main(){

    subseq("","abc");

    return 0;
}