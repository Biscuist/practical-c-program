/*********************************************************/
/* 1.c  1000���ڵ���������                               */
/*********************************************************/
#include <stdio.h>
#include <math.h>
int  prime(int n)
{
   int j;
   long k;
   k=sqrt(n)+1;
   for (j=2;j<=k;j++) 
   {
	   if (n%j==0)
	   return 0;
   }
   return 1; 
}
void main()
{
   int i,count=0;
   printf(" 3��1000�����������Ϊ: \n");
   for (i=3;i<1000;i++) 
     	if ( prime(i)&&prime(i+2))
		{
        printf(" (%-3d,%3d)  ",i,i+2);
        count++;      
        if (count%5==0)
   	 	printf("\n");
		}
}

