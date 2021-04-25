//
// Created by Mehmet Selim Kayaaslan on 25.04.2021.
//
#include <stdio.h>
int main(){
    int sayi;
    scanf("%d", &sayi);
    if(sayi < 0){
        printf("Bu sayı negatif");
    }
    else{
        printf("Bu sayı pozitif");
    }
    return 0;
}
