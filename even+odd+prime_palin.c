#include <stdio.h>

int main() {
    int start, end, i, t, rev, j, prime;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    printf("\nEven Palindromes: ");
    for (i = start; i <= end; i++) {
        for (rev = 0, t = i; t > 0; t /= 10) 
            rev = (rev * 10) + (t % 10);
        if (rev == i && i % 2 == 0) 
            printf("%d ", i);
    }

    printf("\nOdd Palindromes: ");
    for (i = start; i <= end; i++) {
        for (rev = 0, t = i; t > 0; t /= 10) 
            rev = (rev * 10) + (t % 10);
        if (rev == i && i % 2 != 0) 
            printf("%d ", i);
    }

    printf("\nPrime Palindromes: ");
    for (i = start; i <= end; i++) {
        for (rev = 0, t = i; t > 0; t /= 10) 
            rev = (rev * 10) + (t % 10);
        
        if (rev == i && i > 1) {
            for (j = 2, prime = 1; j * j <= i; j++) {
                if (i % j == 0) 
                {
                    prime = 0; 
                    break; 
                }
            }
            if (prime) printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}