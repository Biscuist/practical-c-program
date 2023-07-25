/*********************************************************************/
/* 1.c 用谢国芳公式，求一元4次方程(ax4+bx3+cx2+dx+e=0)的根           */
/*********************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
   double aa,bb,cc,delt,y1,y2,y3,z1,z2,z3,sete,x1,x2,x3,x4,omig,omig2;
   double pi,s,t,ee,x,y,hh,ii,jj,gg;
   float a,b,c,d,e;
   pi=3.14159265;
   printf(" 请输入系数 a,b,c,d,e:");
   scanf("%f,%f,%f,%f,%f",&a,&b,&c,&d,&e);
   printf(" a=%f\t  \n",a);  
   printf(" b=%f\t  \n",b);  
   printf(" c=%f\t  \n",c);
   printf(" d=%f\t  \n",d);
   printf(" e=%f\t  \n",e); 
   hh=(double)(b*b-a*c);
   gg=(double)(a*a*d-3.0*a*b*c+2.0*b*b*b);
   ii=(double)(a*e-4.0*b*d+3.0*c*c);
   jj=(double)((4.0*hh*hh*hh-a*a*hh*ii-gg*gg)/(a*a*a));
   delt=ii*ii*ii-27.0*jj*jj;
   printf(" hh=%f\t  \n",hh);
   printf(" gg=%f\t  \n",gg);
   printf(" ii=%f\t  \n",ii);
   printf(" jj=%f\t  \n",jj);
   printf(" delt=%f\t  \n",delt);

   if (gg!=0&&ii==0&&jj==0){
	  printf(" 方程有三个相等的实根和另一个不同实根:\n");
	                 if (gg>0) y1=1.0;
					 if (gg<0) {y1=-1.0;}
					 x1=(-b+y1*sqrt(hh))/a;
					 x2=x1;
					 x3=x1;
					 x4=(-b-3*y1*sqrt(hh))/a;
					 printf(" x1=%6.2f\t  \n",x1);
		             printf(" x2=%6.2f\t  \n",x2);
					 printf(" x3=%6.2f\t  \n",x3);
		             printf(" x4=%6.2f\t  \n",x4);
   }
   if (gg==0)        {
	                 printf(" 方程有四个根:\n");
	                 y1=12*hh*hh-a*a*ii;
					 if (y1>=0){ 
                     y2=3*hh+sqrt(y1);
					 y3=3*hh-sqrt(y1);
					 if (y2>=0&&y3>=0){ 
					 x1=(-b+sqrt(3*hh+sqrt(y1)))/a;
					 x2=(-b+sqrt(3*hh-sqrt(y1)))/a;
					 x3=(-b-sqrt(3*hh+sqrt(y1)))/a;
					 x4=(-b-sqrt(3*hh-sqrt(y1)))/a;
					 printf(" x1=%6.2f\t  \n",x1);
		             printf(" x2=%6.2f\t  \n",x2);
					 printf(" x3=%6.2f\t  \n",x3);
		             printf(" x4=%6.2f\t  \n",x4);
	               	 }
					 if (y2<0&&y3<0) 
                     {
                     y2=-1.0*y2;
					 y3=-1.0*y3;
					 omig=(-b)/a;
					 omig2=(sqrt(y2))/a;
					 printf(" x1=%6.2f+%6.2fi \n",omig,omig2);
					 omig=(-b)/a;
					 omig2=(sqrt(y3))/a;
					 printf(" x2=%6.2f+%6.2fi \n",omig,omig2);
					 omig=(-b)/a;
					 omig2=-(sqrt(y2))/a;
					 printf(" x3=%6.2f+%6.2fi \n",omig,omig2);
					 omig=(-b)/a;
					 omig2=-(sqrt(y3))/a;
					 printf(" x4=%6.2f+%6.2fi \n",omig,omig2);
					 }
                     if (y2>=0&&y3<0) 
                     {
                     x1=(-b+sqrt(y2))/a;
					 x2=(-b-sqrt(y2))/a;
					 printf(" x1=%6.2f\t  \n",x1);
		             printf(" x2=%6.2f\t  \n",x2);
					 y3=-1.0*y3;
					 omig=(-b)/a;
					 omig2=(sqrt(y3))/a;
	printf(" x3=%6.2f+%6.2fi,x4=%6.2f-%6.2fi \n",omig,omig2,omig,omig2);
					 }
					 }
                     else
					 {
					 y1=-1.0*y1;
					 s=3*hh;
				     t=sqrt(y1);
				     x=sqrt((sqrt(s*s+t*t)+s)/2.0);
                     y=sqrt((sqrt(s*s+t*t)-s)/2.0);
                     if (t<0)  y=y*(-1.0); 
	                 omig=(-b+x)/a;
					 omig2=y/a;
					 printf(" x1=%6.2f+%6.2fi \n",omig,omig2);
                     s=3*hh;
				     t=-sqrt(y1);
				     x=sqrt((sqrt(s*s+t*t)+s)/2.0);
                     y=sqrt((sqrt(s*s+t*t)-s)/2.0);
                     if (t<0)  y=y*(-1.0); 
	                 omig=(-b+x)/a;
					 omig2=y/a;
					 printf(" x2=%6.2f+%6.2fi \n",omig,omig2);
                     s=3*hh;
				     t=sqrt(y1);
				     x=sqrt((sqrt(s*s+t*t)+s)/2.0);
                     y=sqrt((sqrt(s*s+t*t)-s)/2.0);
                     if (t<0)  y=y*(-1.0); 
	                 omig=(-b-x)/a;
					 omig2=y/a;
					 printf(" x3=%6.2f+%6.2fi \n",omig,omig2);
					 s=3*hh;
				     t=-sqrt(y1);
				     x=sqrt((sqrt(s*s+t*t)+s)/2.0);
                     y=sqrt((sqrt(s*s+t*t)-s)/2.0);
                     if (t<0)  y=y*(-1.0); 
	                 omig=(-b-x)/a;
					 omig2=y/a;
					 printf(" x4=%6.2f+%6.2fi \n",omig,omig2);
					 }
   }
 
   if ((gg!=0)&&((ii*ii+jj*jj)!=0)&&(delt<0)){
	                 printf(" 方程有四个根:\n");
	                 y1=-jj+sqrt(-delt/27.0);
					 y2=-jj-sqrt(-delt/27.0);
					 if (y1<0) {
				     z1=y1*(-1);
				     x=1.0/3.0;
   	 		         z1=pow(z1,x);
                     z1=z1*(-1.0);
					 }
			         else {
				     z1=y1;
				     x=1.0/3.0;
   	 		         z1=pow(z1,x);
					 }
			         if (y2<0) {
                     z2=y2*(-1.0);
				     z2=pow(z2,x);
				     z2=z2*(-1.0);
					 }
	                 else {
				       z2=y2;
				       z2=pow(z2,x);
					 }
				     ee=(a/2.0)*(z1+z2)+hh;
					 if (gg>0) y1=1.0;
					 if (gg<0) {y1=-1.0;gg=-1.0*gg;}
					 x1=(-b-y1*sqrt(ee)+sqrt(gg/sqrt(ee)-ee+3.0*hh))/a;
					 x2=(-b-y1*sqrt(ee)-sqrt(gg/sqrt(ee)-ee+3.0*hh))/a;
					 printf(" x1=%6.2f x2=%6.2f\t\n",x1,x2);
		          	 omig=(-b+y1*sqrt(ee))/a;
                     omig2=(sqrt(gg/sqrt(ee)+ee-3.0*hh))/a;
     printf(" x3=%6.2f+%6.2fi,x4=%6.2f-%6.2fi \n",omig,omig2,omig,omig2);

   }
    if (gg!=0&&((ii*ii+jj*jj)!=0)&&delt>=0){
		             printf(" 方程有四个根:\n");
		             if (ii<0) ii=-1.0*ii;
					 if (gg>0) z1=1.0;
					 if (gg<0) z1=-1.0;
                     sete=-jj/(sqrt(ii*ii*ii/27.0));
					 sete=acos(sete);
	                 y1=a*sqrt(ii/3.0)*cos(sete/3.0)+hh;
					 y2=a*sqrt(ii/3.0)*cos(sete/3.0+2*pi/3.0)+hh;
					 y3=a*sqrt(ii/3.0)*cos(sete/3.0-2*pi/3.0)+hh;
			         if (y1>=0&&y2>=0&&y3>=0) {
					 s=-z1;
				     x1=(-b+s*sqrt(y1)+sqrt(y2)+sqrt(y3))/a;
					 x2=(-b+s*sqrt(y1)-sqrt(y2)-sqrt(y3))/a;
					 x3=(-b-s*sqrt(y1)+sqrt(y2)-sqrt(y3))/a;
					 x4=(-b-s*sqrt(y1)-sqrt(y2)+sqrt(y3))/a;
					 printf(" x1=%6.2f\t  \n",x1);
		             printf(" x2=%6.2f\t  \n",x2);
					 printf(" x3=%6.2f\t  \n",x3);
		             printf(" x4=%6.2f\t  \n",x4);
					 }
                     else s=z1;
                     if (y1>=0&&y2<0&&y3<0) {
					 y2=-1.0*y2;
					 y3=-1.0*y3;
					 omig=(-b+s*sqrt(y1))/a;
					 omig2=(sqrt(y2)+sqrt(y3))/a;
					 printf(" x1=%6.2f+%6.2fi \n",omig,omig2);
					 omig=(-b+s*sqrt(y1))/a;
					 omig2=-(sqrt(y2)+sqrt(y3))/a;
					 printf(" x2=%6.2f+%6.2fi \n",omig,omig2);
					 omig=(-b-s*sqrt(y1))/a;
					 omig2=(sqrt(y2)-sqrt(y3))/a;
					 printf(" x3=%6.2f+%6.2fi \n",omig,omig2);
					 omig=(-b-s*sqrt(y1))/a;
					 omig2=-(sqrt(y2)-sqrt(y3))/a;
					 printf(" x4=%6.2f+%6.2fi \n",omig,omig2);
				 	 }
   }
}	  	     		 	
	


