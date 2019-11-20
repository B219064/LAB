#include<stdio.h>
int main()
{
	char ch;
	int time_in,time_out,hr_in,hr_out,min_in,min_out,parking_time;
	float total;
	printf("enter the following data:");
	printf("type of vehicle=\n");
	scanf("%c",&ch);
	printf("hour vehicle entered the lot (0-24)= \n");
	scanf("%d",&hr_in);
		printf("hour vehicle left the lot (0-24)= \n");
	scanf("%d",&hr_out);
	//	printf("minute vehicle entered the lot (0-60)= \n");
	//scanf("%d",&min_in);
	//	printf("minute vehicle left the lot (0-60)= \n");
	//scanf("%d",&min_out);
	parking_time=hr_out-hr_in;
	if(ch=='c')
	{
		if(parking_time==3)
		total=0;
	}
		else
		total=1.50*parking_time;
	
	if(ch=='t')
	{
		if(parking_time==2)
		total=parking_time;
	}
		else
		total=2.30*parking_time;
	
	if(ch=='b')
	{
		if(parking_time==1)
		total=2*parking_time;
	}
		else
		total=3.70*parking_time;
	
	printf("the total is = %f",total);
}
