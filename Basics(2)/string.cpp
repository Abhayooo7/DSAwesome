#include <iostream>
#include <string>
#include<algorithm>

using namespace std;

int main(){

    string s = "fffffggggg";

    int arr[26];

    for(int i=0;i<26;i++){
        arr[i] = 0;
    }

    for(int i =0;i<s.length();i++){
        arr[s[i]-'a']++;
    }
    char ans = 'a';
    int maxF = 0;

    for(int i=0;i<26;i++){
        if(maxF < arr[i]){
            maxF = arr[i];
            ans = i+'a';
        }
    }

    cout<<maxF<<" "<<ans<<"\n";

    



    return 0;
} 