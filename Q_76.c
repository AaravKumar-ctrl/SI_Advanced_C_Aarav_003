#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,6,7,8,9};
    int n=9;
    int missing;
    int sum1 = 0;
    int sum2 = 0;
for(int i=1; i<=n; i++)
    sum1= sum1+i;
for(int i=0; i<n-1; i++)
    sum2= sum2+arr[i];
missing = sum1-sum2;
printf("missing number is %d", missing);
return 0;
}