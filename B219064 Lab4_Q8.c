//greates number among ten numbers
#include<stdio.h>
int main()
{
	int i,a[10],greatest;
	printf("enter the values of numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]>greatest)
		greatest =a[i];
	}
	printf("the greates among the ten numbers are %d",a[i]);
	return 0;
}

