// this program is to find the mean and the deviation of the number.
#include<stdio.h>
int main ()
{
  int a,b,c,d;
  float avg,dev_a,dev_b,dev_c,dev_d;
  printf("enter any four numbers \n");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  avg=(a+b+c+d)/4;
  printf("the average is %f\n",avg);
  dev_a=avg - a;
  printf("deviation from 1st number is %f\n", dev_a);

 dev_b=avg - b;
 printf("deviation from 2nd number is %f\n", dev_b);

   dev_c=avg - c;
     printf("deviation from 3rd number is %f\n", dev_c);
      dev_d=avg - d;

     printf("deviation from 4th number is %f\n", dev_d);
     return(0);


}
