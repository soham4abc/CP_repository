#include <stdio.h>

int main ()
{
    printf("\n press your choice \n 1. Addition \n 2. Substraction \n 3.Multiplication \n 4.Division \n 5.Modulo \n ");
    int ch;
    scanf("%d",&ch);
    int ans=0;
    int a=0,b=0;
    switch(ch)
    {
        case 1:
        printf("\n enter 1st number and 2nd number: ");
        
        scanf("%d %d",&a,&b);
        ans=a+b;
        break;

         case 2:
        printf("\n enter 1st number and 2nd number: ");
        
        scanf("%d %d",&a,&b);
        ans=a-b;
        break;
         case 3:
        printf("\n enter 1st number and 2nd number: ");
        
        scanf("%d %d",&a,&b);
        ans=a*b;
        break;
         case 4:
        printf("\n enter 1st number and 2nd number: ");
        
        scanf("%d %d",&a,&b);
        ans=a/b;
        break;
         case 5:
        printf("\n enter 1st number and 2nd number: ");
        
        scanf("%d %d",&a,&b);
        ans=a%b;
        break;
    }

    printf("\n the final answer:: %d", ans);
    return 0;
}