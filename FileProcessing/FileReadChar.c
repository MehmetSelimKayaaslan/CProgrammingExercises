//
// Created by Mehmet Selim Kayaaslan on 2.05.2021.
//
#include <stdio.h>
int main(){
    char a;
    FILE *fr, *fw;
    fr = fopen("File.txt", "r");
    fw = fopen("Output.txt", "w");
    while(!feof(fr)){
        fscanf(fr, "%c", &a);
        fprintf(fw, "%c", a);
    }
}
