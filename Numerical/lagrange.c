/* Lagrange's Interpolation Formula */
#include<stdio.h>

int main()
{
	int i,j,n;
	float x[25],a,p,q,sum=0,y[25];
	printf("Enter the total elements given:\n");
    scanf("%d",&n);
	printf("Enter the values of x:\n");
	for(i=0;i<n;i++)
	scanf("%f",&x[i]);
	printf("Enter the corresponding values of y:\n");
	for(i=0;i<n;i++)
	scanf("%f",&y[i]);
	printf("Enter the value of x whose y is to be found:");
	scanf("%f",&a);
	for(i=0;i<n;i++)
	{
		p=q=1;
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
				p=p*(a-x[j]);
				q=q*(x[i]-x[j]);
			}
		}
		sum=sum+p/q*y[i];
	}
	printf("a=%f,sum=%f",a,sum);
	return(0);
}
/*
Output:
Enter the total elements given:
4
Enter the values of x:
5
6
9
11
Enter the corresponding values of y:
12
13
14
16
Enter the value of x whose y is to be found: 10
a=10.000000, sum= 14.666666
execution time: 212.582s
*/
