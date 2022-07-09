// C program to find the trace and norm of a matrix
// Trace is defined as the sum of main diagonal elements and
// norm is defined as square root of the sum of square of all the elements

// Kkrishna Saxena_210953172


#include <stdio.h>
#include <math.h>

void main ()
    {

        int arr[10][10];
        int i, j, m, n, sum = 0, sum1 = 0, a = 0;
        float norm;

        printf("Enter the order of the matrix\n");
        scanf("%d %d", &m, &n);

        printf("Enter the n coefficients of the matrix \n");
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                scanf("%d", &arr[i][j]);
                a = arr[i][j] * arr[i][j];
                sum1 = sum1 + a;
            }
        }

        norm = sqrt(sum1);
        printf("The norm of the given matrix is = %f \n", norm);
        for (i = 0; i < m; ++i)
        {
            sum = sum + arr[i][i];
        }
        printf("Trace of the matrix is = %d\n", sum);

    }
