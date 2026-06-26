#include <stdio.h>

int main(){
    int arr1[3] = {1,2,3};
    int arr2[4] = {4,5,6,7};
    int arr3[7];
    for (int i=0;i<3;i++){
        arr3[i]=arr1[i];
    }
    for (int i=0;i<4;i++){
        arr3[3+i]=arr2[i];
    }
    for (int i=0;i<7;i++){
        printf("%d ",arr3[i]);
    }
    return 0;
}