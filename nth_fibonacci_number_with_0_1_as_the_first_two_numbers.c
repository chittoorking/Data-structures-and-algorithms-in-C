//n th fibonacci number using recursion
#include <stdio.h>
int fibonacci(int a)
{
  int x;
	if(a==0)
      return 0;
  else if (a==1)
	  return 1;
  else
	  return fibonacci(a-1)+fibonacci(a-2);
}
int main()
{
  int a;
  printf("Enter a number n to find n'th fibonacci number  ");
  scanf("%d",&a);
  int f=fibonacci(a)  ;
  printf("%d\n",f);
}