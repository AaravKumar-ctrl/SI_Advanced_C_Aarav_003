#include <stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int n=2;

    for (int i=0;i<n;i++){
        int first=arr[0];
        for (int j=0; j<size-1;j++){
            arr[j]=arr[j+1];
        }
        arr[size-1]=first;
    }
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}