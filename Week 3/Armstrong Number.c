//Check if the sum of the cubes of all digits of an inputted number equals the number itself (Armstrong Number).
//Kkrishna Saxena_210953172

#include<stdio.h>
int main()
{
   int num,temp,sum=0,rem;
   printf("\nEnter a number:");
   scanf("%d",&num);
   temp = num;
   while (num != 0)
   {
      rem = num % 10;
      sum = sum + (rem*rem*rem);
      num = num / 10;
   }
   if(temp == sum)
      printf("\n%d is an Armstrong Number",temp);
   else
      printf("\n%d is not an Armstrong Number",temp);
   return(0);
}
