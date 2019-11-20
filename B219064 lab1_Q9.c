#include <stdio.h>
 
int main()
{
  int n, a=0,b=1,c,w;
 
  printf("Enter the number of terms\n");
  scanf("%d", &n);
 
  printf("First %d terms of Fibonacci series are:\n", n);
  printf("%d,%d",a,b);
  for (w = 2; w < n; w++)
  {
    c=a+b;
    printf(",%d",c);
    a=b;
    b=c;
  }
  return 0;
}
