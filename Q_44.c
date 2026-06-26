#include <stdio.h>
int main(){
    int arr[5]={12,45,7,93,28};
    int target=93;
    for (int i=0;i<5;i++){
        if (arr[i]==target){
            printf("Element found at index: %d",i);
            break;
        }
    }
    printf("Element not found");
    return 0;
}