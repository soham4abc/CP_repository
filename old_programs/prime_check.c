#include <stdio.h>

int main()
{
    printf("Enter a number: ");
    int a;
    scanf("%d",&a);
    int flag=0;
    for (int i=2;i<a/2;i++)
    {
        if((a%i)==0)
        {
            flag=1;
            break;            
        }        
    }
    if(flag==0)
    {
        printf("\n Prime number");
    }
    else
    printf("\nNot a prime number: ");
    return 0;
}