// Write a program using do-while loop to read the numbers until -1 is encountered.
// Also count the number of prime numbers and composite numbers entered by user.
// Kkrishna Saxena_210953172

#include <stdio.h>

int main() {
    int choice, countprime=0,countcomposite=0,i,flag;
    do{
        flag=0;
        printf("\nenter num : ");
        scanf("%d",&choice);
        if (choice==-1) break;
        if (choice ==1) continue;
        for (i=2;i<=choice/2;i++){
            if(choice%i==0){
                flag=1;
                break;
            }
        }
        if (flag==1)countcomposite++;
        else countprime++;
    }while(1);
    printf("\nprime = %d", countprime);
    printf("\ncomposite = %d",countcomposite);

}
