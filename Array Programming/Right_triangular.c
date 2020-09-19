/*Find the sum of the right diagonal of a square matrix*/
#include<stdio.h>
int main()
{
    int arr[20][20];
    int i,j,R_sum=0,n=0;
    printf("Enter the dimension of the matrix:");
    scanf("%d",&n);
    printf("\nEnter the value of the array:");
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
        }
    printf("The matrix is :\n");
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            printf("% 4d",arr[i][j]);
            printf("\n");
        }
        R_sum=0;
        for (i = 0; i < n; ++i)
            {

                R_sum = R_sum + arr[i][n - i-1];
                printf("%d\t",arr[i][n - i - 1] );
            }
        printf("\n The sum of the off diagonal elements is   = %d\n", R_sum);
        return (0);

}
/*
Enter the dimension of the matrix: 3
Enter the value of the array: 0
1
2
9
4
5
0
1
2
The matrix is:
0   1   2
9   4   5
0   1   2


2   4   0

The sum of the off diagonal elements is = 6
Execution time : 10.636s
*/
