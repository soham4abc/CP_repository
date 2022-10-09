#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    while (*s != '\0')
    {
        if (*s == ' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c", *s);
        }
        s++;
    }
    return 0;
}
