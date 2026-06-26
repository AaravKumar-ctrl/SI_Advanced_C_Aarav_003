#include<stdio.h>
int main(){
    float c, f;
    printf("Enter Celsius: ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("%f Celsius is %f Fahrenheit",c,f);
    printf("Enter Fahrenheit: ");
    scanf("%f", &f);
    c=(f-32)*5/9;
    printf("%f Fahrenheit is %f Celsius",f,c);

return 0;
}