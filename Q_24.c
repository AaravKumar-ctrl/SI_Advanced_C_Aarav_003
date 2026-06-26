#include <stdio.h>

int main(){
    int n,sum=0,rem,temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (temp=n;n>0; n/=10) {
        rem = n%10;
        sum+= rem*rem*rem;
    }
    if (temp==sum)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}