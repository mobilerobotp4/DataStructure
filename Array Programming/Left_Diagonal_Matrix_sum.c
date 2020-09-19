#include<stdio.h>
int main()
{
    int arr[20][20];
    int i,j,l_sum=0,n=0;
    printf("Enter the dimension of the matrix:");
    scanf("%d",&n);
    printf("\nENTER THE VALUE IN ARRAY:");
    for(i=0;i<=n;i++)
        {
            for(j=0;j<=n;j++)
            scanf("%d",&arr[i][j]);
        }
    printf("The matrix is :\n");
    for(i=0;i<=n;i++)
        {
            for(j=0;j<=n;j++)
            printf("% 4d",arr[i][j]);
            printf("\n");
        }
        l_sum=0;
        for(i=0;i<=n;i++)
            {
                for(j=0;j<=n;j++)
                {
                    if ( i == j){
                        printf ("%d\t",arr[i][j]);
                        l_sum = l_sum + arr[i][j];
                    }
                }
            }

  printf("Sum Of Left diagonal is :%d\t", l_sum);
  return 0;
}
