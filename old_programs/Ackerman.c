#include<stdio.h>
int ackerman(int m, int n);

int main()
{
        int m,n;
        printf("Enter two numbers :: \n");
        scanf("%d%d",&m,&n);
        printf("\nOUTPUT :: %d\n",ackerman(m,n));
        return 0;
}

int ackerman(int m, int n)
{
        if(m==0)
                return n+1;
        else if(n==0)
                return ackerman(m-1,1);
        else
                return ackerman(m-1,ackerman(m,n-1));
}