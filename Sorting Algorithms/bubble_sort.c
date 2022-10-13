#include <stdio.h>

void bubble(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main()
{
    int arr[7]={6,7,8,4,3,1,2};

    bubble(arr,7);

    for(int i=0;i<7;i++)
        {
            printf("%d", arr[i]);
        }

        return 0;
}