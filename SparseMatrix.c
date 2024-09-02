#include<stdio.h>
int main()
{
    int r,c,i,j,arr[r][c],count = 0;
    printf("Enter the number of rows :");
    scanf("%d",&r);
    printf("Enter the number of columns :");
    scanf("%d",&c);
    printf("Enter the elements : \n ");
    for ( i = 0; i < r; i++){
        for ( j = 0;j< c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for ( i = 0; i < r; i++){
        for ( j = 0;j< c; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
        for ( i = 0; i < r; i++){
        for ( j = 0;j< c; j++){
            if (arr[i][j]==0)
                count++;            
        }
    }
    if (count>((r*c)/2)){
        printf("This is a Sparse Matrix");
    }
    else
        printf("This is not a Sparse Matrix");
    return 0;
}