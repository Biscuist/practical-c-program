/******************************************************************/
/* 1.c -- 计算大数的乘法                                        　*/                        
/******************************************************************/
#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
char * bigmuilty(char*muiltied,int len1,char *muilty,int len2)
//muiltied 为被乘数，len1为其长度；muilty为乘数，len2为其长度。 
{ 
   int len; 
   int i=0; 
   int j=0; 
   int k=0; 
   int tmp_result=0; 
   int carry=0; 
   char* result; 
   len=len1+len2; //两个数相乘他们的最大长度为乘数与被乘数的长度和 
   result=(char*)calloc(len,1);//动态分配内存 
   for(i=0;i<len2;i++)//用乘数的每一位去乘以被乘数 
 { 
     for(j=0;j<len1;j++) 
     { 
        tmp_result=muilty[len2-i-1]*muiltied[len1-j-1];//得到零时结果 
        result[j+i]+=tmp_result;
		//如果以0为起始标号，被乘数和乘数下标分别从右往左依次增加，则结果存放的位置为j+i 
     } 
     for(k=0;k<=j+i-1;k++)//整理结果，使每位的值在0-9之间 
     { 
                
        if(result[k]>9) 
        { 
           carry=result[k]/10; 
           result[k]=result[k]%10; 
           result[k+1]+=carry; 
        } 
     } 
   } 
  return result; 
  } 
int main() 
{ 
   int len1=0; 
   int len2=0; 
   int len; 
   int i=0; 
   int num='0'; 
   char *result; 
   char muiltied[BUFSIZ];//被乘数存放位置 
   char muilty[BUFSIZ];
   printf(" 请输入被乘数A:"); 
   scanf("%s",muiltied); 
   printf(" 请输入乘数B:"); 
   scanf("%s",muilty); 
   len1=strlen(muiltied); 
   len2=strlen(muilty); 
   len=len1+len2; 
   for(i=0;i<len1;i++) 
   { 
 
       muiltied[i]=muiltied[i]-num; 
   } 
   for(i=0;i<len2;i++) 
   { 
      muilty[i]=muilty[i]-num; 
   } 
   result=bigmuilty(muiltied,len1,muilty,len2); 
   i=len-2; 
   printf("\n 所得结果A×B= "); 
   if(result[len-1]>0) 
   { 
     printf("%c",result[len-1]+num); 
   } 
   while(i>=0) 
   { 
      printf("%c",result[i]+num); 
   i--; 
   } 
   printf("\n"); 
   free(result); 
   return 0; 
} 






