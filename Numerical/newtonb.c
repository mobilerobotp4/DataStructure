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
Enter the total number of elements given 4
Enter the value of x:
60
70
80
90
Enter the corresponding values of y:
226
250
276
304
Enter the value of x whose y is to be found: 84
y= 288.160004
execution time: 35.148s
*/
