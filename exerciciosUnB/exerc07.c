#include <stdio.h> 

int main(){

  float c, f;

  printf("Digite a temperatura em Fahreinheit: ");
  scanf("%f", &f);

  c = ((f-32)*5)/9;

  printf("A sua temperatura em Celsius é: %.2f", c);

  return 0;

}