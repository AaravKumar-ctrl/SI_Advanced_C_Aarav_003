#include <stdio.h>
int main(){
    int arr[10]={10,20,30,40,50}; 
    int size=5;
    int num=99;
    int pos=3;
    for (int i=size;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=num;
    size++;
    printf("New Array: ");
    for (int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}