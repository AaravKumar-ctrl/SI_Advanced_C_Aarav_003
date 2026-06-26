#include <stdio.h>

int main() {
    char op;
    float n1, n2;

    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two numbers: ");
    scanf("%f %f", &n1,&n2);

    switch (op){
        case '+': printf("%f", n1 + n2); break;
        case '-': printf("%f", n1 - n2); break;
        case '*': printf("%f", n1 * n2); break;
        case '/': printf("%f", n1 / n2); break;
        default:printf("Invalid operator");
    }
    return 0;
}