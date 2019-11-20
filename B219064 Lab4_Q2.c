// slope of a line
#include<stdio.h>
int main()
{
	float x1,x2,y1,y2,slope;
	printf("enter the value of all x1,x,y1,y2 respectively\n");
	scanf("%f %f %f %f",&x1,&x2,&y1,&y2);
	slope=(y2-y1)/(x2-x1);
	printf("the slope of the line is= %f",slope);
	return (0);
}
