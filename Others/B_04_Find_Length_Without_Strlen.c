//
// Created by Mehmet Selim Kayaaslan on 2.05.2021.
//
#include <stdio.h>
int main(){
    int a, i, uzunluk = 0;
    scanf("%d", &a);
    char string[a];
    for(i = 0;i < a;i++){
        scanf("%c", &string[i]);
    }
    for(i = 0;i < a;i++){
        if(string[i] <= 122 && string[i] >= 65){
            uzunluk++;
        }
    }
    printf("%d", uzunluk);
}
