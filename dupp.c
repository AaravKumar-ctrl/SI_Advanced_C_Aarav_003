//DUPLICATE
#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 4, 8, 2, 10, 6};
    int size = sizeof(arr) / sizeof(arr[0]);    // Calculate the total number of elements in the array
    printf("Duplicate elements in the given array: \n");
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                break; 
            }
        }
    }
    return 0;
}