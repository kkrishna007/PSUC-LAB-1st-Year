//Reverse a given number and check if it is a palindrome or not. (use while loop).
//Kkrishna Saxena_210953172

#include <stdio.h>

void main()
{
    int num, temp, remainder, reverse = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);
    /*  original number is stored at temp */
    temp = num;
    while (num > 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    printf("Given number is = %d\n", temp);
    printf("Its reverse is  = %d\n", reverse);
    if (temp == reverse)
        printf("Number is a palindrome \n");
    else
        printf("Number is not a palindrome \n");
}
