//���������ҳ���
#include <stdio.h>
#include "math.h"
main()
{  
  double p,q,u,v;
  float x,y;
  printf("�����븴��x+yi�е� x,y:");
  scanf("%f,%f",&x,&y);
//  x=3.0;
//  y=4.0;
  printf("x=%f\n",x);
  printf("y=%f\n",y);
  p=exp(y); q=exp(-y);
  u=cos(x)*(p+q)/2.0; v=-sin(x)*(p-q)/2.0;
  printf("%13.7e+j %13.7e\n",u,v);
  printf("\n");
}


  
