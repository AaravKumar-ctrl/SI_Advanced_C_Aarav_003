#include <stdio.h>
int main(){
    int arr[6] = {10, 20, 30, 40, 50}; 
    int size = 5, element = 37, pos = 2; 
    for (int i=size-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=element;
    size++;
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}