// Generate Floyd’s triangle using natural numbers for a given limit N.
// Kkrishna Saxena_210953172

#include<stdio.h>

int main(){
    int num,row,col,ini=1;

    printf("Enter number of rows for floyds triangles: ");
    scanf("%d",&num);

    printf("\n");
    for(row=1;row<=num;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",ini++);
        }
        printf("\n");
    }
    return 0;
}
