//������������ʽ�����������֮�̣����������ʽ�뼫������ʽ
#include <stdlib.h>
#include <math.h>
#define pi 3.14
main()
{
 trans20();
}

trans20() // ����������ʽ������� 
{
  
  float a,b,c,d,y,r,p;
  printf("�����븴��������a+bi�е�a,b:");
  scanf("%f,%f",&a,&b);
  printf("�����븴������c+di�е� c,d:");
  scanf("%f,%f",&c,&d);
  y=c*c+d*d;
  p=(a*c+b*d)/y;
  r=(b*c-a*d)/y;
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
/* ������������ʽ�����������֮�̣����������ʽ�뼫������ʽ
 z1=a+ib=-1.3+i4.5
 z2=c+id=7.6-i3.6
 z1/z2=a+ib=-0.368778+i0.417421=0.557<131.4'
*/
