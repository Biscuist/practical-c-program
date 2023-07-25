/******************************************************************/
/* 1.c 求复系数一元二次方程的根-依定理123                       */
/******************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
   double delt,z1,z2,sete,real,imag,lamda;
   float a,b,c,d;
   printf(" 请输入系数 a,b,c,d:");
   scanf("%f,%f,%f,%f",&a,&b,&c,&d);
   printf(" a=%f\t  \n",a);
   printf(" b=%f\t  \n",b);  
   printf(" c=%f\t  \n",c);
   printf(" d=%f\t  \n",d);
   if (d==a*b/2){
             printf(" d=ab/2=%6.2f\n",d);
             delt=4*c+b*b-a*a;
			 if (delt>0){
             real=(-a)/2;
             imag=(-b+sqrt(delt))/2;
			 printf(" z1=%6.2f+%6.2fi\n",real,imag);
             real=(-a)/2;
             imag=-(b+sqrt(delt))/2;
			 printf(" z2=%6.2f+%6.2fi\n",real,imag);}
			 if (delt==0){
             real=(-a)/2;
             imag=(-b)/2;
			 printf(" z1=%6.2f+%6.2fi\n",real,imag);
             printf(" z2=%6.2f+%6.2fi\n",real,imag);}
			 if (delt<0){
             real=(-a+sqrt(-delt))/2;
             imag=(-b)/2;
			 printf(" z1=%6.2f+%6.2fi\n",real,imag);
             real=-(a+sqrt(-delt))/2;
             imag=(-b)/2;
			 printf(" z2=%6.2f+%6.2fi\n",real,imag);}
		     return 0;
   }
   if (c==(a*a-b*b)/4){
	         printf(" c=(aa-bb)/4=%6.2f\n",c);
	         delt=a*b-2*d;
			 if (delt>0){
             real=(-a+sqrt(delt))/2;
             imag=(-b+sqrt(delt))/2;
			 printf(" z1=%6.2f+%6.2fi\n",real,imag);
             real=-(a+sqrt(delt))/2;
             imag=-(b+sqrt(delt))/2;
			 printf(" z2=%6.2f+%6.2fi\n",real,imag);}
			 if (delt==0){
             real=(-a)/2;
             imag=(-b)/2;
			 printf(" z1=%6.2f+%6.2fi\n",real,imag);
             printf(" z2=%6.2f+%6.2fi\n",real,imag);}
			 if (delt<0){
             real=(-a+sqrt(-delt))/2;
             imag=(-b-sqrt(-delt))/2;
			 printf(" z1=%6.2f+%6.2fi\n",real,imag);
             real=-(a+sqrt(-delt))/2;
             imag=(-b+sqrt(-delt))/2;
			 printf(" z2=%6.2f+%6.2fi\n",real,imag);}
		     return 0;
   }
   	 	     printf(" d≠ab/2，c≠(aa-bb)/4.\n");
             delt=a*b-2*d;
			 lamda=(4*c+b*b-a*a)/(2*delt);
			 sete=sqrt(sqrt(lamda*lamda+1)-lamda);
		
			 if (delt>=0){
             real=-a/2+(sqrt(delt)/2)*sete;
             imag=(-1.0/2.0)*(b-sqrt(delt)/sete);
			 printf(" z1=%6.2f+%6.2fi\n",real,imag);
             real=-a/2-(sqrt(delt)/2)*sete;
             imag=(-1.0/2.0)*(b+sqrt(delt)/sete);
			 printf(" z2=%6.2f+%6.2fi\n",real,imag);}
			 if (delt<0){
             real=-a/2-(sqrt(-delt)/2)*sete;
             imag=(-1.0/2.0)*(b-sqrt(-delt)/sete);
			 printf(" z1=%6.2f+%6.2fi\n",real,imag);
             real=-a/2+(sqrt(-delt)/2)*sete;
             imag=(-1.0/2.0)*(b+sqrt(-delt)/sete);
			 printf(" z2=%6.2f+%6.2fi\n",real,imag);}
   	 	
}	  	     		 	
	


