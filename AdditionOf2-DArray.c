#include <stdio.h>
int main() {
int a[2][2]={{32,23},{65,56}};
int b[2][2]={{78,87},{98,89}};
int c[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nSum of the arrays:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
