// this program is to calcl\ulate the area and the perimeter of rectangle
#include<stdio.h>
int main()
{
int l,b,a,p;
printf("enter the length and breadth \n");
scanf("%d%d",&l,&b);
a=l*b;
p=2*(l+b);
printf("the area is %d \n the perimeter are %d \n",a,p);
return (0);
}
