//����������ʽ�����ʽ 
#include <stdlib.h>
#include <math.h>
#define pi 3.14
main()
{
 trans17();
}

trans17()  // ������ʽ�����ʽ  
{
  float a,b,r,x;
  printf("������ģ�ͷ��ǣ���λ�Ƕȣ� r,x:");
  scanf("%f,%f",&r,&x);
 // r=5.0;
 // x=126.8;
  x=x/180*pi;
  a=r*cos(x);
  b=r*sin(x);
  printf("a=%f\n",a);
  printf("b=%f\n",b);
}
