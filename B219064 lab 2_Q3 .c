// this program is to print the pattern
#include<stdio.h>
int main()
{
int i,j,row;
printf("enter the no.of row\n");
scanf("%d",&row);
for(i=0;i<=row;i++)
{
 for(j=1;j<=i;j++)
 printf("*");
printf("\n");
}

return(0);
}
