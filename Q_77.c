#include <stdio.h>
int main(){
    int arr[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("\n Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int water=0;
    for(int i=1; i<n-1;i++){
        int left_max = arr[i];
        int right_max = arr[i];
        for(int j=0;j<i;j++){
            if(arr[j]>left_max){
                left_max = arr[j];
            }
        }
        for(int j=i+1;j<n;j++){
            if(arr[j] > right_max){
                right_max = arr[j];
            }
        }
        int min_wall = left_max;
        if (left_max < right_max) {
            water += left_max - arr[i];
        } else {
            water += right_max - arr[i];
        }
        water += min_wall - arr[i];
    }
    printf("\n Water Trapped = %d", water);
    return 0;
}