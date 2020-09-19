/* Tower of Hanoi */
#include<stdio.h>
int move(int,int,int,int);
int main()
{
	int n;
	printf("Enter the number of disks at initial state:");
	scanf("%d",&n);
	move(n,1,3,2);
	return 0;
}
int move(int count,int start, int stop,int temp)
{
	if(count>0)
	{
		move(count-1,start,temp,stop);
		printf("Move disk %d from %d to %d\n",count,start,stop);
		move(count-1,temp,stop,start);
		return 0;
	}
   }
