#include <stdio.h>

int main(){
    int num;
    float dec;
    char letter;
    printf("Enter an integer: ");
    scanf("%d",&num);
    printf("Enter a float: ");
    scanf("%f",&dec);
    printf("Enter a character: ");
    scanf(" %c",&letter); 
    printf("\n%d,%f,%c", num,dec,letter);
    return 0;
}