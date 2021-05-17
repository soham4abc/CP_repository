#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': printf("\n Vowel!");
        break;
        default:
        printf("\nNot vowel!");

    }
    return 0;      

}