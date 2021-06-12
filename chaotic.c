#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int l=0;
        scanf("%d",&l);
        int ar[l];
        int swap=0;
        for(int i=0;i<l;i++)
        {
            scanf("%d",&ar[i]);
        }
        int brb,t,flag=0;
        for(int i=l-1;i>=0;i--)
        {
            if(ar[i]==i+1)
            continue;
            else if(ar[i-1]==(i+1)&&(i-1)>=0)
            {
                swap++;
                t=ar[i];
                ar[i]=ar[i-1];
                ar[i-1]=t;

            }
            else if(ar[i-2]==(i+1)&&(i-2)>=0)
            {
                swap+=2;
                t=ar[i-1];
                ar[i-1]=ar[i-2];
                ar[i-2]=t;
                t=ar[i];
                ar[i]=ar[i-1];
                ar[i-1]=t;

            }
            else
            flag=1;
                        
        }
        // for(int i=0;i<l-1;i++)
        // {
        //     if(ar[i]>(i+1))
        //     swap+=ar[i]-(i+1);
        //     else if((ar[i]-(i+1))>2)
        //     flag=1;
        // }
        if(flag==1)
        printf("\n Too chaotic");
        else
        printf("%d",swap);
    }
}