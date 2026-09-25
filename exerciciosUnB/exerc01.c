#include <stdio.h> 

int main(){

  int n1, n2, n3, n4;
  int nota;

  printf("Digite a 1° nota: ");
  scanf("%d", &n1);
 
  printf("Digite a 2° nota: ");
  scanf("%d", &n2);
 

  printf("Digite a 3° nota: ");
  scanf("%d", &n3);
 
  printf("Digite a 4° nota: ");
  scanf("%d", &n4);

  int p1 = n1*2;
  int p2 = n2*3;
  int p3 = n3*3;
  int p4 = n4*2;

  nota = (p1 + p2 + p3 + p4)/10;

  printf("A média das notas é: %d", nota);

  return 0;
   
}