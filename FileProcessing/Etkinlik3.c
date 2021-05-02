//
// Created by Mehmet Selim Kayaaslan on 2.05.2021.
#include <stdio.h>
int main(){
    float ortalama = 0;
    int a, i = 0;
    FILE *fr, *fw;
    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");
    while(!feof(fr)){
        fscanf(fr, "%d", &a);
        i++;
        ortalama += a;
    }
    fprintf(fw, "%f", ortalama / i);
}