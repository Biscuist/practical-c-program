/*****************************************************/
/* 1.c 求复系数一元2次方程的根-  依定理4             */
/*****************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
   double delt1,delt2,z1,z2,sete,real,imag,lamda;
   float a,b,c,d;
   printf(" 请输入系数 a,b,c,d:");
   scanf("%f,%f,%f,%f",&a,&b,&c,&d);
   printf(" a=%f\t  \n",a);
   printf(" b=%f\t  \n",b);  
   printf(" c=%f\t  \n",c);
   printf(" d=%f\t  \n",d);
   delt1=a*b-2*d;
   printf(" delt1=%f\t  \n",delt1);
   delt2=a*a-b*b-4*c;
   printf(" delt2=%f\t  \n",delt2);
   if (delt1==0){
             if (delt2>0){
             real=(-1.0/2.0)*(a-sqrt(delt2));
             imag=(-1.0/2.0)*b;
			 printf(" z1=%6.2f+%6.2fi\n",real,imag);
             real=(-1.0/2.0)*(a+sqrt(delt2));
             imag=(-1.0/2.0)*b;
			 printf(" z2=%6.2f+%6.2fi\n",real,imag);}
			 if (delt2==0){
             real=(-a)/2.0;
             imag=(-b)/2.0;
			 printf(" z1=%6.2f+%6.2fi\n",real,imag);
             printf(" z2=%6.2f+%6.2fi\n",real,imag);}
			 if (delt2<0){
             real=(-a)/2.0;
             imag=(-1.0/2.0)*(b-sqrt(-delt2));
			 printf(" z1=%6.2f+%6.2fi\n",real,imag);
             real=(-a)/2.0;
             imag=(-1.0/2.0)*(b+sqrt(-delt2));
			 printf(" z2=%6.2f+%6.2fi\n",real,imag);}
		   
   }
             lamda=sqrt((sqrt(delt2*delt2+4*delt1*delt1)+delt2)/2.0);
			 sete=sqrt((sqrt(delt2*delt2+4*delt1*delt1)-delt2)/2.0);
	if (delt1>0){
			 real=(-1.0/2.0)*(a-lamda);
             imag=(-1.0/2.0)*(b-sete);
			 printf(" z1=%6.2f+%6.2fi\n",real,imag);
             real=(-1.0/2.0)*(a+lamda);
             imag=(-1.0/2.0)*(b+sete);
			 printf(" z2=%6.2f+%6.2fi\n",real,imag);
		
  }
   if (delt1<0){
	         real=(-1.0/2.0)*(a-lamda);
             imag=(-1.0/2.0)*(b+sete);
			 printf(" z1=%6.2f+%6.2fi\n",real,imag);
             real=(-1.0/2.0)*(a+lamda);
             imag=(-1.0/2.0)*(b-sete);
			 printf(" z2=%6.2f+%6.2fi\n",real,imag);
			 
   }			
}	  	     		 	
	


