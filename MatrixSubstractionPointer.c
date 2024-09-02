#include <stdio.h>
void substractArrays(int* array1, int* array2, int* result, int size) {
    for (int i = 0; i < size; ++i) {
        result[i] = array1[i] - array2[i];
    }
}
int main() {
    int size = 3;
    int array1[] =  {4, 5 ,6};
    int array2[] = {1, 2, 3};
    int result[size];
    substractArrays(array1, array2, result, size);
    printf("Resultant array after substraction:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}