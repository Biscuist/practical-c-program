/******************************************************************/
/* 1.c -- ��������ĳ˷�                                        ��*/                        
/******************************************************************/
#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
char * bigmuilty(char*muiltied,int len1,char *muilty,int len2)
//muiltied Ϊ��������len1Ϊ�䳤�ȣ�muiltyΪ������len2Ϊ�䳤�ȡ� 
{ 
   int len; 
   int i=0; 
   int j=0; 
   int k=0; 
   int tmp_result=0; 
   int carry=0; 
   char* result; 
   len=len1+len2; //������������ǵ���󳤶�Ϊ�����뱻�����ĳ��Ⱥ� 
   result=(char*)calloc(len,1);//��̬�����ڴ� 
   for(i=0;i<len2;i++)//�ó�����ÿһλȥ���Ա����� 
 { 
     for(j=0;j<len1;j++) 
     { 
        tmp_result=muilty[len2-i-1]*muiltied[len1-j-1];//�õ���ʱ��� 
        result[j+i]+=tmp_result;
		//�����0Ϊ��ʼ��ţ��������ͳ����±�ֱ���������������ӣ�������ŵ�λ��Ϊj+i 
     } 
     for(k=0;k<=j+i-1;k++)//��������ʹÿλ��ֵ��0-9֮�� 
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
   char muiltied[BUFSIZ];//���������λ�� 
   char muilty[BUFSIZ];
   printf(" �����뱻����A:"); 
   scanf("%s",muiltied); 
   printf(" ���������B:"); 
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
   printf("\n ���ý��A��B= "); 
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






