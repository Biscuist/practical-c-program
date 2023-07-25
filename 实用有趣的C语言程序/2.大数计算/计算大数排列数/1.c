/*****************************************************************/
/* 1.c -- 计算大数的排列                    　                    */                        
/******************************************************************/
#include <stdio.h>
void main(void)
{
     int i,j,x,b,f,n,t,m;
     int a[3000],d,e=1;
   	 while(e)
	 {
     for (i=0;i<3000;i++)
		  a[i]=0;
     a[0]=1;
     printf(" 请输入整数n:");
     scanf("%d", &n);
     if (n<0) break;
     printf(" 请输入整数m:");
     scanf("%d", &m);
     if (n==0) n=1;
     t=1;
     if (n<m) break;
     t=n-m+1;
     for (d=0,i=t; i<=n; i++)
	 {
		 b=i;
         for (f=0,j=0;j<=d||f>0;j++)
		 {
		 x=a[j]*b+f;
		 f=x/10;a[j]=x%10;
		 }
         while(a[j]==0) j--;
		 d=j;
	 }
	 while(a[j]==0) j--;
	 f=j;
	 printf(" ");
	 for (d=0,j=f; j>=0;j--)
		 {
		 printf("%d",a[j]);d++;
		 if (d%50==0)
		 printf("\n            ");
		 }
	 printf("\n 所得结果共%d位。\n",f+1); 
	 }
}


