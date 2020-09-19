#include<stdio.h>
int main()
{
    int arr[20][20];
    int i,j,n,l_sum=0;
    printf("Enter the dimension of the matrix");
    scanf("%d",&n);
    printf("\nEnter the value in the array:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
         }
    }
    printf("The matrix is :\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                printf("% 4d",arr[i][j]);
            }
            printf("\n");
    }
   for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j<i){
                    printf("%d\t",arr[i][j]);
                l_sum=l_sum+arr[i][j];
            }
        }
    }
    printf("Sum of lower matrix:%d",l_sum);
    return(0);
}

/*
Enter the dimension of the matrix: 4
Enter the value in the array: 2
3
1
4
8
2
3
1
7
5
1
0
2
6
4
2
The matrix is:
2   3   1   4
8   2   3   1
7   5   1   0
2   6   4   2

8     7     5     2     6     4
Sum of lower matrix: 32
Execution time: 29.133s
*/
