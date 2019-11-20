// this program is to find the largest  number
#include<stdio.h>
int main()
{
   int a,b,c;
   printf("enetr the three numbers\n");
   scanf("%d%d%d",&a,&b,&c);
   if(a>b && a>c)
   printf("a is greater\n");
   else if(b>a && b>c)
   printf("b is greater\n");
   else
   printf("c is greater\n");
   return(0);}
