#include<stdio.h>
#include<math.h>
int main()
{
	int x,a,b,c,eq,x1,x2;
	printf("enter the equation\n");
	scanf(" %d %d %d %d ",&a,&x,&b,&c);
	printf("the equatio is %d(%d^2)+(%d*%d)+%d\n\n",a,x,b,x,c);
	//eq= a*(x^2)+(b*x)+c;

	x1=-b+sqrt(b^2-(4*a*c))/2*a;
		printf("the 1st root are %d\n",x1);

	x2=-b-sqrt(b^2-(4*a*c))/2*a;
		printf("the 2nd root is = %d \n",x2);
	
}
