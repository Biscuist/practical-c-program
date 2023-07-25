/***************************************************************/
/* 1.c   给定出生年月日及现在年月日,计算天数                   */
/***************************************************************/
#include <stdio.h>
void main()
{
     int sum_day(int,int);
	 int leap(int year);
	 int year1,month1,day1,days1;
	 int year,month,day,days,j,dayss=0;
	 printf(" 请输入出生年月日(yyyy,mm,dd):");
	 scanf("%d,%d,%d",&year1,&month1,&day1);
	 printf(" 请输入现在年月日(yyyy,mm,dd):");
	 scanf("%d,%d,%d",&year,&month,&day);	
	 days1=sum_day(month1,day1);
	 if (leap(year1) && month1>=3)
       days1=days1+1;
	 days=sum_day(month,day);
	 if (leap(year) && month>=3)
       days=days+1;
   	 if (year1> year) 
		 printf(" 输入有误");
	 else
		 if (year1==year){
		 printf("\n");
		 printf(" 总天数是%d天 。\n",days-days1);
		 printf(" 总小时数是 %d 。\n",24*(days-days1));
		 }
	 else 
     {
     for (j=year1+1;j<=year-1;j++){
       if (leap(j)==1)
	   dayss=dayss+366;
	   else
	   dayss=dayss+365;
	 }
	  if (leap(year1)==1)
      dayss=dayss+days+366-days1;
	  else
	  dayss=dayss+days+365-days1;
	  printf("\n");
	  printf(" 总天数是 %d 天。\n",dayss);
	  printf(" 总小时数是 %d 。\n",24*dayss);
	  }
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
    

