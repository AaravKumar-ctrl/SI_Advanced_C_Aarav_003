#include <stdio.h>

int main() {
int arr1[] = {2, 14, 22, 61, 14, 17, 9, 10};
int size1= sizeof(arr1) / sizeof(arr1[0]);
int arr2[] = {2, 4, 61, 48, 9, 70};
int size2 = sizeof(arr2) / sizeof(arr2[0]);
int sizeI, count=0;

if(size1<size2)
    sizeI=size1;
else
    sizeI=size2;

for (int i=0; i<size1; i++) {
    for (int j=0; j<size2; j++){
        if(arr1[i] == arr2[j]){
            printf("%d ", arr1[i]);
            count++;
            break;
        }
    }
}
sizeI=count;
return 0;
}