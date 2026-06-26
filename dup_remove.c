//DUPLICATE REMOVAL
#include <stdio.h>

int main() {
    int arr[] = {2, 4, 2, 6, 4, 8, 2, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("\n Original array:");
    for (int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    for (int i=0; i<size; i++) {
        for (int j=i+1; j<size; j++) {
            if (arr[i] == arr[j]) {
                for (int k=j; k<size-1; k++) {
                    arr[k] = arr[k + 1];
                } 
                size--;
                j--;
            }
        }
    }
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}