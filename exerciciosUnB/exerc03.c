#include <stdio.h> 


double cotacao(double real){

  return real / 6.50;
}


int main(){

   double dolar, real; 

   printf("A cotação do Dolar atualmente está 6.50 R$.\n");
   printf("Quantos reais serão cotados em dólar?: ");
   scanf("%lf", &real);

   dolar = cotacao(real);

   printf("O valor em dólares é: %.2f", dolar);

   return 0;

}

