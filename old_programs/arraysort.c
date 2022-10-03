#include <stdio.h>
int main()
{
    int n;
    int m;
    int ar1[m];
    int ar2[n];
    int fin[m+n];
    
    scanf("%d",&m);
    scanf("%d",&n);
    for (int i=0;i<m;i++)
    {
        fflush(stdin);
        scanf("%d",&ar1[i]);
    }
    
    for (int i=0;i<n;i++)
    {
        fflush(stdin);
        scanf("%d",&ar2[i]);
        
    }
    int count=0;
    for (int i=0;i<m;i++)
    {
        fflush(stdin);
        fin[count]==ar1[i];
        count++;
    }
    for (int i=0;i<m;i++)
    {
        fflush(stdin);
        fin[count]==ar2[i];
    }
     int l= sizeof(fin)/sizeof(fin[0]);
     selectionSort(fin,l);
     for(int i=0;i<m+n;i++)
     {
         printf("%d ",fin[i]);
     }
    
    
    return 0;
    
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++) {
 
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
 
        // Swap the found minimum element
        // with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}