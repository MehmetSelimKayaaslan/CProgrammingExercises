//Finding the factorial of a given number
#include <stdio.h>
int foksiyon(int n){
    if(n == 1){
        return 1;
    }
    return n * foksiyon(n-1);
}

int main(){
    int n;
    scanf("%d", &n);
    int sonuc = foksiyon(n);
    printf("%d\n", sonuc);
}