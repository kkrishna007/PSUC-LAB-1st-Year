//Program to find largest among the 3 numbers
//Kkrishna Saxena_210953172

#include<stdio.h>
void main()
{
   int a,b,c,largest;
   printf("Enter the first number:");
   scanf("%d",&a);
   printf("Enter the second number:");
   scanf("%d",&b);
   printf("Enter the third number:");
   scanf("%d",&c);
   if (a>b)
   {
       if (a>c){
            largest=a;
       }
       else{largest=c;}
   }
   else if(b>c){
            largest=b;
   }
   else {
    largest=c;
   }

   printf("The largest number = %d",largest);
}
