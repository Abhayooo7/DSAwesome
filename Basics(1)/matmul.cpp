#include <iostream>
using namespace std;

int main(){

    int r1,c1,r2,c2,sum=0;

    cout<<"Enter rows and cols of first matrix: ";
    cin>>r1>>c1;

    cout<<"Enter rows and cols of second matrix: ";
    cin>>r2>>c2;

    int m1[r1][c1];
    int m2[r2][c2];
    int m3[c1][r2];

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>m1[i][j];
        }
    }

    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>m2[i][j];
        }
    }

    if(c1 == r2){

        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                for(int k=0;k<c2;k++){
                    sum += m1[i][k] * m2[k][j];
                }
                m3[i][j] =sum;
                sum =0;
            }
        }
            

        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                cout<<m3[i][j]<<" ";
            }
            cout<<"\n";
        }

    }
    else{
        cout<<"NOT MULTIPLICABLE\n";
    }




    return 0;
}