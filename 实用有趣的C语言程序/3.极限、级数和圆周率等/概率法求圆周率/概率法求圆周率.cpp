#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

/* ���ʷ�����Բ���� */
double probability_calculate_pi()
{
    int i,n,sum=0;
    double x,y;
   
    printf("please input point count\n");//����������
    scanf("%d",&n);

    srand(time(NULL));
    for(i=0;i<n;i++)
    {
        x =(double) rand()/RAND_MAX; //����0~1��һ�������x
        y =(double) rand()/RAND_MAX; //����0~1��һ�������y

        if( (x*x + y*y)<=1)
        {
            sum++;
        }
    }
    return((double)4*sum/n);
    
}
int main()
{
	double pi = probability_calculate_pi();
	printf("%lf\n",pi);
	return 0;
}



