#include <iostream>

using namespace std;

int main(){

    int n;

    cout<<"Enter n: ";
    cin>>n;

    cout<<"\n";
    cout<<":: Star Diamond :: \n";
    cout<<"\n";

    for(int i = 1; i<=n; i++){

        for(int j =0 ; j<n-i; j++){
            cout<<" ";
        }
        for(int j =0; j<2*i-1; j++){
            cout<<"*";
        }
        cout<<"\n";
        
    }
    for(int i = n; i>=1; i--){

        for(int j =0; j<n-i; j++){
            cout<<" ";
        }

        for(int j = 0 ; j<2*i-1; j++){
            cout<<"*";
        }
        
        cout<<"\n";
        
    }


    cout<<"\n";
    cout<<":: Hollow Diamond :: \n";
    cout<<"\n";

    for(int i=1; i<=n; i++){

        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i-1; j++){
            if(j>0 && j<2*i-2){
                cout<<" ";
            }
            else{
            cout<<"*";
            }
        }
        cout<<"\n";
    }

    
    for(int i=n; i>=1; i--){
        
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i-1; j++){

            if(j>0 && j<2*i-2){
                cout<<" ";
            }
            else{
                cout<<"*";
            }   
        }
        cout<<"\n";
    }


    cout<<"\n";
    cout<<":: Hollow Diamond Inscribed in a Rectangle :: \n";
    cout<<"\n";

    for(int i=1;i<=n;i++){

        for(int j=1;j<=2*n-1;j++){
            if(j>n+1-i && j<n+i-1){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }

        cout<<"\n";
    }

    for(int i =n; i>=1; i--){

        for(int j=1; j<=2*n-1;j++){
             if(j>n+1-i && j<n+i-1){
                cout<<" ";
            }
            else{
                cout<<"*";
            }

        }
        cout<<"\n";
    }

    cout<<"\n";
    cout<<":: Rhombus :: \n";
    cout<<"\n";


    for(int i=1; i<=n; i++){
        for(int j =0; j<n-i; j++){
            cout<<"  ";
            
        }
        for(int j=0; j<n; j++){
            cout<<"* ";
            
        }
        cout<<"\n";
        cout<<"\n";
    }

    cout<<"\n";
    cout<<":: Hollow Rhombus :: \n";
    cout<<"\n";

    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"  ";
        }
        for(int j=0; j<n; j++){
            if(i>1 && i<n && j>0 && j< n-1){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<"\n";
        cout<<"\n";
    }


    cout<<"\n";
    cout<<":: Pyramid (Numbered) 1 :: \n";
    cout<<"\n";

    for(int i=1; i<=n; i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=1; j<=i;j++){
            cout<<" "<<i;
        }
        cout<<"\n";
        
    }


    cout<<"\n";
    cout<<":: Pyramid (Numbered) 2 :: \n";
    cout<<"\n";

    for(int i=1; i<=n; i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=1; j<=i;j++){
            cout<<" "<<j;
        }
        cout<<"\n";
        
    }


    cout<<"\n";
    cout<<":: Solid Butterfly :: \n";
    cout<<"\n";

    for(int i=1; i<=n; i++){
        for(int j=1; j<=2*n-1; j++){
            if(i<n && j>i && j< 2*n-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<"\n";
    }

    for(int i=n; i>=1; i--){
        for (int j = 1; j <= 2*n-1; j++){
            if(i<n && j>i && j< 2*n-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<"\n";      
    }


    cout<<"\n";
    cout<<":: Hollow Butterfly :: \n";
    cout<<"\n";

    for(int i=1; i<=n; i++){
        for(int j=1; j<=2*n-1; j++){
            if(i<n && j>i && j< 2*n-i){
                cout<<" ";
            }
            else{
                if(i>2 && j>1 && j<i ){
                    cout<<" ";
                }
                else{
                    if(i>2 && j>2*n-i && j<2*n-1){
                    cout<<" ";
                    }
                    else{
                        cout<<"*";
                    }
                }
            }
        }
        cout<<"\n";
    }

    for(int i=n; i>=1; i--){
        for (int j = 1; j <= 2*n-1; j++){
            if(i<n && j>i && j< 2*n-i){
                cout<<" ";
            }
            else{
                if(i>2 && j>1 && j<i ){
                    cout<<" ";
                }
                else{
                    if(i>2 && j>2*n-i && j<2*n-1){
                    cout<<" ";
                    }
                    else{
                        cout<<"*";
                    }
                }
            }
        }
        cout<<"\n";      
    }



    cout<<"\n";
    cout<<":: Zig-Zag Pattern :: \n";
    cout<<"\n";

    for(int i=1; i<=3; i++){
        for(int j=1; j<=n;j++){
            if((i+j)%4==0 || (i%2)==0 && (i+j)%2 == 0){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }


    cout<<"\n";
    cout<<":: Pascal Triangle :: \n";
    cout<<"\n";

    int coef =1;


    for(int i=0; i<n; i++){

        for(int j=0; j<n-i;j++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            if(j==0 || i==0){
                coef =1;
            }
            else{
                coef = coef* (i-j+1)/j;           
            }
            cout<<coef<< " ";
        }
        cout<<"\n";
    }


    cout<<"\n";
    cout<<":: Numbered Pattern 1 :: \n";
    cout<<"\n";

    int k=0,m=1;

    for(int i =1; i<=n; i++){
        
        k = k+m;
        m = m+2;
    
        for(int j=1;j<=i;j++){
            if(i<=4){
               cout<<k<<"   "; 
            }
            else{
            cout<<k<<"  ";
            }
            k--;
            

        }
        cout<<"\n";
    }


    cout<<"\n";
    cout<<":: Numbered Pattern 2 :: \n";
    cout<<"\n";

    int p,q;


    for(int i=1; i<=n;i++){

        p=i;
        q=2*i;

        for(int j=1; j<=i;j++){

            if(i%2 == 0){
                cout<<q<<"  ";
                q--;
            }
            else{
                cout<<p<<"  ";
                p--;

            }
        }
        cout<<"\n";
    }




    return 0;
}
