//Soru 3:
//Girilen 3 tamsayıyı için, bu sayılar sırasıyla a,b,c olsun, (c^3+b^2-a) işlemini yapan programı yazınız.
#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d", &a, &b, &c);
    c = c * c * c;
    b = b * b;
    d = c + b - a;
    printf("%d", d);

}
