// pattern 3 q.11
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter how many line u want\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		
		
		printf("*  ");
	    printf("\n");
	}
	
	return 0;
}
