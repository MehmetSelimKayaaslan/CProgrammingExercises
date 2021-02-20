//Soru 5:
//Girilen üç sayıyı toplayan ve çarpan programı yazınız.
#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int toplam = a + b + c;
    int carpim = a * b* c;
    printf("%d %d", toplam, carpim);
}

