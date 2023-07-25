/*****************************************************/
/* 1.c   求指定区间[a，b]内的勾股数组                */
/*****************************************************/
#include <stdio.h>
#include <math.h> 
void main()
{
int a,b,n;
long x,y,z,d;	
printf(" 求指定区间[a，b]内的勾股数组.");
printf("\n 请输入区间[a，b]的上下限a，b：");
scanf("%d,%d",&a,&b);
printf("\n 区间[%d，%d]内的勾股数组有：  \n",a,b);
if (a==0) a=2;
n=0;
for (x=a;x<=b-2;x++)
for (y=x+1;y<=b-1;y++)
{
d=x*x+y*y;
z=sqrt(d);
if (z>b) break;
if (z*z==d)
{
	n++;
    printf(" %1d^2+%1d^2=%1d^2\n",x,y,z);
}
}
printf(" 共%d组勾股数。\n",n);

}
