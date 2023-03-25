#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insertInHeap(int val){

        size = size+1;
        int index = size;

        arr[index] = val;

        while(index>1){
            int parent = index/2;

            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void deletionInHeap(){
        if(size == 0){
            cout<<"nothing to delete";
            return;
        }

        arr[1] = arr[size];
        size--;

        int i = 1;

        while(i<size){
            int left = 2*i;
            int right = (2*i)+1;

            if(left<size && arr[left]>arr[i]){
                swap(arr[left],arr[i]);
                i = left;
            }
            else if(right<size && arr[right]>arr[i]){
                 swap(arr[right],arr[i]);
                 i = right;
            }
            else{
                return;
            }
        }
    }

    void printHeap(){
        for(int i=1; i<=size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }



};

void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i +1;

    if(left<=n && arr[left]>arr[largest]){
        largest = left;   
    }
    if(right<=n && arr[right]>arr[largest]){
        largest = right;   
    }
    
    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr,n,largest); 
    }
}

void heapSort(int arr[], int n){

    int size = n;

    while(size>1){

        swap(arr[size],arr[1]);
        size--;

        heapify(arr,size,1); 
    }
}

int main(){

    heap h;

    h.insertInHeap(50);
    h.insertInHeap(55);
    h.insertInHeap(53);
    h.insertInHeap(52);
    h.insertInHeap(54);

    h.printHeap();

    h.deletionInHeap();

    h.printHeap();
    
    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;

    for(int i=n/2;i>=1;i--){
        heapify(arr,n,i);
    }

    cout<<"The array after heapify: ";
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" "; 
    }

    heapSort(arr,n);

    cout<<"The array after heap sort: ";
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" "; 
    }

    return 0;
}