#include <stdio.h>

int main()
{
    for (int i=0;i<=4;i++)
    {
        for(int j=i;j<=i*2 ;j++)
        {
            if(j!=0)
            printf("%d",j);
            else
            printf("%d",1);
        }
        printf("\n");
    }
    return 0;
}