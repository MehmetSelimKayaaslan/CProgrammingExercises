//
// Created by Mehmet Selim Kayaaslan on 25.04.2021.
//
#include <stdio.h>
int main(){
    int sayi,sayiyed , uzunluk = 0, evet = 0;
    scanf("%d", &sayi);
    sayiyed = sayi;
    do{
        sayi /= 10;
        uzunluk++;
    }
    while(sayi > 0);
    int dizi[uzunluk], i = 0;
    sayi = sayiyed;
    do{
        dizi[i] = sayi % 10;
        sayi /= 10;
        i++;
    }
    while(sayi > 0);
    if(uzunluk % 2 == 0){
        for(i = 0;i < uzunluk / 2;i++){
            if(dizi[i] == dizi[uzunluk - 1 - i]){
                evet++;
            }
            else{
                printf("Bu bir palindrom sayı değil");
                break;
            }
        }
    }
    else{
        for(i = 0;i < uzunluk / 2;i++){
            if(dizi[i] == dizi[uzunluk - 1 - i]){
                evet++;
            }
            else{
                printf("Bu bir palindrom sayı değil");

                break;
            }
        }
    }
    if(evet == uzunluk / 2){
        printf("%d bir palindrom sayı", sayiyed);
    }
    else{
        return 0;
    }
}
