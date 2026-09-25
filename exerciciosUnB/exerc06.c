#include <stdio.h>

int main(){

   float j, c, i, t;

   printf("Insira o valor do capital: ");
   scanf("%f", &c);

   printf("Insira o valor do juros em meses: ");
   scanf("%f", &t);

   printf("Insira a porcentagem da taxa de juros:" );
   scanf("%f", &i);

   j = c * i * t;

   printf("O seu juros é igual á: %.2f", j);

   return 0;

}