// Find the largest and smallest element in a 1D array.

#include <stdio.h>

int main()
{
    int i,j,n,a[20],temp,largest,smallest;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the numbers : ");
    for(i=0;i<n;i++){
        scanf("%d",&temp);
        a[i] = temp;
    }
    largest = a[0];
    smallest = a[0];
    for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(a[i]<a[j] && largest<a[j]){
                    largest = a[j];
                }else if(a[i]>a[j] && smallest>a[j]){
                    smallest= a[j];
                }
            }

    }
    printf("Largest Number : %d, Smallest Number : %d",largest,smallest);
    return 0;
}
