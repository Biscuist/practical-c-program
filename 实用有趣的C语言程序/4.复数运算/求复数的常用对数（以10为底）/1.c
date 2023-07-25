//求复数常用对数的程序
#include <stdio.h>
#include "math.h"
main()
{
  double u,v,p,e;
  float x,y;
  e=2.71828;
  printf("请输入复数x+yi中的 x,y:");
  scanf("%f,%f",&x,&y);
//  x=1.0;
//  y=4.0;
  printf("x=%f\n",x);
  printf("y=%f\n",y);
  p=log10(sqrt(x*x+y*y));
  u=p; 
  v=log10(e)*atan2(y,x);
  printf("%13.7e+j %13.7e\n",u,v);
  printf("\n");
}
 
 
