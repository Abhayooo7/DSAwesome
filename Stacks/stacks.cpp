#include <iostream>
using namespace std;

#define n 100

class stack{

    int* arr;
    int top;

    public:
    stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int x){
        if(top == n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop(){
        if(top == -1){
            cout<<"No Element to POP"<<endl;
            return;
        }
        top--;
    }

    int Top(){
        if(top == -1){
            cout<<"No Element in Stack"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        return top == -1;
    }

    
};



int main(){

    stack st;
    




    return 0;
}