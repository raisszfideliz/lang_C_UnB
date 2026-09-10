#include <stdio.h>

int main(){

    int num, a, b, c, d;

    printf("Digite um número de 4 algarismos: ");
    scanf(" %d", &num);

    a = (num/1000);

    b = ((num/100)-(a*10));

    c = ((num/10)-((a*100)+(b*10)));

    d = (num-((a*1000)+(b*100)+(c*10)));

    printf("Algarismo: %d\n" , a);
    printf("Algarismo: %d\n" , b);
    printf("Algarismo: %d\n" , c);
    printf("Algarismo: %d\n" , d);

    return 0;

}

