//求两个代数形式复数之积，输出代数形式与极坐标形式
#include <stdlib.h>
#include <math.h>
#define pi 3.14
main()
{
 trans19();
}

trans19() // 求两个代数形式复数之积  
{
  
  float a,b,c,d,y,r,p;
  printf("请输入复数被乘数a+bi中的a,b:");
  scanf("%f,%f",&a,&b);
  printf("请输入复数乘数c+di中的 c,d:");
  scanf("%f,%f",&c,&d);
  p=(a*c-b*d);
  r=(b*c+a*d);
  a=p;
  printf("a=%f\n",a);
  b=r;
  printf("b=%f\n",b);
  r=sqrt(a*a+b*b);
  printf("r=%f\n",r);
  y=atan(b/a);
  y=(y/pi)*180.0;
  if (a<0&&b>0) {y=180.0+y;}
  if (a<0&&b<0) {y=180.0-y;y=-y;}
  printf("y=%f\n",y);

}
/*求两个代数形式复数之积，输出代数形式与极坐标形式
 z1=a+ib=-1.3+i4.5
 z2=c+id=7.6+i3.6
 z1*z2=a+ib=-26.08+i29.52=39.39<131.4'
*/
