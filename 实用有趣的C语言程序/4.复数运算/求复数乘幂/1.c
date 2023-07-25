//复数乘幂程序
#include <stdio.h>
#include "math.h"
main()
{
  int n;
  float x,y;
  double r,q,u,v;
  printf("请输入复数x+yi中的 x,y:");
  scanf("%f,%f",&x,&y);
//  x=1.0;
//  y=1.0;
  printf("x=%f\n",x);
  printf("y=%f\n",y);
  printf("\n");
  q=atan2(y,x);
  r=sqrt(x*x+y*y);
  for (n=-5;n<=5;n=n+1)
  {
  q=atan2(y,x);
  r=sqrt(x*x+y*y);
   if (r+1.0!=1.0)
      { r=n*log(r); r=exp(r);}
    u=r*cos(n*q); 
	v=r*sin(n*q);
	if (fabs(u)<0.00001) u=0.0; 
	if (fabs(v)<0.00001) v=0.0; 
  printf("n=%3d     %13.7e+j %13.7e\n",n,u,v);
  }
}

 