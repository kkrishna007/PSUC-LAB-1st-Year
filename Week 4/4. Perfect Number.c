#include<stdio.h>
int main()
{
    int num,rem,sum=0,i;
    printf("Enter a number:\n");
    scanf("%d",&num);
    for (i=1;i<=(num-1);i++)
    {
        rem = num%i;
        if(rem==0)
        {
            sum=sum+i;
        }
    }
    if (sum==num)
        printf("Entered number is a perfect number");
    else
        printf("Entered number isn't a perfect number");
    return 0;
}
