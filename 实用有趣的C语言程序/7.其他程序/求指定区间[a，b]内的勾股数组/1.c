/*****************************************************/
/* 1.c   ��ָ������[a��b]�ڵĹ�������                */
/*****************************************************/
#include <stdio.h>
#include <math.h> 
void main()
{
int a,b,n;
long x,y,z,d;	
printf(" ��ָ������[a��b]�ڵĹ�������.");
printf("\n ����������[a��b]��������a��b��");
scanf("%d,%d",&a,&b);
printf("\n ����[%d��%d]�ڵĹ��������У�  \n",a,b);
if (a==0) a=2;
n=0;
for (x=a;x<=b-2;x++)
for (y=x+1;y<=b-1;y++)
{
d=x*x+y*y;
z=sqrt(d);
if (z>b) break;
if (z*z==d)
{
	n++;
    printf(" %1d^2+%1d^2=%1d^2\n",x,y,z);
}
}
printf(" ��%d�鹴������\n",n);

}
