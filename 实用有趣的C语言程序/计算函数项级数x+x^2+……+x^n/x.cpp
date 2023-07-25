#include <stdio.h>
#include <math.h> 
int main()
{	
 	int i;
 	double sum=0.0,x; 
 	printf("ÊäÈëxµÄÖµ£º\n");
 	scanf("%lf",&x);
 	for(i=0;i<=50;i++)
 	{
	 	sum+=pow(x,i);
		printf("%lf\n",sum);	
	}
    return 0;
}
