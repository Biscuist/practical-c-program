//����ָ���ĳ���
#include <stdio.h>
#include "math.h"
main()
{
  double u,v,p;
  float x,y;
  printf("�����븴��x+yi�е� x,y:");
  scanf("%f,%f",&x,&y);
//  x=1.0;
//  y=4.0;
  printf("x=%f\n",x);
  printf("y=%f\n",y);
  p=exp(x);
  u=p*cos(y); 
  v=p*sin(y);
  printf("%13.7e+j %13.7e\n",u,v);
  printf("\n");
}

