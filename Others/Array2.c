//
// Write a program in C to copy the elements of one array into another array.
//

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int dizi1[n];
    int dizi2[n];
    int i;
    for(i = 0;i < n;i++){
        scanf("%d", &dizi1[i]);
        dizi2[i] = dizi1[i];
    }
    for(i = 0;i < n;i++){
        printf("%d ", dizi2[i]);
    }
}