//this program is to swap two numbers
#include<stdio.h>
int main()
{
int a,b , temp;
printf("enter three numbers\n");
scanf("%d%d",&a,&b);
printf("the two numbers are %d %d\n",a,b);
temp=a;
a=b;
b=temp;
printf("the swaped numbers are %d %d\n" , a , b);
return(0);
}
