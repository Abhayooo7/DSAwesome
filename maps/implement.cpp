#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){

    //creation
    unordered_map<string,int> mp;


    //insertion

    //1
    pair<string,int> p = make_pair("abc",1);
    mp.insert(p);

    //2
    pair<string,int> pair2("a",2);
    mp.insert(pair2);

    //3
    mp["b"] = 3;


    //searching

    cout<<mp["a"]<<endl;//if the key is not present this syntax will create new entry for that key and assign 0 as its value
    cout<<mp.at("b")<<endl;//if key is not present this syntax will not create any new entry and return key not found exception

    //size

    cout<<mp.size()<<endl;

    //to check the presence

    cout<<mp.count("ac")<<endl;

    //erase
    mp.erase("b");//erases the key
    // cout<<mp.at("b")<<endl;
    cout<<mp.size()<<endl;

    //iterator

    unordered_map<string,int> :: iterator it = mp.begin();

    while(it != mp.end()){
        cout<< it->first<<" "<<it->second<<endl;
        it++;
    }


    return 0;
}