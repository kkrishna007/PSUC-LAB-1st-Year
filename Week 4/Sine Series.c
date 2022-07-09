// Evaluate the sine series, sin(x)= x- x3/3! + x5/5!–x7/7!+ ……… to n terms
// Kkrishna Saxena_210953172

#include<stdio.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             #include<stdio.h>
int main(){
float x,no,term,sum;
int n,i;
printf("enter the number of terms and angle in degree:");
scanf("%d%f",&n,&x);
no=x;
x=x*3.14/180;
term=x;
sum=x;
for(i=1;i<n;i++)
{
    term=term*(((-1)*x*x)/(2*i*(2*i+1)));
    sum+=term;
}
printf("\n sin(%f)=%f",no,sum);
return 0;

}
