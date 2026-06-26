#include <stdio.h>

int main(){
    int total, years, weeks, days;
    printf("Enter the number of days: ");
    scanf("%d", &total);
    years = total/365;
    weeks = (total%365)/7;
    days = (total%365)%7;
    printf("%d Years, %d Weeks, and %d Days", years, weeks, days);
    return 0;
}