// sum, largest ,avg smallest using switch
#include<stdio.h>
int main()
{
	int a,sum,avg,b,c,d,e;
	char ch;
	printf("enter 5 numbers\n");
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e);
	printf("now enter a character \n");
	scanf("%c",&ch);
	switch(ch)
	{
		case '>': 
		if(a>b && a>c && a>d && a>e)
		printf("a is the greatest");
		else if(b>a && b>c && b>d && b>e)
		printf("b is the greatest");
		else if (c>a && c>b && c>d && c>e)
		printf("c is the greatest");
		else if (d>a && d>b && d>c&& d>e)
		printf("d is the greatest");
		else 
		printf("e is the greatest");
		break;
		case '<':
			if(a<b && a<c && a<d && a<e)
		printf("a is the smallest");
		else if(b<a && b<c && b<d && b<e)
		printf("b is the smallest");
		else if (c<a && c<b && c<d && c<e)
		printf("c is the smallest");
		else if (d<a && d<b && d<c&& d<e)
		printf("d is the greatest");
		else 
		printf("e is the greatest");
		break;
			
		
	}
}
