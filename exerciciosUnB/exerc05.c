#include <stdio.h> 

int main(){

    int num, a, b, c , d;

    printf("Insira um número de 4 dígitos: ");
    scanf("%d", &num);

    a = (num/1000);
    b = ((num/100) - (a*10));
    c = (num/10) - (a*100) - (b*10);
    d = (num) - (a*1000) - (b*100) - (c*10);

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
}