#include <stdio.h>

int main() {
    int matrix[5][3] = {{1,5,3},{4,9,2},{7,8,9},{8,5,9},{1,4,8}};
    int transpose[3][5];
    for (int i=0;i<5;i++){
        for (int j=0;j<3;j++){
        transpose[j][i]=matrix[i][j];
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<5;j++) {
        printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}