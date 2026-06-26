#include <stdio.h>

int main() {
    int arr[30], n, i, temp;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("\n Enter %d elements:", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    printf("\nReversed array is: ");
    for(i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}