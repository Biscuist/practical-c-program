//复数代数式变极坐标式
#include <stdlib.h>
#include <math.h>
#define pi 3.14
main()
{
 trans16();
}

trans16() // 代数式变极坐标式  
{
  
  float a,b,y,sum;
  printf("请输入复数a+bi中的 a,b:");
  scanf("%f,%f",&a,&b);
  // a=-3.0;
  //  b=4.0;
  y=a*a+b*b;
  sum=sqrt(y); 
  printf("r=%f\n",sum);
  y=atan(b/a);
  y=(y/pi)*180.0;
  if (a<0&&b>0) {y=180.0+y;}
  if (a<0&&b<0) {y=180.0-y;y=-y;}
  printf("y=%f\n",y);
}
