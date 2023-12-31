/*************************************************************/
/* 1.c -- 计算大数的开平方，只保留整数部分                 　*/                        
/*************************************************************/
#include <stdio.h>
#include<string.h>
#define MAX_NUM	2000
int big(char s1[], char s2[])//两个大数比较大小
{   
	int len1,len2,i;
	int q = 0;
	while (s1[q] == '0')
	{
		q++;
	}
	strcpy(s1, s1 + q);
	if (strlen(s1) == 0)
	{
		s1[0] = '0';
		s1[1] = 0;
	}
	q = 0;
	while (s2[q] == '0')
	{
		q++;
	}
	strcpy(s2, s2+q);
	if (strlen(s2) == 0)
	{
		s2[0] = '0';
		s2[1] = 0;
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (len1 > len2)
	{
		return 1;
	}
	else if (len1 < len2)
	{
		return 0;
	}
	else
	{
		for (i = 0; i < len1; i++)
		{
			if (s1[i] > s2[i])
			{
				return 1;
			}
			else if (s1[i] < s2[i])
			{
				return 0;
			}
		}
	}
	return 0;
}
void mul(char s[], int t, char re[])//一个大数乘以t
{
	int left = 0, len;
    int i ;
	int k = 0;
	int j = 0;
	char c;
	for (i = strlen(s) - 1; i >= 0; i--)
	{
		k = t * (s[i] - '0') + left;
		re[j++] = (k % 10) + '0';
		left = k / 10;
	}
	while (left > 0)
	{
		re[j++] = (left % 10) + '0';
		left /= 10;
	}
	re[j] = 0;
	len = strlen(re);
	for (i = 0; i < len / 2; i++)
	{
		c = re[i];
		re[i] = re[len - 1 - i];
		re[len - 1 - i] = c;
	}
}
void sub(char a[], char b[])//两个大数相减
{
	int left, len1, len2;
	int temp;
    int j;
	len1 = strlen(a) - 1;
	len2 = strlen(b) - 1;
	left = 0;
	while (len2 >= 0)
	{
		temp = a[len1] - b[len2] + left;
		if (temp < 0)
		{
			temp += 10;
			left = -1;
		}
		else
		{
			left = 0;
		}
		a[len1] = temp + '0';
		len1--;
		len2--;
	}
	while (len1 >= 0)
	{
		temp = a[len1] - '0' + left;
		if (temp < 0)
		{
			temp += 10;
			left = -1;
		}
		else
		{
			left = 0;
		}
		a[len1] = temp + '0';
		len1--;
	}
	j = 0;
	while (a[j] == '0')
	{
		j++;
	}
	strcpy(a, a + j);
	if (strlen(a) == 0)
	{
		a[0] = '0';
		a[1] = 0;
	}
}
void sqr(char s[], char re[])//大数开方
{
	char temp[MAX_NUM];
	char left[MAX_NUM];
	char p[MAX_NUM];
	int i, j, len1, len2, q;
	len1 = strlen(s);
	if (len1 % 2 == 0)
	{
		left[0] = s[0];
		left[1] = s[1];
		left[2] = 0;
		j = 2;
	}
	else
	{
		left[0] = s[0];
		left[1] = 0;
		j = 1;
	}
	re[0] = '0';
	re[1] = 0;
	q = 0;
	while (j <= len1)
	{
		mul(re, 20, temp);
		len2 = strlen(temp);
		for (i = 9; i >= 0; i--)
		{
			temp[len2 - 1] = i + '0';
			mul(temp, i, p);
			if (! big(p, left))
			{
				break;
			}
		}
		re[q++] = i + '0';
		re[q] = 0;
		sub(left, p);
		len2 = strlen(left);
		left[len2] = s[j];
		left[len2 + 1] = s[j + 1];
		left[len2 + 2] = 0;
		j += 2;
	}
}
int main() //主程序
{
	char s[MAX_NUM];
	char re[MAX_NUM];
	int i;
	printf("\n 请输入被开平方整数n: ");
    scanf("%s", &s);
		re[0] = 0;
		sqr(s, re);
		i = 0;
		while (re[i] == '0')
		{
			i++;
		}
		strcpy(re, re+i);
		printf("\n 开方结果为:");
		printf(" %s\n",re);
	return 0;
}

 
  


