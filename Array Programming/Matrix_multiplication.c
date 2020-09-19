#include<stdio.h>
#include<conio.h>
// dimensions of input and output matrix
# define M 3
# define N 4
# define P 5

int main()
{
	int a[M][N],b[N][P],c[M][P];
	int i,j,sum,k;
  // take input for matrix A
	printf("Enter the matrix A :\n");
	for(i=0;i<M;i++) 
	{
		for(j=0;j<N;j++)
		{
			printf("Enter [%d][%d]th element: ",i,j);

  			  scanf("%d",&a[i][j]);
		}
	}
//take input for matrix B
printf("Enter the matrix B :\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<P;j++)
		{
			printf("Enter the [%d][%d]th element: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0;i<M;i++)
	{
		for(j=0;j<P;j++)
		{
			sum=0;
			for(k=0;k<N;k++)
				sum=sum+a[i][k]*b[k][j];
			c[i][j]=sum;
		}
	}

//Display Matrix A
 	printf("Matrix A is as follows :\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}
// Display Matrix B
printf("Matrix B is as follows :\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<P;j++)
		printf("%d\t",b[i][j]);
		printf("\n");
	}
  
  // Resultant matrix

printf("Matrix C is as follows :\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<P;j++)
		{

printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}

/*
Enter the matrix A:
Enter [0][0]th element element: 1
Enter [0][1]th element element: 2
Enter [0][2]th element element: 3
Enter [0][3]th element element: 4
Enter [1][0]th element element: 5
Enter [1][1]th element element: 6
Enter [1][2]th element element: 7
Enter [1][3]th element element: 8
Enter [2][0]th element element: 9
Enter [2][1]th element element: 10
Enter [2][2]th element element: 11
Enter [2][3]th element element: 12
Enter the matrix B:
Enter [0][0]th element element: 12
Enter [0][1]th element element: 11
Enter [0][2]th element element: 10
Enter [0][3]th element element: 9
Enter [0][4]th element element: 8
Enter [1][0]th element element: 7
Enter [1][1]th element element: 6
Enter [1][2]th element element: 5
Enter [1][3]th element element: 4
Enter [1][4]th element element: 3
Enter [2][0]th element element: 2
Enter [2][1]th element element: 1
Enter [2][2]th element element: 5
Enter [2][3]th element element: 6
Enter [2][4]th element element: 8
Enter [3][0]th element element: 1
Enter [3][1]th element element: 2
Enter [3][2]th element element: 4
Enter [3][3]th element element: 7
Enter [3][4]th element element: 9

Matrix A is as follows:

1   2   3   4
5   6   7   8
9   10  11  12

Matrix B is as follows:

12    11    10    9   8
7     6     5     4   3
2     1     5     6   8 
1     2     4     7   9

Matrix C is as follows :
36    34    51    63    74
124   114   147   167   186
212   194   243   271   298 

Execution time: 1357.660s


*/
