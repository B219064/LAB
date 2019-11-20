#include<stdio.h>
int main()
{

float a,b,c,avg,avg2;
printf("enter the marks of three subjects\n");
scanf("%f %f %f",&a,&b,&c);
avg=((a+b+c)/300)*100;
avg2=((b+c)/200)*100;
printf("avg2 is = %f ",avg2);
printf("avg is = %f",avg);
if (avg>=90 || c>=90)
{
	printf("grade is A");
}
else if(avg>=70 && avg<90)
{
	printf("grade is B");
}

else if(avg2>70)
{
	printf("grade is c");
}
else if(avg>=50 && avg < 70)
{
	printf("grade is D");
}
else if(avg < 50)
{
	printf("Grade is F");
}



}
