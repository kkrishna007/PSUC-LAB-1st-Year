// Arrange the given elements in a 1D array in ascending and descending order using
// bubble sort method.

#include <stdio.h>

int main()
{   int n,a[25],temp,input,i,j;
    char order;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the numbers : ");
    for(i=0;i<n;i++){
        scanf("%d",&temp);
        a[i] = temp;
    }
    printf("Enter A for ascending order or D for descending order : ");
    scanf("%c",&order);
    switch(order)
    {
        case 'A':
            for(i=0;i<n;i++){
                for(i=0;i<n-1;i++){
                    for(j=0;j<n-i-1;j++){
                        if(a[j]>a[j+1]){
                            temp = a[j];
                            a[j]=a[j+1];
                            a[j+1]=temp;
                        }
                    }
                }
            }
            break;
        case 'D':
            for(i=0;i<n;i++){
                for(i=0;i<n-1;i++){
                    for(j=0;j<n-i-1;j++){
                        if(a[j]<a[j+1]){
                            temp = a[j];
                            a[j]=a[j+1];
                            a[j+1]=temp;
                        }
                    }
                }
            }
            break;

    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
