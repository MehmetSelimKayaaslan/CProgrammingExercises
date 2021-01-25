//
// Write a program in C to read n number of values in an array and display it in reverse order
//
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int dizi[n];
    int i;
    for(i = 0; i < n;i++){
        scanf("%d", &dizi[i]);
    }
    for(i=n-1;i >= 0;i--){
        printf("%d ", dizi[i]);
    }
}