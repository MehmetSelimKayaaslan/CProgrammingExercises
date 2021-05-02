//
// Created by Mehmet Selim Kayaaslan on 2.05.2021.
//
#include <stdio.h>
int main(){
    char a;
    int ascii, i, j = 0, dizi[10]={65, 69, 73, 79, 85, 97, 101, 105, 111, 117};
    scanf("%c", &a);
    ascii = a;
    if(ascii <= 122 && ascii >= 65){
        for(i = 0;i < 10;i++){
            if(ascii == dizi[i]){
                printf("Vowel");
                return 0;
            }
        }
        printf("consonant");
    }
}
