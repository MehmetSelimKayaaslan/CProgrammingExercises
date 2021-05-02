//
// Created by Mehmet Selim Kayaaslan on 2.05.2021.
#include <stdio.h>
int main(){
    int a, sum = 0;
    scanf("%d", &a);
    int i;
    for(i = 0;i <= a;i++){
        sum += i;
    }
    printf("%d", sum);
}
