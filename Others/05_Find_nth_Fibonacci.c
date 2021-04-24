//
// Created by user on 24.04.2021.
//
#include <stdio.h>
int main(){
    int i, j;
    scanf("%d", &i);
    double dizi[i];
    dizi[0] = 0;
    dizi[1] = 1;
    printf("%.0lf %lf ", dizi[0], dizi[1]);
    for(j = 2;j < i;j++) {
        dizi[j] = dizi[j - 1] + dizi[j - 2];
        printf("%.0lf ", dizi[j]);
    }
}
