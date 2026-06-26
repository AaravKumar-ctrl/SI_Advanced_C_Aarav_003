#include <stdio.h>

int main() {
    float radius,area,circum;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = 3.14*radius*radius;
    circum = 2*3.14*radius;

    printf("Area = %f", area);
    printf("Circumference = %f", circum);

    return 0;
}