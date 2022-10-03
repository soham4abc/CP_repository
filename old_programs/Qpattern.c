#include <stdio.h>

int main()
{
    printf("enter value");
    int a;
    
    scanf("%d", &a);
    
    int lower=(int)a*0.75;
    int mid = lower/2 ;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if ((i == 0)&&(j<lower))
                printf("*"); 
            else if((i==lower)&&(j<=lower))
                printf("*");
            
            else if ((j == 0) &&(i<lower))
                printf("*");
            else if ((j==lower)&&(i<=lower))
                printf("*");
            else if ((i > mid) && (i == j))
                printf("*");

            else
                printf(" ");

        }
        
        printf("\n");
    }

    return 0;
}