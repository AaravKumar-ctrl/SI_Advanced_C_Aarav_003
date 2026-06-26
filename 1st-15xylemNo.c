#include <stdio.h>

int main() {
    int count = 0;
    int sum = 0;
    for (int i = 0; ; i++) {
        
        int n = i;
        int last = 0;
        int mid = 0;
        
        last = last + (n % 10);
        n /= 10;
        
        for (; n >= 10; n /= 10) {
            mid = mid + (n % 10);
        }
        
        last = last + n;
        
        if (last == mid) {
            printf("%d ", i);
            sum = sum + i;
            count++; 
        }

        if (count == 15) {
            break;
        }
    }
    
    printf("\n\nThe sum of the first 15 Xylem numbers is: %d\n", sum);
    
    return 0;
}