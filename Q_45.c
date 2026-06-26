#include <stdio.h>
int main(){
    int arr[7]={10,20,30,40,50,60,70};
    int target=60;
    int low=0,high=6;

    while (low<=high){
        int mid = (low+high)/2;
        if (arr[mid]==target){
            printf("Found at index: %d", mid);
            return 0;
        }
        if (arr[mid]<target)
        low=mid+1;
        else high=mid-1;
    }
    printf("Not found");
    return 0;
}