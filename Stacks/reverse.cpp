#include <iostream>
#include<stack>
using namespace std;

void reverseSentence(string s){
    stack<string> st;

    for(int i=0; i<s.length();i++){
        string word = "";

        while(s[i] != ' ' && i<s.length()){
            word += s[i];
            i++;
        }
        st.push(word);

    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}

void insertAtBottom(stack<int> &st,int element){
    
    if(st.empty()){
        st.push(element);
        return;
    }
    int topele = st.top();
    st.pop();
    insertAtBottom(st,element);
    st.push(topele);

}

void reverseStack(stack<int> &st){
    
    if(st.empty()){
        return;
    }
    int element = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st,element);
    
}

int main(){

    string s = "Hey, are you there?";
    reverseSentence(s);
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverseStack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return 0;
}
