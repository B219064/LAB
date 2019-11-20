//q. 15 pattern 4
#include<stdio.h>
int main()
{
	int row,colstar,colspace;
	int totalrow=5;
	for(row=1;row<=totalrow;row++)
	{
		for(colspace=totalrow-row;colspace>=1;colspace--)
	{
		printf("@");
	}
	for(colstar=1;colstar<=2*row-1;colstar++)
	{
	printf(" ");
	}	
		for(colspace=totalrow-row;colspace>=1;colspace--)
	{
		printf("@");
	}
	printf("\n");
	}
	
	for(row=totalrow-1;row>=1;row--)
	{
		for(colspace=1;colspace<=totalrow-row;colspace++)
		{
			printf("@");
		}
		for(colstar=1;colstar<=2*row-1;colstar++)
		{
			printf(" ");
		}
			for(colspace=1;colspace<=totalrow-row;colspace++)
		{
			printf("@");
		}
		printf("\n");
	}
	
}
