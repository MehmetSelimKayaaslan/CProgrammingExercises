//
// Created by Mehmet Selim Kayaaslan on 2.05.2021.
//
#include <stdio.h>
int main(){
    int a;
    FILE *fr, *fw;
    fr = fopen("File.txt", "r");
    fw = fopen("Output.txt", "w");
    fscanf(fr, "%d", &a);
    fprintf(fw, "%d", a);
}
