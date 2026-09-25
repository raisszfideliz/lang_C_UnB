#include <stdio.h> 


float imc (float peso, float altura){

    return peso / (altura *altura);
}

int main(){
  
  float peso, altura;

  printf("Digite o seu peso em Kg: ");
  scanf("%f", &peso);

  printf("Digite a sua altura em metros:  ");
  scanf("%f", &altura );
 
  printf("O seu imc é : %.2f", imc(peso,altura));
  return 0;

}