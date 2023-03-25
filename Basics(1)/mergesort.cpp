#include<iostream>
using namespace std;


void merge(int *arr, int s,int mid, int e){

    int *mix = new int[e-s]; //declaring new array
    
    int i = s;
    int j = mid;
    int k = 0;
   
    while(i<mid && j<e){
        if(arr[i] < arr[j]){
            mix[k] = arr[i];
            i++;
        }
        else{
            mix[k] = arr[j];     
            j++;
        }
        k++;
    }

    while(i<mid){
        mix[k++] = arr[i++];
    }

    while(j<e){
        mix[k++] = arr[j++];
    }

    for(int l = 0;l<(e-s);l++){
        
        arr[s+l] = mix[l];
    }
}

void mergeSort(int *arr, int s, int e){
    if(e-s == 1){
        return ;
    }

    int mid = (s+e)/2;

    mergeSort(arr,s,mid);
    mergeSort(arr,mid,e);

    merge(arr,s,mid,e);

}

int main(){

    
int n;
    cout<<"Enter array length: ";
    cin>>n;
    int arr[n];

    cout<<"Enter the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    mergeSort(arr,0,n-1);

    cout<<endl;
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
      cout<<endl;
    return 0;
   
    
    return 0;
}