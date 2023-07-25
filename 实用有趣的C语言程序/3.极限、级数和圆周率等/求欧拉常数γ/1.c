/*1.c 用求极限的方法计算γ值 */
#include <stdio.h>
#include <math.h> 
void main()
{
int i;
double sum1,sum2;
sum1=0.0;
for (i=1;i<=10;i++){
sum1=sum1+(1.0/i);
}
sum2=sum1-log(i);
printf(" %d  %f\n",i,sum2);
printf("\n");
sum1=0.0;
for (i=1;i<=100;i++){
sum1=sum1+(1.0/i);
}
sum2=sum1-log(i);
printf(" %d  %f\n",i,sum2);
printf("\n");
sum1=0.0;
for (i=1;i<=1000;i++){
sum1=sum1+(1.0/i);
}
sum2=sum1-log(i);
printf(" %d  %f\n",i,sum2);
printf("\n");
sum1=0.0;
for (i=1;i<=10000;i++){
sum1=sum1+(1.0/i);
}
sum2=sum1-log(i);
printf(" %d  %f\n",i,sum2);
printf("\n");
}
