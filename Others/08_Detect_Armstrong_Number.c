//
// Created by Mehmet Selim Kayaaslan on 24.04.2021.
//
#include <stdio.h>
#include <math.h>
int main(){
    int i = 0, sayi, sayiYedek, kalan, sonuc = 0, exp = 3;
    scanf("%d", &sayi);
    sayiYedek = sayi;
    do{
        kalan = sayi % 10;
        sayi /= 10;
        sonuc += pow(kalan, 3);
    }
    while(sayi>0);
    if(sonuc == sayiYedek){
        printf("%d bir Armstorng sayısı", sayiYedek);
    }
    else{
        printf("%d bir Armstorng sayısı değil", sayiYedek);
    }
}