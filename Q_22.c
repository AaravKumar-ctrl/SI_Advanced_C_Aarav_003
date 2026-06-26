#include <stdio.h>

int main(){
    int n,i,j;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i=2;i<=n;i++){
        for (j=2;j<i;j++){
            if (i%j==0) 
            break;
        }
        if (i==j) printf("%d ", i);
    }
    printf("\n");
    return 0;
}