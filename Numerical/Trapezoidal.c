// Trapezoidal method
#include<stdio.h>
float f(float);
int main(){
    int i,n;
    float a,b,s,s1=0,h,y[20];
    printf("Enter the lower limit=");
    scanf("%f",&a);
    printf("\n Enter the upper limit=");
    scanf("%f",&b);
    printf("\n Enter the number of interval=");
    scanf("%d",&n);
    h=(b-a)/n;
    for(i=0;i<=n;i++){
        y[i]=f(a);
        a=a+h;
    }
    for(i=1;i<=n-1;i++){
        s1=s1+y[i];
    }
    s=(y[0]+y[n]+(2*s1))*(h/2);
    printf("\n the value is %f",s);
    return(0);

}
float f(float x){
    return(1/x);
}

/*
Output:
Enter the lower limit=1

Enter the upper limit =2

Enter the number of interval=4

the value is 0.697024

execution time: 18.370s

*/
