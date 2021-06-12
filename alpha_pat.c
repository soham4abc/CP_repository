#include <stdio.h>

int main()
{
    char ch='G';
    for(int i=1;i<=7;i++)
    {
        char ch1=ch;
        for(int j=7;j>=i;j--)
        {
            printf("%c",ch1);
            ch1--;
        }
        ch--;
        printf("\n");
    }
}