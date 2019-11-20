//detrmining the age of the person
#include<stdio.h>
int main()
{
	int m1,d1,y1,m2,d2,y2,m3,d3,y3;
	printf("enter the month , day and year of yours\n");
	scanf("%d %d %d",&m2,&d2,&y2);
	printf("your DOB is %d | %d | %d\n",m2,d2,y2);
	printf("now enter the today's date\n");
	scanf("%d %d %d",&m1,&d1,&y1);
	printf("today's date is %d | %d | %d\n",m1,d1,y1);
	if(d2>d1)
	{
		m1=m1-1;
		d1=d1+30;
	}
	if(m2>m1)
	{
		y1-y1-1;
		m1=m1+12;
	}
	if(y2>y1)
	{
		return(0);
	}
	
    d3=d1-d2;
	m3=m1-m2;
	y3=y1-y2;
	printf("ur age is %d years %d months %d days",y3,m3,y3);
		
		
}
