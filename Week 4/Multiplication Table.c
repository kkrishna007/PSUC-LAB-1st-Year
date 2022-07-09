#include<stdio.h>

int main(){
int n,k,i,j;
printf("Enter the number n & number of terms k: ");
scanf("%d%d",&n,&k);
for (i=1;i<=n;i++)
{
    for (j=1;j<=k;j++)
    {
        printf("%d\t",i*j);
    }
    printf("\n");
}
return 0;
}
