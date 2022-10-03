#include <stdio.h>

int main()
{
    printf("enter value");
    int a;
    
    scanf_s("%d", &a);
    int mid = (a / 2)+1 ;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i == 0)
                printf("*");
            else if (i == mid)
                printf("*");
            else if ((j == (a - 1)) && (i <= mid))
                printf("*");
            else if (j == 0)
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