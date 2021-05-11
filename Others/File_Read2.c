//
// Created by Mehmet Selim Kayaaslan on 11.05.2021.
//
#include <stdio.h>
int main(){
    int i;
    FILE *fr, *fw;
    fr = fopen("File.txt", "r");
    fw = fopen("Output.txt", "w");
    fscanf(fr, "%d", &i);
    fprintf(fw,"%d", i);
}
