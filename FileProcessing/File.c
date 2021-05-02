//
// Created by Mehmet Selim Kayaaslan on 2.05.2021.
//
#include <stdio.h>
int main(){
    int a, b;
    FILE *fr, *fw;
    fr = fopen("input.txt", "r");
    fw = fopen("Outout.txt", "w");
    fscanf(fr, "%d %d", &a, &b);
    fprintf(fw, "%d", a + b);
}