#include<iostream>

using namespace std;

int main(){

    int n;

    cout<<"Enter array size: ";
    cin>>n;
    cin.ignore();            //to clear the buffer so as to get a valid char input as enter is also a valid input for char

    char arr[n+1];

    cin.getline(arr,n);     //to get a line as an input which includes spaces also
    cin.ignore();           //to clear the buffer so as to get a valid char input as enter is also a valid input for char

    int i=0;

    int cLen = 0, maxLen =0,st=0,en=0;

    while(1){

        if(arr[i] == ' ' || arr[i] == '\0' ){
            if(cLen>maxLen){
                maxLen = cLen;
                en =st;
            }
            cLen = 0;
            st = i+1;
        }
        else
        cLen++;

        if(arr[i] == '\0'){
            break;
        }
        i++;
    }

    cout<<maxLen<<"\n";
    for(int i=0; i<maxLen;i++){
        cout<<arr[i+en];
    }
    
    cout<<"\n";
    


    return 0;
}