#include <stdio.h>
int main(){
    int arr[] = {10,20,30,40,50};
    int length= sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    float average;

    for(int i=0; i<length;i++)
        sum+=arr[i];
    average=sum/length;
    printf("Sum: %d", sum);
    printf("\n Average: %f", average);
    return 0;
}