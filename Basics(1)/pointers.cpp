#include <iostream>

using namespace std;

int main(){

    // int arr[] = {1,2,3,4,5};
    int i=0;
    int *ptr = &i;
    int **q = &ptr;

    cout<<ptr<<"\n";        //address of i;
    cout<<q<<"\n";          //adress of ptr;
    cout<<*ptr<<"\n";       //value of i;
    cout<<*q<<"\n";         //value of ptr which is address of i;
    cout<<**q<<"\n";        //value of i by refrencing q twice;
    cout<<&ptr<<"\n";       // adress of ptr;
    cout<<&i<<"\n";

    // // while(i<5){
    // //     cout<<*(arr+i);
    // //      i++;
    // // }

    // int a =10;
    // int *ptr;
    // ptr = &a;

    // cout<<ptr<<"\n";
    // cout<<*ptr<<"\n";

    // ptr++;

    // cout<<ptr<<"\n";
    // cout<<*ptr<<"\n";


    // int arr[] = {1,2,3,4,5,6};

    // int *ptr = arr;
    // *(ptr+2) = 4;

    // for(int i=0;i<6;i++){
    //     cout<<*(ptr++)<<"\n";
    // }


    return 0;
}