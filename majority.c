#include <stdio.h>

int main() {
    int arr[] = {2, 2, 2, 2, 2, 2, 3, 4, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int half = size/2;
    int count = 0;

    for (int i=0; i<size; i++) {
        count=0;
        for (int j = i; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count>half) {
            printf("The majority element is: %d", arr[i]);
            break;
        }
    }
return 0;
}