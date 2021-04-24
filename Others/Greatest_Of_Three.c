//
// Created by user on 24.04.2021.
//
#include <stdio.h>
int main() {
    int i, enbuyuk, dizi[5];
    for(i = 0; i <= 4;i++){
        scanf("%d", &dizi[i]);
    }
    enbuyuk = 0;
    for(i = 0;i <= 4;i++){
        if(dizi[i] > enbuyuk){
            enbuyuk = dizi[i];
        }
    }
    printf("%d", enbuyuk);
}

