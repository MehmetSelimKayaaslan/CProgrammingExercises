//Soru 4:
//Girilen dört basamaklı bir abcd sayısının rakamları toplamını veren porgramı yazalım.
#include <stdio.h>
int main() {
    int abcd;
    scanf("%d", &abcd);
    int kalan = abcd % 10;
    int bolum = abcd / 10;
    kalan += bolum % 10;
    bolum /= 10;
    kalan += bolum % 10;
    kalan += bolum / 10;
    printf("%d", kalan);
}

