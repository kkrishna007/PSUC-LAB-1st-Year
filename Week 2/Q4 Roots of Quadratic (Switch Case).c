//Comput6e all roots of quadratic equation using switch case statement
//Kkrishna Saxena_21095317

#include <stdio.h>
void main()
{
   int a,b,c,x;
   float r1,r2,re,im,D;
   printf("Enter the coefficients(a,b,c): ");
   scanf("%d%d%d",&a,&b,&c);
   D=b*b-4*a*c;
   if(D==0)x=1;
   if(D>0)x=2;
   if(D<0)x=3;
   switch(x){

        case 1:
            r1=-b/(2*a);
            printf("Roots are real and equal\n");
            printf("Root1=Root2=%f\n",r1);
            break;
        case 2:
            r1=(-b+sqrt(D))/(2*a);
            r2=(-b-sqrt(D))/(2*a);
            printf("Roots are real and unequal\n");
            printf("Root1=%f\n",r1);
            printf("Root2=%f\n",r2);
            break;
        case 3:
            re=-b/(2*a);
            im=sqrt(-D)/(2*a);
            printf("Roots are imaginary\n");
            printf("Root1=%f+i%f\n",re,im);
            printf("Root2=%f-i%f\n",re,im);
            break;

    }
return 0;
}
