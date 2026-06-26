#include <stdio.h>

int main(){
    int arr[8]={1,2,2,3,4,4,4,5};
    int size=8, j=0;

    for (int i=0; i<size-1;i++){
        if (arr[i]!=arr[i+1]){
            arr[j++]=arr[i];
        }
    }
    arr[j++]=arr[size-1]; 
    for (int i=0;i<j;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}