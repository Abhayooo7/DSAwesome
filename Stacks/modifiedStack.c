#include <stdio.h>

int MAXSIZE = 8;       
int stack[8];     
int top = -1;            

int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}
   
int isfull() {

   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}

int peek() {
   return stack[top];
}

int pop() {
   int data;
	
   if(!isempty()) {
      data = stack[top];
      top = top - 1;   
      return data;
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
   }
   return 0;
}

int push(int data) {

   if(!isfull()) {
      top = top + 1;   
      stack[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
   return 0;
}
int getMin(){
    int temp  = top;
    int min = stack[temp];
    while(temp > 0){
        if(stack[temp]<min){
            min = stack[temp]; 
        }
         temp--;
    }
    return min;
}
int getMax(){
    int temp  = top;
    int max = stack[temp];
    while(temp > 0){
        if(stack[temp]>max){
            max = stack[temp]; 
        }
         temp--;
    }
    return max;
}
void getMiddle(){
    int arr[top];
    for(int i =0;i<top;i++){
        arr[i] = stack[i];
    }
    int count =1;
    while(count<top){
        for(int i=0;i<top-count;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] =temp;
            }
        }
        count++;
    }
    printf("%d\n",arr[top/2]);
}

int main() {
   push(3);
   push(5);
   push(9);
   push(1);
   push(12);
   push(15);
   push(11);

    printf("%d\n",getMin());
    printf("%d\n",getMax());
    getMiddle();
   
   return 0;
}