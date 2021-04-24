//
// Created by Mehmet Selim Kayaaslan on 24.04.2021.
//
#include <stdio.h>
int detectPrime(int sayi){
    int i;
    for(i = 2;i < sayi;i++){
        if(sayi % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int i, j, k;
    scanf("%d %d", &i, &j);
    for(k = i;k <= j;k++){
        if(detectPrime(k) == 1){
            printf("%d Asal\n", k);
        }
    }
}
