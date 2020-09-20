/*Newton banckward interpolation formula*/
#include<stdio.h>

int main()
{
	int i,j,n,p;
	float x[25],q,u,a,sum,h,y[25][25];

	printf("Enter the total of element given");
	scanf("%d",&n);
	printf("Enter the value of x:\n");
	for(i=0;i<n;i++)
	scanf("%f",&x[i]);
	printf("Enter the corresponding values of y:\n");
	for(i=0;i<n;i++)
	scanf("%f",&y[i][0]);
	printf("Enter the value of x whose y is to be found");
	scanf("%f",&a);
	for(j=1;j<n;j++)
	{
		for(i=j;i<n;i++)
		y[i][j]=y[i][j-1]-y[i-1][j-1];
	}
	h=x[1]-x[0];
	u=(a-x[n-1])/h;
	sum=y[n-1][0];
	p=q=1;
	for(j=1;j<n;j++)
	{
		p=p*j;
		q=q*(u+j-1);
		sum=sum+q*y[n-1][j]/p;
	}
	printf("a=%f,sum=%f",a,sum);
	return(0);
}
/*
Output:
Enter the total no. of elements: 6
Enter the value of x:
0
1
2
3
4
5
Enter the corresponding values of y:
1
5
31
121
341
781
Enter the value of x whose y is to be found: 1.5
a=1.500000, sum= 13.1875000
execution time: 35.148s
*/
