// second right most integer
#include<stdio.h>
int main()
{
	int x,y,n;
	printf("enter the values of n ");
	scanf("%d",&n);
	x=n/10;
	y=x%10;
	printf("the second right most integer is = %d",y);
	return(0);
	
}
