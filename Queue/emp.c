#include<stdio.h>

struct employee{
    int id;
    char name[20];
    char address[50];
};


int main(){
    int i,n;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    struct employee emp[n];
    printf("Enter employee info as id , name , address\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %s %s",&emp[i].id,emp[i].name,emp[i].address);
    }
    printf("\nEMP_NAME\tEMP_NAME\tEMP_ADRESS\t\n");
    for(i=0;i<n;i++)
    {
        for(int j=1;j<n;j++){
            if(emp[i].name[0]>emp[j].name[0]){
                struct employee temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
        printf("%d\t\t%s\t\t%s\t\n",emp[i].id,emp[i].name,emp[i].address);
    }

    return 0;
}