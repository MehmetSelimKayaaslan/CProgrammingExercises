//
// Created by Mehmet Selim Kayaaslan on 24.04.2021.
//
#include <stdio.h>
int getReverse(int sayi){
    if(sayi < 1){
        return 0;
    }
    else{
        printf("%d", (sayi%10));
        sayi /= 10;
        getReverse(sayi);
    }
}
int main(){
    int sayi;
    scanf("%d", &sayi);
    getReverse(sayi);
}

