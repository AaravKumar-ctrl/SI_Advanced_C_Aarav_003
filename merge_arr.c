#include <stdio.h>

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8, 10};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int mergesize = size1 + size2;
    int mergedArray[mergesize];
    for (int i = 0; i < size1; i++) {
        mergedArray[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedArray[size1 + i] = arr2[i];
    }
    printf("\n Merged Array:");
    for (int i = 0; i < mergesize; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");
    return 0;
}