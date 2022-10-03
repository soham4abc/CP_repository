# include <stdio.h>

int main()
{
    int n=5;
     for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=(2*n); j++)
        {
            
            if (i<j)
                printf(" ");
            else
                printf("*");
             
            
            if (i<=((2*n)-j))
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
     for (int i=1; i<=n; i++)
    {
        for (int j=1;j<=(2*n);j++)
        {
            
            if (i>(n-j+1))
                printf(" ");
            else
                printf("*");
                 
            
            if ((i+n)>j)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}