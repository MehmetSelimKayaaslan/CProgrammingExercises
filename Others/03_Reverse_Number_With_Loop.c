//
// Created by user on 24.04.2021.
//
#include <stdio.h>
int main(){
    int sayi;
    int kalan;
    int i;
    scanf("%d", &sayi);
    do{
        kalan = sayi % 10;
        sayi /= 10;
        printf("%d", kalan);
    }
    while(sayi > 0);
}

