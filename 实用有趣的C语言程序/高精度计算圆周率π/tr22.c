/* 用公式π/2= 1+1/3+2/15+6/105+... 计算π值 */
#include <stdio.h>
#include <math.h> 
void main()
{
float s;
int b,x,n,c,i,j,d,l,a[5000];
printf("\n 请输入精确位数: ");
scanf("%d",&x);
for (s=0,n=1;n<=5000;n++)
{
	s=s+log10((2*n+1)/n);
	if (s>x+1)
	break;
}
for (i=0;i<=x+5;i++)
    a[i]=0;
for (c=1,j=n;j>=1;j--)
{
	d=2*j+1;

    for (i=0;i<=x+4;i++)
	{
     a[i]=c/d;
	 c=(c%d)*10+a[i+1];
	}
	a[x+5]=c/d;
for (b=0,i=x+5;i>=0;i--)
{
	a[i]=a[i]*j+b;
	b=a[i]/10;
	a[i]=a[i]%10;
}
    a[0]=a[0]+1;
	c=a[0];
}
for (b=0,i=x+5;i>=0;i--)
{
	a[i]=a[i]*2+b;
	b=a[i]/10;
	a[i]=a[i]%10;
}
printf("\n  pi=%d. ",a[0]);
for (l=10,i=1;i<=x;i++)
{
	printf("%d",a[i]);
	l++;
	if (l%10==0)
    printf(" ");
	if (l%50==0)
    printf("\n");
}
printf("\n");
}
