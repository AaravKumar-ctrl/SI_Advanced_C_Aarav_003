#include <stdio.h>
int main(){
    int arr[5]={23,5,89,2,42};
    int max=arr[0];
    int min=arr[0];

    for (int i=1;i<5;i++){
        if (arr[i]>max)
            max=arr[i];
        if (arr[i]<min)
            min=arr[i];
    }
    printf("Largest: %d", max);
    printf("\n Smallest: %d", min);
    return 0;
}