/**************************************************************/
/* 1.c -- 计算大数的加法-可加位数为400位                      */ 
/**************************************************************/
#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 400 

void my_read(int *a) 
{ 
int len,i,flag=0; 
char s[MAX]; 
while(1) 
{ 
  scanf("%s",&s); 
  len=strlen(s); 
  if (s[0]=='-') flag=1; 
  for(i=len-flag;i>=1;i--) 
  { 
   a[i]=s[len-i]-'0'; 
  } 
if (flag) 
a[0]=-(len-1); 
else 
a[0]=len; 
break; 
} 
return; 
}  

void my_print(int *a) 
{ 
int i; 
if (a[0]<0) printf("-"); 
if (a[0]==0) 
{ 
printf("0"); 
return; 
} 
for(i=abs(a[0]);i>=1;i--) 
printf("%d",a[i]); 
printf("\n"); 
} 

void format(int *a) 
{ 
int p; 
for(p=1;p<a[0]||a[p]>=10;p++) 
{ 
if (p>=a[0]) a[p+1]=0; 
a[p+1]+=a[p]/10; 
a[p]=a[p]%10; 
} 
if (p>=a[0]) a[0]=p; 
return; 
} 
void add(int *a,int *b,int *c) 
{ 
int len,i; 
if (a[0]<b[0]) len=a[0]; 
else len=b[0]; 
for(i=1;i<=len;i++) 
c[i]=a[i]+b[i]; 
if (len<a[0]) 
{ 
for (;i<=a[0];i++) 
c[i]=a[i]; 
c[0]=a[0]; 
} 
else 
{ 
for(;i<=b[0];i++) 
{ 
c[i]=b[i]; 
} 
c[0]=b[0]; 
} 
format (c); 
} 

format1(int *a) 
{ 
int i; 
for (i=1;i<=a[0];i++) 
if (a[i]<0) 
{ a[i]+=10; 
a[i+1]-=1; 
} 
} 

void sub_1(int *a,int *b,int *c) 
{ 
int i; 
for (i=1;i<=b[0];i++) 
c[i]=a[i]-b[i]; 
if (a[0]==b[0]) goto loop; 
for (;i<=a[0];i++) 
c[i]=a[i]; 
loop: 
c[0]=a[0]; 
format1(c); 
i=c[0]; 
while(1) 
if (c[i]==0) i--; 
else break; 
c[0]=i; 
return; 
} 

void sub(int *a,int *b,int *c) 
{ 
int i,flag=0; 
for (i=1;i<=a[0];i++) 
if (a[i]!=b[i]) {flag=1;break;} 
if (flag==0) 
{ 
c[0]=0; 
return; 
} 
flag=0; 
if (a[0]==b[0]) 
{ 
i=a[0]; 
while(i>0) 
{ 
if (a[i]>b[i]) 
{ 
sub_1(a,b,c); 
break; 
} 
if (a[i]<b[i]) 
{ 
flag=1; 
sub_1(b,a,c); 
break; 
} 
i--; 
} 
} 
if (a[0]>b[0]) 
sub_1(a,b,c); 
else 
if (a[0]<b[0]) 
{ 
flag=1; 
sub_1(b,a,c); 
} 
if (flag) 
c[0]=-c[0]; 
else 
c[0]=c[0]; 
} 
void main(void) 
{
int a[MAX],b[MAX],c[MAX]; 
printf(" 请输入大整数(被加数)A:"); 
my_read(a); 
printf(" 请输入大整数(加数)B:"); 
my_read(b);
if (a[0]<0 && b[0]<0) {a[0]=-a[0];b[0]=-b[0];add(a,b,c);c[0]=-c[0];a[0]=-a[0];b[0]=-b[0];goto c;} 
if (a[0]>0 && b[0]<0) {b[0]=-b[0];sub(a,b,c);b[0]=-b[0];goto c;} 
if (a[0]>0 && b[0]>0) {add(a,b,c);goto c;} 
if (a[0]<0 && b[0]>0) {a[0]=-a[0];sub(b,a,c);a[0]=-a[0];goto c;} 
c: 
printf("\n"); 
printf(" A="); 
my_print(a); 
printf(" B="); 
my_print(b); 
printf(" C=A+B="); 
my_print(c); 
} 

