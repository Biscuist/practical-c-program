/******************************************************************/
/* 1.c 用盛金公式，求一元3次方程(ax3+bx2+cx+d=0)的根              */
/******************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
   double aa,bb,cc,delt,y1,y2,z1,z2,sete,x1,x2,x3,omig,omig2;
   double e,x;
   float a,b,c,d;
   printf(" 请输入系数 a,b,c,d:");
   scanf("%f,%f,%f,%f",&a,&b,&c,&d);
   printf(" a=%f\t  \n",a);
   printf(" b=%f\t  \n",b);  
   printf(" c=%f\t  \n",c);
   printf(" d=%f\t  \n",d);
   aa=(double)(b*b-3*a*c);
   printf(" aa=%f\t  \n",aa);
   bb=(double)(b*c-9*a*d);
   printf(" bb=%f\t  \n",bb);
   cc=(double)(c*c-3*b*d);
   printf(" cc=%f\t  \n",cc);
   delt=bb*bb-4*aa*cc;
   printf(" delt=%3.5f\t  \n",delt);
 
   if (aa==0&&bb==0){
             x1=x2=x3=-b/(3*a); 
             printf(" 方程有三个相等的实根:\n");
		     printf(" x1=x2=x3=%6.2f\n",x1);
		     return 0;
   }
   if (delt<0){
	          printf(" 方程有三个不相等的实根:\n");
	          e=(2*aa*b-3*a*bb)/(2*sqrt(aa*aa*aa));
			  sete=acos(e);
			  x1=(-b-2*sqrt(aa)*cos(sete/3.0))/(3.0*a);
			  x2=(-b+sqrt(aa)*(cos(sete/3.0)+sqrt(3.0)*sin(sete/3.0)))/(3.0*a);
              x3=(-b+sqrt(aa)*(cos(sete/3.0)-sqrt(3.0)*sin(sete/3.0)))/(3.0*a);
   	 		  printf(" x1=%6.2f, x2=%6.2f, x3=%6.2f\n",x1,x2,x3);
   }
   if (delt>=0)
   	 		if (delt>0)
   	 		{
			printf(" 方程有一个实根和两个共轭复根:\n");
			y1=aa*b+3*a*(-bb+sqrt(delt))/2;
			y2=aa*b+3*a*(-bb-sqrt(delt))/2;
		    if (y1<0) {
				z1=y1*(-1);
				x=1.0/3.0;
   	 		    z1=pow(z1,x);
                z1=z1*(-1);
				 }
			else {
				 z1=y1;
				 x=1.0/3.0;
   	 		     z1=pow(z1,x);
			}
			if (y2<0) {
                  z2=y2*(-1);
				  z2=pow(z2,x);
				  z2=z2*(-1);
				}
	        else {
				 z2=y2;
				 z2=pow(z2,x);
				 }       
				 x1=(-b-z1-z2)/(3*a);
				 omig=(-2*b+z1+z2)/(6*a);
                 omig2=sqrt(3)*(z1-z2)/(6*a);
				 printf(" x1=%6.2f \n",x1);
                 printf(" x2=%6.2f+%6.2fi,x3=%6.2f-%6.2fi\n",omig,omig2,omig,omig2);
            }
   	 	  	else
   	 	 	     {
				 printf(" 方程有三个实根:\n");
				 x1=-b/a+(bb/aa);
				 x2=-1.0/2.0*(bb/aa);
				 x3=x2;
			     printf(" x1=%6.2f,x2=x3=%6.2f\n",x1,x2);
				 }
  	 	
}	  	     		 	
	


