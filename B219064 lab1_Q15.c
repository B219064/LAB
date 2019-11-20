//this program is to reverse an given number
#include<stdio.h>
int main()
{
int a,b;
printf("enter any number\n");
scanf("%d",&a);
while(a/10!=0)
{
b=a%10;
printf("%d",b);
a=a/10;
}
printf("%d",a);
return (0);
}
