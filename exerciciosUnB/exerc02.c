#include <stdio.h>


int main(){

    float base, altura, area;

    printf("Digite o tamanho da base: ");
    scanf("%f", &base);

    printf("Digite o tamanho da altura: ");
    scanf("%f", &altura);
   
    area = (base*altura)/2;

    printf("A área do triângulo é: %.2f", area);

    return 0;

}