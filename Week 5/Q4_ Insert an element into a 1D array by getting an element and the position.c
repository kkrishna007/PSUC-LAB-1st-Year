// Insert an element into a 1D array by getting an element and the position from the user.

#include <stdio.h>

int main()
{   int n,a[25],temp,input,i;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the numbers : ");
    for(i=0;i<n;i++){
        scanf("%d",&temp);
        a[i] = temp;
    }
    printf("Please enter the position and value : ");
    scanf("%d%d",&i,&input);
    a[i-1]=input;
    printf("The elements of the new array are : \n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

