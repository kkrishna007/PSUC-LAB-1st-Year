                                                                                                                                                                                                                                                  //Kkrishna Saxena_lab1_q2
//program to find sum,difference, product and quotient
#include<stdio.h>

int main()
{   int a, b, sum, difference, product, quotient;
    printf("Please enter the first number");
    scanf("%d",&a);
    printf("Please enter the second number");
    scanf("%d", &b);

    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;

    printf("The sum is %d\n", sum);
    printf("The difference is %d\n", difference);
    printf("The product is %d\n", product);
    printf("The quotient is %d\n", quotient);
    return 0;

}


