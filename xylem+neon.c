#include <stdio.h>

int main() {
    int n, t, last = 0, mid = 0, sq, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    //Xylm 
    t = n;
    last = last + (t % 10);
    for (t = t/10; t > 9; t /= 10) {
        mid = mid + (t % 10);
    }
    last = last + t;

    //Neon
    for (sq = n * n; sq > 0; sq /= 10) {
        sum = sum + (sq % 10);
    }

    printf("\n%d is %s number.", n, (last == mid) ? "a Xylem" : "a Phloem");
    printf("\n%d is %s Neon number.", n, (sum == n) ? "a" : "NOT a");
    
    if ((last == mid) && (sum == n))
        printf("\n\n%d is BOTH Xylem and Neon!\n", n);
    else
        printf("\n\n%d is NOT both.\n", n);

    return 0;
}