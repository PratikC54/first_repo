#include<stdio.h>
int main()
{
    int arr1[2][2]={{5,6},{7,8}};
    int arr2[2][2]={{1,2},{3,4}};
    int result[2][2];
    int* p1=&arr1[0][0];
    int* p2=&arr2[0][0];
    int* p3=&result[0][0];
    for ( int i = 0; i < 4; i++)
    {
        *(p3+i) = *(p1+i) + *(p2+i);
    }
        printf("Value After Addition : ");
        for (int  i = 0; i < 2; i++){
            for (int j = 0; i < 2; j++){
                printf("%d",result[i][j]);
            }
            printf("\n");
        }
    return 0;
}