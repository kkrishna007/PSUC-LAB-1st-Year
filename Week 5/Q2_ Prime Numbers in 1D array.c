// Print all the prime numbers in a given 1D array

#include <stdio.h>

int main()
{
    int i,j,n,a[20],temp,count,k=0;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the numbers : ");
    for(i=0;i<n;i++){
        scanf("%d",&temp);
        a[i] = temp;
    }
    printf("Prime numbers in the given 1D array are: ");
    for(i=0;i<n;i++)
        {
        int count = 0;
        for (j=1;j<=a[i];j++)
            {
            if(a[i]%j==0){
                count++;
            }
        }
        if(count==2)
            {
            printf("%d ",a[i]);
            k++;
        }
    }
    if(k==0){
    printf("\nNo Prime Numbers Found:( ");
    }
    return 0;
}
