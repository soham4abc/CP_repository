#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    double div,  s = 0.0;
    int fc=1;
    printf("i \t j \t fc \t s",fc);
        printf("\n");
        printf("\n");

    for (int i=1;i<=n;i++)
    {
        fc=1;
        printf("%d \t - \t - \t -",i);
        printf("\n");
        for(int j=1;j<=i;j++)
        {
            fc =  fc * j;
            printf("- \t %d \t %d \t -", j, fc);
            printf("\n");
            // printf("\n %d",fc);
        }
        div = (double)i/fc;
        s=s+div;
        printf("- \t - \t - \t %lf", s);
        printf("\n");
    }
    printf("\n \n \n %lf",s);

}
