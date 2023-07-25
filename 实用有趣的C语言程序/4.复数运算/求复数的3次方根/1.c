//求复数的3次方根的C语言程序
#include <stdio.h>
#include "math.h"
main()
{
  int n,k; 
  double u[3],v[3];
  double r,q,t;
  float x,y;
  printf("请输入复数x+yi中的 x,y:");
  scanf("%f,%f",&x,&y);
//  x=1.0;
//  y=1.0;
  printf("x=%f\t  \n",x);
  printf("y=%f\t  \n",y);  
  n=3;
  if (n<1) return;
    q=atan2(y,x);
    r=sqrt(x*x+y*y);
    if (r+1.0!=1.0)
      { r=(1.0/n)*log(r); r=exp(r);}
    for (k=0; k<=n-1; k++)
      { t=(2.0*k*3.1415926+q)/n;
        u[k]=r*cos(t); v[k]=r*sin(t);
      }
  printf("\n");
  for (n=0;n<=2;n++){
  printf("n=%3d     %13.7e+j %13.7e\n",n,u[n],v[n]);}
  printf("\n");
}

