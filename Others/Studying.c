#include <stdio.h>
int main(){
    int a = 7;
    int b = 4;
    int c;
    c = a;
    a = b;
    b = c;
    printf("%d %d", a, b);
}
