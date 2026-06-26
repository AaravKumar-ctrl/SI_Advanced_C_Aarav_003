//KADANE
#include<stdio.h>

int main() {
int arr[]={-2, -3, 4, -1, -2, 1, 5, -3};
int size1= sizeof(arr) / sizeof(arr[0]);
int max, current;

max=current=arr[0];
for(int i=0; i<size1; i++){
    if(arr[i]>current+arr[i])
        current=arr[i];
    else
        current=current+a2rr[i];
    if(current>max)
        max=current;
}
printf("Maximum sum of subarray is= %d", max);
}
