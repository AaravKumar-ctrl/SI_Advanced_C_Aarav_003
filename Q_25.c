#include <stdio.h>

int main(){
    int n,sum=0,temp;

    printf("Enter a number: ");
    scanf("%d", &n);
    for (temp=n; n>0; n/=10){
        int rem=n%10,fact=1;
        for (int i=1;i<=rem;i++){
            fact=fact*i;
        }
        sum += fact;
    }
    if (temp==sum)
        printf("Strong");
    else
        printf("Not Strong");
    return 0;
}