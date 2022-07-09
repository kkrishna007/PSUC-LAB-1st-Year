#include<stdio.h>

int main()
{
    int m,n,i,j,no,count=0;
    int a[10][10];
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the Matrix\n");
         for(i=0;i<m;i++)
           {
             for(j=0;j<n;j++)
             scanf("%d",&a[i][j]);
           }
     printf("The matrix is :\n");
         for(i=0;i<m;++i)
           {
             for(j=0;j<n;++j)
                 printf("%d\t",a[i][j]);
             printf("\n");
           }
    printf("Enter the number to be counted :");
    scanf("%d",&no);
         for(i=0;i<m;i++)
           {
             for(j=0;j<n;j++)
             {
                 if(a[i][j]==no)
                    count++;
             }}
    printf("%d occurred %d\ times in the matrix\n",no,count);
    return 0;
}
