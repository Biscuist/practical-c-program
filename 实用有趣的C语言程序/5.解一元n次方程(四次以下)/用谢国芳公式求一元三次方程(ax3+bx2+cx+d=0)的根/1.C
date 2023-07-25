/***************************************************************/
/* 1.c 用谢国芳公式，求一元3次方程(ax3+bx2+cx+d=0)的根         */
/***************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
   double aa,bb,cc,delt,y1,y2,z1,z2,sete,x1,x2,x3,omig,omig2;
   double e,x,pi,dd,xx,kk;
   float a,b,c,d;
   pi=3.14159265;
   printf(" 请输入系数 a,b,c,d:");
   scanf("%f,%f,%f,%f",&a,&b,&c,&d);
   printf(" a=%f\t  \n",a);
   printf(" b=%f\t  \n",b);  
   printf(" c=%f\t  \n",c);
   printf(" d=%f\t  \n",d);
   dd=(double)(b*b-3*a*c);
   printf(" dd=%f\t  \n",dd);
   if (dd<0) {
	   dd=-1.0*dd;
   xx=(double)(9*a*b*c-2*b*b*b-27*a*a*d)/(2*sqrt(dd)*sqrt(dd)*sqrt(dd));
       dd=-1.0*dd;
   }
   else
       xx=(double)(9*a*b*c-2*b*b*b-27*a*a*d)/(2*sqrt(dd)*sqrt(dd)*sqrt(dd));
       e=fabs(xx);
   if (dd<0){
	   printf(" 方程有一个实根和两个共轭复根:\n");
       z1=(double)(xx+sqrt(xx*xx+1.0));
       if (z1<0){ 
	   z1=-1.0*z1;
       x=1.0/3.0;
       kk=pow(z1,x);
       kk=-1.0*kk;
	   }
	   else
       { 
	   x=1.0/3.0;
       kk=pow(z1,x);
       }
   	   if (dd<0) dd=-1.0*dd;       
	   x1=(-b+sqrt(dd)*(kk-1.0/kk))/(3*a);
	   omig=(-b-sqrt(dd)*1.0/2.0*(kk-1.0/kk))/(3*a);
	   omig2=(sqrt(dd)*sqrt(3)/2.0*(kk+1.0/kk))/(3*a);
       printf(" x1=%6.2f \n",x1);
       printf(" x2=%6.2f+%6.2fi,x3=%6.2f-%6.2fi\n",omig,omig2,omig,omig2);
	   return 0;
   }
    if (dd>0&&e>1){
       printf(" r=%f\t  \n",xx);
       printf(" 方程有一个实根和两个共轭复根:\n");
       z1=(double)(xx+sqrt(xx*xx-1.0));
	   if (z1<0){ 
	   z1=-1.0*z1;
       x=1.0/3.0;
       kk=pow(z1,x);
       kk=-1.0*kk;
	   }
	   else
       { 
	   x=1.0/3.0;
       kk=pow(z1,x);
       }
   	   x1=(-b+sqrt(dd)*(kk+1.0/kk))/(3*a);
	   omig=(-b-sqrt(dd)*1.0/2.0*(kk+1.0/kk))/(3*a);
	   omig2=(sqrt(dd)*sqrt(3)/2.0*(kk-1.0/kk))/(3*a);
       printf(" x1=%6.2f \n",x1);
       printf(" x2=%6.2f+%6.2fi,x3=%6.2f-%6.2fi\n",omig,omig2,omig,omig2);

   }
   if (dd>0&&e==1){
	   printf(" r=%f\t  \n",xx);
	   printf(" 方程有两个相等的实根和另一个实根:\n");
	   if (xx==1)
       {
   	   x1=(-b+2*sqrt(dd))/(3*a);
	   x2=(-b-sqrt(dd))/(3*a);
	   x3=x2;
       printf(" x1=%6.2f,x2=%6.2f, x3=%6.2f \n",x1,x2,x3);
	   }
       if (xx==-1)
       {
   	   x1=(-b-2*sqrt(dd))/(3*a);
	   x2=(-b+sqrt(dd))/(3*a);
	   x3=x2;
       printf(" x1=%6.2f,x2=%6.2f, x3=%6.2f \n",x1,x2,x3);
	   }
   }
   if (dd>0&&e<1){
	   printf(" r=%f\t  \n",xx);
	   printf(" 方程有三个不相等的实根:\n");
	   sete=acos(xx);
	   x1=(-b+2*sqrt(dd)*cos(sete/3.0))/(3.0*a);
	   x2=(-b+2*sqrt(dd)*(cos(sete/3.0+2*pi/3.0)))/(3.0*a);
       x3=(-b+2*sqrt(dd)*(cos(sete/3.0-2*pi/3.0)))/(3.0*a);
   	   printf(" x1=%6.2f, x2=%6.2f, x3=%6.2f\n",x1,x2,x3);
	  }
  if (dd==0) { 
	   y1=b*b*b-27.0*a*a*d;
	   if (y1!=0) 
       {
       printf(" 方程有一个实根和两个共轭复根:\n");
	   if (y1<0){ 
	   y1=-1.0*y1;
       x=1.0/3.0;
       z1=pow(y1,x);
       z1=-1.0*z1;
	   }
	   else
       { 
	   x=1.0/3.0;
       z1=pow(y1,x);
       }
	   x1=(-b+z1)/(3*a);
       omig=-1.0/2.0*x1;
	   omig2=sqrt(3)/2.0*x1;
	   if (omig2<0) omig2=omig2*(-1.0); 
       printf(" x1=%6.2f \n",x1);
       printf(" x2=%6.2f+%6.2fi,x3=%6.2f-%6.2fi\n",omig,omig2,omig,omig2);
	   }
	   else
	   {
       printf(" 方程有三个相同的实根:\n");
       x1=(-b)/(3*a);
	   x2=x3=x1;
	   printf(" x1=%6.2f, x2=%6.2f, x3=%6.2f\n",x1,x2,x3);
	   }
	}
}	  	     		 	
	


