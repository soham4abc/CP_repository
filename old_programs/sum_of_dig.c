#include <stdio.h>

int main()
{
    printf("enter a number: ");
    int a;
    scanf("%d",&a);
    int a1=a;
    int s=0;
    while(a1>0)
    {
        int k=a1%10;
        s+=k;
        a1=a1/10;
    }
    printf("\nThe sum of digits is: %d",s);
    return 0;
}