/*********************************************************************/
/* 1.c   求一元二次方程(ax2+bx+c=0)的根                              */
/*********************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
   float a,b,c;
   float disc,x1,x2,p,q;
   printf(" 请输入系数 a,b,c:");
   scanf("%f,%f,%f",&a,&b,&c);
   printf(" a=%f\n",a);
   printf(" b=%f\n",b);
   printf(" c=%f\n",c);
   if (a==0)
   	 if (b==0)
   	 	 if (c==0)
   	 	 	 printf(" 方程有无穷多解-x可以为任何值.\n");
   	 	 	 else
   	 	 	 printf(" 方程无解.\n");
   	 	 	 else
   	 	 	 {printf(" 方程有一个解:\n");
   	 	 	  printf(" x=%6.2f\n",-c/b);
			 }
   	 	else 
   	 		{disc=b*b-4*a*c;
		     printf(" disc=%f\n",disc);
   	 			if (disc>=0)
   	 				if (disc>0)
   	 					 {printf(" 方程有两个不相等的实根:\n");
   	 					  x1=(-b+sqrt(disc))/(2*a);
   	 					  x2=(-b-sqrt(disc))/(2*a);
   	 	 	              printf(" x1=%6.4f,   x2=%6.4f\n",x1,x2);
					}
   	 	  	      else
   	 	 	      {printf(" 方程有两个相等的实根:\n");
   	 	 	         printf(" x1=x2=%6.2f\n",-b/(2*a));
				  }
   	 		else 
			{   printf(" 方程有两个不等的共轭复根:\n");
   	 			p=-b/(2*a);
   	 			q=sqrt(-disc)/(2*a);
   	 	 	    printf(" x1=%6.2f+%6.2fi, x2=%6.2f-%6.2fi\n",p,q,p,q);
			}	
   	  }
}	  	     		 	
	


