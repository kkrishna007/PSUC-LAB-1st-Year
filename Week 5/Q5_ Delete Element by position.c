// Search the position of the number that is entered by the user and delete that
// particular number from the array and display the resultant array elements.

#include <stdio.h>

int main()
{   int n,a[20],b[20],temp,input,i,pos,r,order;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the numbers : ");
    for(i=0;i<n;i++){
        scanf("%d",&temp);
        a[i] = temp;
    }
    printf("Enter the position to be removed :");
    scanf("%d",&pos);
    pos=pos-1;
    order = 0;
    for(i=0;i<n;i++){

        if(a[i]!=a[pos]){
            b[order]=a[i];
            order++;
        }

    }
    printf("New array is :");
    for(i=0;i<order;i++){
        printf("%d ",b[i]);
    }
    return 0;
}

