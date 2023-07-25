/***********************************************************/
/* 1.c   给出年月日，计算该日是该年第几天？                */
/************************************************************/
#include <stdio.h>
void main()
{
     int sum_day(int,int);
	 int leap(int year);
	 int year,month,day,days;
	 printf("\n");
	 printf(" 请输入所求日期(年(4位),月(2位),日(2位)):");
	 scanf("%d,%d,%d",&year,&month,&day);
	 printf(" %d,%d,%d",year,month,day);
	 days=sum_day(month,day);
	 if (leap(year) && month>=3)
       days=days+1;
     printf("是本年第%d天。\n",days);
}
 int sum_day(int month,int day)
 {
	 int day_tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
     int i;
	 for (i=1;i<=month-1;i++)
	    day+=day_tab[i];
	 return(day);
 }
 int leap(int year)
 {
	 int  leap;
 	 leap=year%4==0 && year%100!=0 || year%400==0;
	 return(leap);
 }
    

