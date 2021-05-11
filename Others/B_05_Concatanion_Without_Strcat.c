//
// Created by Mehmet Selim Kayaaslan on 11.05.2021.
//
#include <stdio.h>
#include <string.h>
int main(){
    int uzunluk1, uzunluk2, uzunluk3;
    scanf("%d %d", &uzunluk1, &uzunluk2);
    uzunluk3 = uzunluk2+ uzunluk1;
    char c1[uzunluk1], c2[uzunluk2], sum[uzunluk3];
    int i;
    for(i = 0;i < uzunluk1;i++){
        scanf("%s", &c1[i]);
        sum[i] = c1[i];
    }
    for(i = 0;i < uzunluk2;i++){
        scanf("%s", &c2[i]);
        sum[i + uzunluk1] = c2[i];
    }
    for(i = 0;i < uzunluk1 + uzunluk2;i++){
        printf("%c", sum[i]);
    }
}
