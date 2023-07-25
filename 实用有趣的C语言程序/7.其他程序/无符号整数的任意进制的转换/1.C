/***************************************************************/
/* 1.c  无符号整数(yyy<=255)的任意进制(2-16)的转换             */
/***************************************************************/
#include <stdio.h>
#define M sizeof(unsigned int)*8
int trans(unsigned char n,int d,char s[])
	 {
	 static char digits[]="0123456789ABCDEF";
	 char buf[M+1];
	 int  j,i=M;
	 if (d<2||d>16)
	 {
	s[0]='0';
	return 0;
 	 }
    buf[i]='\0';
do 
{
	buf[--i]=digits[n%d];
	n/=d;
}while (n);
for (j=0;(s[j]=buf[i])!='\0';j++,i++);
	return j;
}
main()
{
     unsigned int num=0;
	 int scale[]={2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,1};
	 char str[33];
	 int i;
	 printf(" 请输入待转换数(yyy<=255):");
	 scanf("%d",&num);
	 printf(" 你输入的数是%d，转换结果为：\n",num);
	
	 for (i=0;i<sizeof(scale)/sizeof(scale[0]);i++)
	 {
		 if (trans(num,scale[i],str))
     printf("%5d= %s(%d)\n",num,str,scale[i]);
	 }
 }
    
