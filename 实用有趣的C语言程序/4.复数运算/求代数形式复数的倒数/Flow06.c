//求代数形式复数的倒数，输出代数形式与极坐标形式
#include <stdlib.h>
#include <math.h>
#define pi 3.14
main()
{
 trans18();
}

trans18() // 计算复数代数式的倒数  
{
  
  float a,b,y,r,p;
  printf("请输入复数a+bi中的 a,b:");
  scanf("%f,%f",&a,&b);
  // a=6.0;
  // b=-8.0;
  y=a*a+b*b;
  p=a/y; a=p;
  printf("a=%f\n",a);
  y=-b/y;b=y;
  printf("b=%f\n",b);
  r=sqrt(a*a+b*b);
  printf("r=%f\n",r);
  y=atan(b/a);
  y=(y/pi)*180.0;
  if (a<0&&b>0) {y=180.0+y;}
  if (a<0&&b<0) {y=180.0-y;y=-y;}
  printf("y=%f\n",y);
}
/* 求代数形式复数的倒数，输出代数形式与极坐标形式
若
x=a+bi=6-8i;
则
1/x=0.06+0.08i=0.1<53.1' ;

*/
