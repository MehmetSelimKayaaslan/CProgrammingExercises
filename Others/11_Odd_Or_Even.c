//
// Created by Mehmet Selim Kayaaslan on 25.04.2021.
//
#include <stdio.h>
int main(){
    int sayi;
    scanf("%d", &sayi);
    if(sayi % 2 == 0){
        printf("Bu sayı çift");
    }
    else{
        printf("Bu sayı tek");
    }
    return 0;
}
