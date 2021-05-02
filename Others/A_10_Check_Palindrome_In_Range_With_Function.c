//
// Created by Mehmet Selim Kayaaslan on 25.04.2021.
//
#include <stdio.h>
int isItPal(int i){
    int evet = 0;
    int uzunluk = 0;
    int k = 0;
    int sayi = i;
    do{
        sayi /= 10;
        uzunluk++;
    }
    while(sayi > 0);
    int dizi[uzunluk];
    sayi = i;

    do{
        dizi[k] = sayi % 10;
        sayi /= 10;
        k++;
    }
    while(sayi > 0);
    if(uzunluk % 2 == 0){
        for(k = 0;k < uzunluk / 2;k++){
            if(dizi[k] == dizi[uzunluk - 1 - k]){
                evet++;
            }
        }
    }
    else{
        for(k = 0;k < uzunluk / 2;k++){
            if(dizi[k] == dizi[uzunluk - 1 - k]){
                evet++;
            }
        }
    }
    if(evet == uzunluk / 2){
        printf("%d sayısı palindrom\n", i);
    }
}
int main(){
    int sayi, n, j, i, uzunluk, k = 0, evet = 0;
    scanf("%d %d", &n, &j);
    for(i = n;i <= j;i++){
        isItPal(i);
    }
}
