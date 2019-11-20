#include<stdio.h>
int main()
{
int a,i,j;
printf("enter any number");
scanf("%d",&a);
for(i=1;i<a+1;i++)
{
    for(j=1;j<a+1;j++)
    {
        if(j<=a-i&&j>=1)
        printf(" 1");
        else if(j==(a+1)-i)
        printf(" 0");
        else
        printf("-1");
    }
    printf("\n");
}
return 0;
}
