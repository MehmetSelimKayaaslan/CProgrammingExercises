//
// Created by Mehmet Selim Kayaaslan on 24.04.2021.
//
#include <stdio.h>
int main(){
    int i, j = 1, k;
    scanf("%d", &k);
    for(i = 1;i <= k;i++){
        j *= i;
    }
    printf("%d", j);
}