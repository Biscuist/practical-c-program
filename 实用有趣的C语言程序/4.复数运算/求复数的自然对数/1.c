//求复数自然对数的程序
#include <stdio.h>
#include "math.h"
main()
{
  double u,v,p;
  float x,y;
  printf("请输入复数x+yi中的 x,y:");
  scanf("%f,%f",&x,&y);
//  x=1.0;
//  y=4.0;
  printf("x=%f\n",x);
  printf("y=%f\n",y);
  p=log(sqrt(x*x+y*y));
  u=p; 
  v=atan2(y,x);

  printf("%13.7e+j %13.7e\n",u,v);
  printf("\n");
}
 
 
