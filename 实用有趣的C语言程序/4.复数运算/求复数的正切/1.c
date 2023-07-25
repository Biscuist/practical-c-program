//求复数的正切程序
#include <stdio.h>
#include "math.h"
main()
{
  double u,v;
  double p,q;
  float x,y;
  printf("请输入复数x+yi中的 x,y:");
  scanf("%f,%f",&x,&y);
//  x=3.0;
//  y=4.0;
  printf("x=%f\n",x);
  printf("y=%f\n",y);
  p=exp(2.0*y); q=exp(-2.0*y);
  u=(2.0*sin(2.0*x))/(p+q+2.0*(2.0*cos(x)*cos(x)-1.0)); 
  v=(p-q)/(p+q+2.0*(2.0*cos(x)*cos(x)-1.0)); 
  printf("%13.7e+j %13.7e\n",u,v);
  printf("\n");
}


  
