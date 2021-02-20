//Soru 7:
//Bir kenarı a olan küpün hacmini ve yüzey alanını veren program.
#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int alan = 6 * (a * a);
    int hacim = a * a * a;
    printf("%d %d \n", hacim, alan);
}