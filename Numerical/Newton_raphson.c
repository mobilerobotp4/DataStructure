//Newton Raphson method
#include<stdio.h>
#include<math.h>
#define  f(x)(x * sin(x)+cos(x))
#define df(x)(x*cos(x))
int main()
{
float x,h,e;
e=0.0001;
printf("Enter the initial value of x:\n");
scanf("%f",&x);
do
{
h=-f(x)/df(x);
x=x+h;
}
while(fabs(h)>e);
printf("The value of the root is=%f",x);
return(0);
}
/*
Output:
Enter the initial value of x: 3
The value of the root is = 2.798386
execution time 6.165s
*/
