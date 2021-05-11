/
// Created by Mehmet Selim Kayaaslan on 11.05.2021.
//
#include <stdio.h>
#include <string.h>
int main(){
    int i, uzunluk;
    scanf("%d", &uzunluk);
    char *string1[uzunluk], *string2[uzunluk];
    scanf("%s", &string1);
    for(i = 0;i < uzunluk;i++){
        string1[i] = string2[uzunluk - i];
    }
    printf("%c" string2);
}
