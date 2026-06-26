#include <stdio.h>

int main() {
    int n,rev=0,rem,temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (temp=n;n>0;n/=10)
        rev=rev*10+n%10;
    if (temp==rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}