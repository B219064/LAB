//approximate value of e
#include<stdio.h>
int main()
{
	double i=1.0;
	double sum=1;
	int n=0;
	while (i>=0.0000001)
	{
		n++;
		i=i/n;
		sum=sum+i;
	}
	printf("approximately value of e is : %f",sum);
	return 0;
}
