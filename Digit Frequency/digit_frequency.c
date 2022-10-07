#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char str[1000];
    int num[10];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    gets(str);

    for (int i = 0; i < 10; i++)
    {
        num[i] = 0;
    }

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '0')
        {
            num[0]++;
        }
        else if (str[i] == '1')
        {
            num[1]++;
        }
        else if (str[i] == '2')
        {
            num[2]++;
        }
        else if (str[i] == '3')
        {
            num[3]++;
        }
        else if (str[i] == '4')
        {
            num[4]++;
        }
        else if (str[i] == '5')
        {
            num[5]++;
        }
        else if (str[i] == '6')
        {
            num[6]++;
        }
        else if (str[i] == '7')
        {
            num[7]++;
        }
        else if (str[i] == '8')
        {
            num[8]++;
        }
        else if (str[i] == '9')
        {
            num[9]++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}
