//求复数的正弦程序
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
  p=exp(y); q=exp(-y);
  u=sin(x)*(p+q)/2.0; v=cos(x)*(p-q)/2.0;
  printf("%13.7e+j %13.7e\n",u,v);
  printf("\n");
}


  
