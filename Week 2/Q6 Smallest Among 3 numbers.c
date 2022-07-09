#include<stdio.h>
int main(){

    int a,b,c,X;

    printf("Enter the three numbers: \n");
    scanf("%d%d%d",&a,&b,&c);

    X=(a<b&&a<c)?(a):(b<c)?(b):(c);

    printf("%d is the smallest",X);
    return 0;

    }
