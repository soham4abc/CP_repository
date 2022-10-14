//triplet representation
#include<stdio.h>
#include<stdlib.h>
void assign(int **M, int size, int n, int m, int arr[n][m]){
    int k=1;
    M[0][0]=n;
    M[0][1]=m;
    M[0][2]=size;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]!=0){
                M[k][0]=i;
                M[k][1]=j;
                M[k][2]=arr[i][j];
                k++;
            }
        }
    }
}
int main(){
    int n,m;
    printf("Enter the row: ");
    scanf("%d",&n);
    printf("Enter the column: ");
    scanf("%d",&m);

    int arr[n][m];

    printf("Enter the elements:\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nThe array is\n");

    int size=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
            if(arr[i][j]!=0){
                size++;
            }
        }
        printf("\n");
    }
    //triplet
    size++;//due to header row
    // int M[size][3];
    int **M = (int **)malloc(size*sizeof(int *));
    for(int i = 0;i<size;i++){
        M[i]=(int *)malloc(3*sizeof(int));
    }
    //alternative to poimter
    // int k=1;
    // M[0][0]=n;
    // M[0][1]=m;
    // M[0][2]=size;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(arr[i][j]!=0){
    //             M[k][0]=i;
    //             M[k][1]=j;
    //             M[k][2]=arr[i][j];
    //             k++;
    //         }
    //     }
    // }

    assign(M,size,n,m,arr);
    printf("\nTriplet representation of matrix is: \n");
    for(int i=0; i<size; i++){
        for( int j=0; j<3;j++){
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }



    
    return 0;
}