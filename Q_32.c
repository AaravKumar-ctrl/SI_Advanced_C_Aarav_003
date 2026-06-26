//PASCAL TRIANGLE
#include<stdio.h>
int main(){
int rows,i,j,arr[30][30];
printf("Enter the number of rows: ");
scanf("%d", &rows);
for (i=0;i<rows; i++){
    for (j=0;j<rows-i-1;j++){
        printf("  ");
    }
    for (j=0;j<=i;j++){
        if (j==0 || j==i) 
        arr[i][j]=1;
        else
        arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        printf("%d   ", arr[i][j]);
        }
    printf("\n");
    }
return 0;
}