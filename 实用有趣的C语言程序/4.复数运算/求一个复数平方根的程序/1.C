/********************************************************/
/* 1.c 求任一复数平方根的程序                           */
/********************************************************/
#include <stdio.h>
#include <math.h>
#define pi 3.14
int main()
{
   float  a,b;
   double x,y,a1,b1,r;
   printf("请输入待求其平方根的复数，a+bi中的a,b:");
   scanf("%f,%f",&a,&b);
// a=3.0;
// b=4.0;
   a1=(double)a;
   b1=(double)b;
   x=sqrt((sqrt(a1*a1+b1*b1)+a1)/2.0);
   y=sqrt((sqrt(a1*a1+b1*b1)-a1)/2.0);
   if (b<0)  y=y*(-1.0); 
   printf("x=%f\t  \n",x);
   printf("y=%f\t  \n",y);
   printf("x+yi=%6.2f+%6.2fi\n",x,y);
   r=sqrt(a1*a1+b1*b1);
   printf("r=%f\n",r);
   y=atan(b1/a1);
   y=(y/pi)*180.0;
   if (a<0&&b>0) {y=180.0+y;}
   if (a<0&&b<0) {y=180.0-y;y=-y;}
//   if (fabs(y)<0.00001) y=0.0; 
   printf("y=%f\n",y);
}	  	     		 	
	

