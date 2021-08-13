#include<stdio.h>


int add(int n1, int n2);
int subtract(int n1, int n2);
int multiply(int n1, int n2);
int divide(int n1, int n2);


int main()
{
  int num1, num2;

  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  printf("%d + %d = %d\n", num1, num2, add(num1, num2));
  printf("%d - %d = %d\n", num1, num2, subtract(num1, num2));
  printf("%d * %d = %d\n", num1, num2, multiply(num1, num2));
  printf("%d / %d = %d\n", num1, num2, divide(num1, num2));

  return 0;
}


int add(int n1, int n2)
{
  int result;
  result = n1 + n2;
  return result;
}


int subtract(int n1, int n2)
{
  int result;
  result = n1 - n2;
  return result;
}


int multiply(int n1, int n2)
{
  int result;
  result = n1 * n2;
  return result;
}


int divide(int n1, int n2)
{
  int result;
  result = n1 / n2;
  return result;
}

//buggeduplife02