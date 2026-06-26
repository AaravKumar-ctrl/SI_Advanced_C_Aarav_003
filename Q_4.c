#include <stdio.h>
int main(){
    int a=15;
    int b=25;
    printf("Before: a=%d,b=%d",a,b);
    a=a+b; 
    b=a-b; 
    a=a-b;
    printf("After: a=%d,b=%d",a,b);
return 0;
}