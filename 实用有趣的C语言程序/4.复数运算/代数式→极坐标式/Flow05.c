//��������ʽ�伫����ʽ
#include <stdlib.h>
#include <math.h>
#define pi 3.14
main()
{
 trans16();
}

trans16() // ����ʽ�伫����ʽ  
{
  
  float a,b,y,sum;
  printf("�����븴��a+bi�е� a,b:");
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
