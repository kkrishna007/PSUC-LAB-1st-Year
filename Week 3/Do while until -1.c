#include <stdio.h>
int main(){
    int choice, countprime=0,countcomposite=0,i,flag;
    do{
        flag=0;
        printf("Enter Num: ");
        scanf("%d",&choice);
        if (choice==-1)break;
        if (choice==1)continue;
        for(i=2;i<=choice/2;i++){
            if(choice%i==0){
                flag=1;
                break;
            }
        }
        if (flag==1)countcomposite++;
        else countprime++;
    }while(1);
    printf("Prime Numbers= %d, Composite Numbers= %d",countprime,countcomposite);
}
