#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int i, element, pos;
    printf("Original array: ");
    for(i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    element=99;
    pos=2;
    for(i=size; i>pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = element;
    size++;
    printf("After inserting %d at index %d: ", element, pos);
    for(i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    pos = 3;
    for(i = pos; i < size-1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    printf("After deleting element at index %d: ", pos);
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}