#include <stdio.h>

int main(){
    int n, rev=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (n; n!=0; n/=10)
        rev= rev*10+n%10;
    printf("Reversed: %d", rev);
    return 0;
}