/*********************************************************************/
/* 1.c 用卡尔丹公式求一元3次方程(x3+px+q=0)的根.                     */
/*********************************************************************/
#include <stdio.h>
#include <math.h>
void main()
{
   double a,b,y1,y2,z1,z2,disc,disc1,sete,x1,x2,x3,omig,omig2;
   double pi,e,x,y;
   float p,q;
   pi=3.14159265;
   a=-0.5;
   b=sqrt(3.0)/2.0;
   printf(" 请输入系数 p,q:");
   scanf("%f,%f",&p,&q);
   printf(" p=%f\t  \n",p);
   printf(" q=%f\t  \n",q);
   e=p/3.0;
   x=3.0;
   disc=pow(e,x);
   disc1=disc;
   e=q/2.0;
   x=2.0;
   disc=pow(e,x);
   disc=disc+disc1;
   printf(" disc=%3.5f\t  \n",disc);
   if (disc<0){
	   printf(" 方程有三个不相等的实根:\n");
                  z1=sqrt(-(p/3.0)*(p/3.0)*(p/3.0));
				  sete=(acos(-q/(2.0*z1)))/3.0;
				  z2=z1;
				  x=1.0/3.0;
   	 			  y1=pow(z2,x);
				  x1=2*y1*cos(sete);
				  x2=2*y1*cos(sete+2.0*pi/3.0);
				  x3=2*y1*cos(sete+4.0*pi/3.0);
                  printf(" x1=%6.2f, x2=%6.2f, x3=%6.2f\n",x1,x2,x3);
   				  
   }
   if (disc>=0)
   	 	if (disc>0)
   	 			 {
				  printf(" 方程有一个实根和两个共轭复根 :\n");
				  z1=sqrt(disc)-(q/2.0);
				  z2=-sqrt(disc)-(q/2.0);
				  if (z1<0) {
				  z1=z1*(-1);
				  x=1.0/3.0;
   	 			  z1=pow(z1,x);
                  z1=z1*(-1);
				  }
			      else  {
				  x=1.0/3.0;
   	 			  z1=pow(z1,x);
				  }
				  if (z2<0) {
                  z2=z2*(-1);
				  z2=pow(z2,x);
				  z2=z2*(-1);
				  }
	              else  {
				  x=1.0/3.0;
				  z2=pow(z2,x);
				  }       
				  y1=z1;
				  y2=z2;
				  x1=y1+y2;
                  omig=a*(y1+y2);
                  omig2=b*(y2-y1);
                  if (omig2<0) {omig2=-omig2;}
				  printf(" x1=%6.2f \n",x1);
                  printf(" x2=%6.2f+%6.2fi,x3=%6.2f-%6.2fi\n",omig,omig2,omig,omig2);
		}
   	 	  	      else
   	 	 	      {
				  printf(" 方程有三个实根:\n");
				  if (p==0&&q==0){ printf(" x1=x2=x3=0.0\n");}
                  else { 
				  z1=-(q/2.0);
				  if (z1<0) {
				  z1=z1*(-1);
				  x=1.0/3.0;
   	 			  y1=pow(z1,x);
                  y1=y1*(-1);
				  }
				  else  {
				  x=1.0/3.0;
   	 			  y1=pow(z1,x);
				  }
				  x1=2.0*y1;
				  x2=2.0*a*y1;
				  x3=x2;
				  printf(" x1=%6.2f,x2=x3=%6.2f\n",x1,x2);
				  }
		  }
   	 	
}	  	     		 	
	


