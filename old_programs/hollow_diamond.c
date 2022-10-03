#include <stdio.h>

int main()
{
    int a;
    //scanf("%d",&a);
    a=10;
    int hf=a/2;
    for(int i=1;i<=hf;i++)
    {
        for(int j=hf;j>=i;j--)
        {
            printf("*");
        }
        
        
        for(int j=1;j<=((i-1)*2)+1;j++)
        {
            printf(" ");
        }
        for(int j=hf;j>=i;j--)
        {
            printf("*");
        }
        
        
        printf("\n");
    }
    
    for(int i=hf-1;i>=1;i--)
    {
        printf("*");
        for(int j=i;j<=hf-1;j++)
        {
            printf("*");
        }
        
        
        for(int j=1;j<=((i-1)*2)+1;j++)
        {
            printf(" ");
        }
        printf("*");
        for(int j=i;j<=hf-1;j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}