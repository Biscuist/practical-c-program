/**************************************************************/
/* 1.c - 计算大数乘方程序  可以处理2的200000次以内的乘方    　*/
/**************************************************************/
#include<stdio.h>
#include<stdlib.h>
void main()
{
 int *a,n,b;
 int i;
 int j;
 a=(int *)malloc(sizeof(int)*200000);
 for (i=0;i<200000;i++)
 a[i]=0;
 a[199999]=1;
 printf(" 请输入底数:\n");
 scanf("%d",&b);
 printf(" 请输入指数:\n");
 scanf("%d",&n);
 for(i=1;i<n+1;i++)
 {
   for(j=0;j<200000;j++)
   a[j]*=b;
   for(j=199999;j>=0;j--)
   if(a[j]>=10)
   {
    a[j-1]+=a[j]/10;
    a[j]%=10;
   }
 }
 for(i=0;a[i]==0;i++);
 printf(" 乘方结果为：\n");
 for(;i<200000;i++)
 printf("%d",a[i]);
 printf("\n");
 free(a);
}

