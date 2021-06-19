#include <stdio.h>

int factorial(int n)
{
    int res = 1;
    for (int i=2; i<=n; i++)
       res *= i;
    return res;
}
 

float sum(int n)
{
    float sum = 0;
    for (int i = 1; i <= n; i++)
        sum += 1.0/factorial(i);
    return sum;
}
 

int main()
{
    int n;
    scanf("%d",&n);
    float res=sum(n);
    printf("\n%f",res);
    return 0;
}