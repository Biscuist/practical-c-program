/***************************************************/
/* 1.c   杨辉三角形程序1 -等腰三角形              */
/***************************************************/
#include <stdio.h>
void main()
{
   int n,i,j,k,a[20][20];
   printf(" 请输入行数n: ");
   scanf("%d",&n);
   for (i=1;i<=n;i++)
   {a[i][1]=1;a[i][i]=1;}
   for (i=3;i<=n;i++)
     for (j=2;j<=i-1;j++)
     a[i][j]=a[i-1][j-1]+a[i-1][j];
   for (i=1;i<=n;i++)
	{
	   for (k=1;k<=40-3*i;k++)
		    printf(" ");
	   for (j=1;j<=i;j++)
		    printf("%6d", a[i][j]);
	   printf("\n");
   }
}	  	     		 	
	


