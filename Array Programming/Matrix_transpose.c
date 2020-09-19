
/*Transpose of a square matrix*/
#include<stdio.h>
# define R 3
# define C 3

int main(){
	  int a[R][C],b[C][R];
	  int i,j;
    printf("Enter the matrix A: \n");
	  for(i=0;i<R;i++){
		  for(j=0;j<C;j++){
			  printf("Enter the [%d][%d]th element: ",i,j);
			  scanf("%d",&a[i][j]);
		}
	}
  display(a);
	for(i=0;i<R;i++){
      for(j=0;j<C;j++){
        b[j][i]=a[i][j];
        }
  }
	display(b);
	return(0);
}
int display(x)
int x[R][C];{
	int i,j;
	printf("Transpose of the matrix:\n");
	for(i=0;i<R;i++){
		for(j=0;j<C;j++){
         printf("%d\t",x[i][j]);
		}
    printf("\n");
}
	return(0);

 }
 
 /*
 Output:
 Enter the matrix A:
 Enter the [0][0]th element: 0
 Enter the [0][1]th element: 1
 Enter the [0][2]th element: 3
 Enter the [1][0]th element: 2
 Enter the [1][1]th element: 1
 Enter the [1][2]th element: 5
 Enter the [2][0]th element: 7
 Enter the [2][1]th element: 8
 Enter the [2][2]th element: 4
 
 Enter the matrix:
 0    1   3
 2    1   5
 7    8   4
 
 Transpose of the matrix:
 0    2   7
 1    1   8 
 3    5   4
 
 Execution time: 16.561s
 */
