/*********************************************************************/
/* 1.c -- ��������Ľ׳�  ����10000���ڽ׳�    ��                    */                        
/*********************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h> // for malloc()
#include <string.h> // for memset()
#define QUOTIETY 4  // �ڴ����ϵ��������10000���ڽ׳�����Ϊ4���㹻��

void process(const int index, int *result);
int cnt = 1;
int main(void)
{
     int index=0;
     int input = 0;
     int *result = NULL;
     printf(" ��������Ҫ����Ľ׳������벻Ҫ����10000:\n");
     scanf("%d", &input);
     while (input<=0 || input > 10000)
	 {
     printf(" ��������������:\n");
     scanf("%d",&input);
	 }
     // ����ռ䴢�������
     result=(int *)malloc(sizeof(int) * input * QUOTIETY);
     if (result==NULL)
	 {
      printf("�ڴ�����ʧ�ܣ�\n");
      exit(-1);
	 }
     memset(result, 0, sizeof(int) * input * QUOTIETY);  // ��ʼ���洢�ռ�
     result[0] = 1;
     // ���н׳˼���
     for ( index= 1; index <= input; ++index)
	 {
     process(index, result);
	 }
     // ������
     for (index = cnt - 1; index >= 0L; --index)
	 {
     printf("%d", result[index]);
	 }
     putchar('\n');
     printf(" ���һ����%dλ����\n", cnt);
     free(result);
     return 0;
}
void process(const int index, int *result)
{
	 int product = 0;    // �˻�
     int carry = 0;      // ��λ
     int remainder = 0;  // ����
     int i = 0;
	 for (i = 0; i < cnt; ++i)
	 {
     product = result[i] * index + carry;
     carry = product / 10;
     remainder = product % 10;
     result[i] = remainder;
	 }
     if (carry!= 0)
	 {
     while (carry/10!= 0)
	 {
      result[cnt]=carry % 10;
      carry /= 10;
      ++cnt;
	 }
       result[cnt++] = carry;
	 }
}


