// Convert Binary number to decimal number 
#include<math.h>
#include<stdio.h>
#include <conio.h>

int q[6],f,r;

int main()
{
   int a,v,i,m,sum=0;
   f=r=-1;
   for(i=0;i<=5;i++)
   {
	   scanf("%d",&v);
	   if (v==1 || v==0){
		   addq(v);
	   }
	   else{
		   printf("wrong input")
			   exit(0);
	   }
   }
	for(i=5;i>=0;i--)
	{
		a=delq();
		m=pow(2,i);
		sum=sum+a*m;
	}
	printf("DECIMAL NO.IS:%d",sum);
	return 0;
}

addq(int ele)
{
   if(r==5)
      printf("QUEUE FULL");
   else
   {
      r++;
      q[r]=ele;
      if(f==-1)
	f=0;
    }
}

delq()
{
  int ele;
  if(f==-1)
     printf("QUEUE EMPTY");
  else
  {
     ele=q[f];
     if(f==r)
       f=r=-1;
     else
       f++;
     return(ele);
  }
}

/*
Output:
1
0
1
0
1
1
Decimal No. is: 43
Execution time: 10.179s

*/

