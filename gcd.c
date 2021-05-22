#include <stdio.h>

int main()
{
    printf("Enter 1st number: ");
    int a;
    scanf("%d",&a);
    printf("\n Enter second number: ");
    int b,min,max;
    scanf("%d",&b);
    if(a<=b)
    min=a;
    else
    min=b;
    for(int i=1;i<=min;i++)
    {
        if((a%i) ==0 && (b%i) == 0)
        {
            max=i;
        }
    }
    printf("\nThe GCD of the numbers are : %d",max);
    return 0;
    
}