//Swap two numbers without using third variable
//Kkrishna Saxena_21095317

#include <stdio.h>
void main()
{
int x,y;
printf("Enter two numbers: ");
scanf("%d%d",&x,&y);
printf("Numbers before swap:%d\t%d",x,y);
x=x+y;
y=x-y;
x=x-y;
printf("\n Numbers after swap:%d\t%d",x,y);
}
