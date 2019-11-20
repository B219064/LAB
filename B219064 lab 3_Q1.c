/* lab 3 que 1. executing some math problems */
#include<stdio.h>
int main()
{
	int x,y,p,s,total;
	printf("enter the values for x and y\n");
	scanf("%d %d",&x,&y);
	p=x*y;
	s=x+y;
	total=s*s+(s-x)*(p+y);
	printf("the total is =   %d",total);
	return(0);
	
}
