/*********************************************************************/
/* 1.c -- 计算大数的阶乘  计算10000以内阶乘    　                    */                        
/*********************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h> // for malloc()
#include <string.h> // for memset()
#define QUOTIETY 4  // 内存分配系数，计算10000以内阶乘设置为4就足够。

void process(const int index, int *result);
int cnt = 1;
int main(void)
{
     int index=0;
     int input = 0;
     int *result = NULL;
     printf(" 请输入你要计算的阶乘数，请不要超过10000:\n");
     scanf("%d", &input);
     while (input<=0 || input > 10000)
	 {
     printf(" 请输入合理的数据:\n");
     scanf("%d",&input);
	 }
     // 申请空间储存计算结果
     result=(int *)malloc(sizeof(int) * input * QUOTIETY);
     if (result==NULL)
	 {
      printf("内存申请失败！\n");
      exit(-1);
	 }
     memset(result, 0, sizeof(int) * input * QUOTIETY);  // 初始化存储空间
     result[0] = 1;
     // 进行阶乘计算
     for ( index= 1; index <= input; ++index)
	 {
     process(index, result);
	 }
     // 输出结果
     for (index = cnt - 1; index >= 0L; --index)
	 {
     printf("%d", result[index]);
	 }
     putchar('\n');
     printf(" 结果一共有%d位数！\n", cnt);
     free(result);
     return 0;
}
void process(const int index, int *result)
{
	 int product = 0;    // 乘积
     int carry = 0;      // 进位
     int remainder = 0;  // 余数
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


