//复数极坐标式变代数式 
#include <stdlib.h>
#include <math.h>
#define pi 3.14
main()
{
 trans17();
}

trans17()  // 极坐标式变代数式  
{
  float a,b,r,x;
  printf("请输入模和幅角（单位是度） r,x:");
  scanf("%f,%f",&r,&x);
 // r=5.0;
 // x=126.8;
  x=x/180*pi;
  a=r*cos(x);
  b=r*sin(x);
  printf("a=%f\n",a);
  printf("b=%f\n",b);
}
