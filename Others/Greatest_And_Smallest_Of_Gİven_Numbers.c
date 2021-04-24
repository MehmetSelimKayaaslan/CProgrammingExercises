//
// Created by user on 24.04.2021.
//
#include <stdio.h>
int main() {
    int i, j, enbuyuk, enkucuk;
    scanf("%d", &j);
    int dizi[j];
    for(i = 0; i < j;i++){
        scanf("%d", &dizi[i]);
    }
    enbuyuk = 0;
    for(i = 0;i < j;i++){
        if(dizi[i] > enbuyuk){
            enbuyuk = dizi[i];
        }
    }
    enkucuk = enbuyuk;
    for(i = 0;i < j;i++){
        if(dizi[i] < enkucuk){
            enkucuk = dizi[i];
        }
    }
    printf("%d %d", enbuyuk, enkucuk);
}

