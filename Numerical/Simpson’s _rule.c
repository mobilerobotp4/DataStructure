//Simpson's 1/3 Rule
#include<stdio.h>
float f(float);
int main(){
    int i,n;
    float a,b,s,s1=0,s2=0,h,y[20];
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
    for(i=1;i<=n-1;i+=2){
        s1=s1+y[i];
    }
    for(i=2;i<n-2;i+=2){
        s2=s2+y[i];
    }
    s=(y[0]+y[n]+(2*s2)+(4*s1))*(h/3);
    printf("\n The value is %f",s);
    return(0);
}
float f(float x){
    return(1/(1+(x*x)));
}

/*
Output:
Enter the lower limit=0
Enter the upper limit=1
Enter the number of interval=6
The value is 0.708475
execution time: 3.748s
*/
