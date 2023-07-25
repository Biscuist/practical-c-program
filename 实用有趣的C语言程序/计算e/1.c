/*1.c  用公式(1＋1/1!+1/2!+...)计算e */
#include <stdio.h>
#include <math.h> 
int factorial(int);
void main()
{
int i;
double sum1=0.0;
for (i=0;i<=12;i++){
sum1=sum1+(1.0/factorial(i));
printf(" %d %d %f\n",i,factorial(i),sum1);
}
}
int factorial(int j) 
{ 
int sum;
if (j==0)
	sum=1;
	else
	sum=j*factorial(j-1);
	return(sum);
}