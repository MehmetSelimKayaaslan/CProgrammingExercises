//
// Created by Mehmet Selim Kayaaslan on 2.05.2021.
//
#include <stdio.h>
#include <string.h>
int main(){
    int a, i;
    scanf("%d", &a);
    char string[a];
    for(i = 0;i < a;i++){
        scanf("%c", &string[i]);
    }
    for(i = 0;i < a;i++){
        string[i] += 32;
        printf("%c", string[i]);
    }
}
