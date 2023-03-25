#include<iostream>

using namespace std;

int linearsearch1(int arr[], int key){


    for(int i=0;i<5;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){

    int arr[5] = {45,21,5,66,92};
    int key = 5;
    cout<<linearsearch1(arr,key);

    return 0;
}