/*****************************************************************/
/* 1.c   指定年月日求距离1990年1月1日的天数及小时数              */
/*****************************************************************/
#include <stdio.h>
typedef struct date {
     int year;
	 int month;
	 int day;
	}DATE;
int countday(DATE);
int runyear(int);
void main()
{
	 DATE today;
	 int totalday;
	 printf(" 请输入指定年月日(yyyy,mm,dd):");
	 scanf("%d,%d,%d",&today.year,&today.month,&today.day);
	 totalday=countday(today)-1;
	 printf(" 总天数是 %d 天。\n",totalday);
	 printf(" 总小时数是 %d 。\n",24*totalday);
}
int countday(DATE currentday)
{
	 int permonth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
     int totalday=0,year,i;
	 for (year=1990;year<currentday.year;year++)
	 {
		 if (runyear(year))
         totalday= totalday+366;
		 else
         totalday= totalday+365;
	 }
	      if (runyear(currentday.year))
          permonth[2]+=1;
          for (i=0;i<currentday.month;i++)
          totalday+=permonth[i];
          totalday+=currentday.day;
          return(totalday);
}
int runyear(int year)
{
	 if ((year%4==0 && year%100!=0) || (year%400==0))
	 return 1;
	 else
	 return  0;
}
    

