//Kkrishna Saxena_lab1_q5
//program to find the ASCII value of a character

#include<stdio.h>
#include<math.h>
void main()
{
float n,p,r,si,ci;
printf("Enter the value of P(principal),N (time) and R (interest rate) in the same order\n");
scanf("%f%f%f",&p,&n,&r);
si=(p*n*r)/100;
ci=p*(pow((1+r/100),n))-p;
printf("Simple interest is:%f\n",si);
printf("Compound interest is:%f",ci);
return 0;
}
