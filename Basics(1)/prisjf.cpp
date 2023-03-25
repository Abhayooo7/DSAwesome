#include <iostream>
#include<climits>
using namespace std;

int smallest(int arr[],int n){
    int smallest = INT_MAX;
    int index = 0;
    int i=0;
    for(i=0;i<=n;i++){
        if(arr[i] != 0){
            if(arr[i]<smallest){
            smallest = arr[i];
            index=i;
            }
        }
    }
    return index;
}

int main(){

    int pno;
    cout<<"Enter the number of processes: ";
    cin>>pno;
    int at[pno];
    int bt[pno];
    int rt[pno];
    int ct[pno];
    int tat[pno];
    int wt[pno];
    

    cout<<"Enter the arrival time of processes: ";
    for(int i=0;i<pno;i++){
        cin>>at[i];
    }
    cout<<"Enter the burst time of processes: ";
    for(int i=0;i<pno;i++){
        cin>>bt[i];
        rt[i] = bt[i];
    }
    for(int i=0;i<pno;i++){
        ct[i]=0;
    }
    int ctt=0;
    int i=0;

   
    while(ctt<at[pno-1]){
    if(i==0){
        int x = at[i+1]-at[i];
        while(x != 0){
        rt[i]--;
        ctt++;
        ct[i]=ctt;
        x--;
        }
        if(ctt>=at[i+1]){
        i++;
        }
    }
    else{
        int u=smallest(rt,i);
        int x = at[u+1]-at[u];
        while(x != 0 && rt[u] !=0 && ctt<at[i+1]){
            rt[u]--;
            ctt++;
            ct[u]=ctt;
            x--;
        }
        if(ctt>=at[i+1]){
        i++;
        }
}
    
    }
    int flag = 0;
    while(flag != 1){
        int s = smallest(rt,pno-1);
        while(rt[s]!=0){
            rt[s]--;
            ctt++;
            ct[s]=ctt;
        } 

        for(int i=0;i<pno;i++){
            if(rt[i]!=0){
                flag = 0;
                break;
            }
            flag=1;
        }

    }

   cout<<"Turn-Around Time:";
    for(int i=0;i<pno;i++){
          tat[i]=ct[i]-at[i];
          cout<<tat[i]<<" ";
    }
    cout<<"\n";
    cout<<"Wating Time: ";
    for(int i=0;i<pno;i++){
        wt[i]=tat[i]-bt[i];
        cout<<wt[i]<<" ";
    }
     cout<<"\n";
    

     

    
   

   
    return 0;
}