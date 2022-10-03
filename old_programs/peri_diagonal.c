#include <stdio.h>

int main()
{
    int a=10;
    for (int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if((j==i)||(j==0)||(j==(a-1))||(j==(a-1-i))||(i==0)||(i==(a-1)))
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}