#include <stdio.h>> 


// Para imprimirmos algo na tela, usando o printf, fazemos:
//  Esse monte de printfs não pode ficar jogado dentro do nosso arquivo C.
// Precisamos colocá-los dentro da "função principal" do programa.
// Todo programa em C tem uma função principal, essa função chama-se main.
//  Para isso, escreveremos no começo no nosso arquivo, #include <stdio.h>.


int main(){
    printf("Bem vindo ao Jogo de adivinhação");


// Variáveis 
// string -> texto 
// int -> inteiro 

// Precisamos deixar uma "máscara" na string; algo que o printf() saiba que será substituído por uma variável: para isso, usamos o %d.
// Quando colocamos o %d no meio da string, significa que queremos que ali seja colocada uma variável do tipo inteiro.

    int numero_secreto;
    numero_secreto = 42;

    // imprimindo somente o número 
    printf("%d", 42);

    // no meio da frase 
    printf("O número %d é secreto");

   

// Temos a função scanf que lê o teclado 
// A função scanf precisa saber duas coisas: 
// 1) O tipo do dado que ela vai ler
// 2) Em qual variável ela deverá colocar o valor lido
   
   int chute;

   printf("Qual é o seu chute? ");
   scanf("%d", &chute);
   printf("Você chutou o número %d!", chute);
} 
