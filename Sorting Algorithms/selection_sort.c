#include <stdio.h>

    void selection(int arr[], int n)
    {
        for(int i=0;i<n-1;i++)
        {
            int min=i;
            int j;

            for(j=i+1;j<n;j++)
            {
                if(arr[min]>arr[j])
                {
                    min=j;
                }
            }

            int temp=0;
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }

    int main()
    {
        printf("Enter size of array: ");
        int n;
        scanf("%d",&n);

        int arr[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }
        
        selection(arr,n);

        for(int i=0;i<n;i++)
        {
            printf("%d", arr[i]);
        }

        return 0;
    }
