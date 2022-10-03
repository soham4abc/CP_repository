#include<stdio.h>
int main()
{
int i,j;
	
    int MAX=0;
    int k=1;
    scanf("%d",&MAX);
    int space=(MAX*2)-2;
	/*run loop (parent loop) till number of rows*/
	for(i=1;i<=MAX;i++)
	{
		for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        
        for(int j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(int j=k;j>=1;j--)
        {
            printf("%d",j);
        }
        k++;
        printf("\n");
        space-=2;

	}
    return 0;
}