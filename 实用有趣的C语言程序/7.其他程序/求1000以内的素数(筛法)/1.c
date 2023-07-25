/**************************************************/
/* 1.c   求1000以内的素数                         */
/**************************************************/
#include <stdio.h>
#include <math.h>
void main()
{
   int i,j,n,a[1001];
   for (i=1;i<=1000;i++) 
   a[i]=i;
   a[1]=0;
   for (i=2;i<sqrt(1000);i++) 
   	 	for (j=i+1;j<=1000;j++){
   	 		if (a[i]!=0&&a[j]!=0)
   	 			if (a[j]%a[i]==0)
   	 				a[j]=0;    }
   printf("\n");
   for (i=1,n=0;i<=1000;i++){
   	 if (a[i]!=0){
   	 	 printf("%5d",a[i]);
   	 	 n++;    }
   	 	 if (n==10){
   	 	 printf("\n");
   	 	 n=0;       }
   	}
   	printf("\n");
}

