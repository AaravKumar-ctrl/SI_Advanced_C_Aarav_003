#include <stdio.h>

int main() {
    int rev, a[6], i, j, count, temp;

    for (int i = 0; i < 6; i++){ 
        printf("Enter numbers: ");
        scanf("%d", &a[i]);
    }
    for(int j=0; j<6; j++){
        rev=0;
       for(int temp=a[j];temp>0;j++)
       {
        temp=temp/10;
        rev=rev*10+temp%10;
       }
       if(rev==a[j]){
        count++;}
        if(count>0){
            printf("The array consists at least one palindrome");
            break;
        }
    }
    return 0;
}