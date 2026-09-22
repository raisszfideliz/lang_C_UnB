// OPERAÇÕS MATEMÁTICAS 

// + >> SOMAR 
// - >> SUBTRAIR 
// / >> dividir 
// * >> mutiplicar 

// int; guarda número inteiros 
// double ; número com casas decimais mais precisas
// long ; número inteiro com mais capacidade
// short ; inteiro com menor capacidade 
// float ; número com casas decimais com menor precisão

// Para imprimimos um número com casas decimai limitadas, fazemos o seguinte: 
// printf("Você fez %.2f pontos\n", pontos);
// É possível trocra o 2 por qualquer quantidade de casas  decimais que você quiser. 

// Casting > são capazes de converter um tipo em outro.

// int a = 3;
// int b = 2;

// o casting acontecendo abaixo nas
// duas variáveis: a, b.
// double resultado = (double)a / (double)b;
// printf("%f", resultado);

// abs() >> recebe um número como parâmetros e o transforma em positivo.
// Para utilizarmos precisamos importar stdlib.h

// Números randômicos 

// rand() >> Devole um número aleatório toda vez que é executada. 

// Para garantirmos que essa função matemática usada pela rand() seja diferente a cada rodada, precisamos definir uma "semente" diferente a cada execução do nosso programa. A semente é como se fosse uma variável que entra nessa fórmula matemática e deixa os números sempre diferentes. Mas precisamos de uma semente diferente toda vez, pois se passarmos sempre a mesma, a fórmula também será sempre a mesma, assim como o resultado.
// Para isso, usamos a data completa atual como semente. Veja que, se rodarmos o programa duas vezes, a data atual sempre será diferente, pois a data exata terá mudado (alguns milissegundos, segundos ou minutos a mais, por exemplo). Isso é suficiente para termos sementes diferentes.

//Em computação, a data escolhida para tal é "1 de janeiro de 1970"; ela é, inclusive, chamada de Epoch. 
// Em C, temos a função time(), que nos devolve exatamente essa quantidade de segundos. 
// Para isso, basta declararmos um inteiro e invocarmos a função time(), passando o valor "zero" para ela.
//  Em seguida, ela é passada para a função srand(), que é quem define a semente.

// A função time() está definida em outro arquivo, o time.h, e também precisamos importá-lo no começo do arquivo. O código completo fica assim:

// #include <time.h>

// int segundos = time(0);
// srand(segundos);

// int n1 = rand();
// printf("%d", n1);

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_DE_TENTATIVAS 3

int main() {
	printf("************************************\n");
	printf("* Bem vindo ao Jogo de Adivinhação *\n");
	printf("************************************\n");

	int chute;
	int acertou = 0;
	int tentativas = 1;
	double pontos = 1000;

	srand(time(0));
	int numerosecreto = rand() % 100;

	while(!acertou) {

		printf("Qual é o seu %do. chute? ", tentativas);
		scanf("%d", &chute);

		if(chute < 0) {
			printf("Você não pode chutar números negativos\n");
			continue;
		}

		printf("Seu %do. chute foi %d\n", tentativas, chute);

		acertou = chute == numerosecreto;
		int maior = chute > numerosecreto;

		if(acertou) {
			printf("Parabéns! Você acertou!\n");
		} else if(maior) {
			printf("Seu chute foi maior do que o número secreto!\n");
		} else {
			printf("Seu chute foi menor do que o número secreto!\n");
		}

		tentativas++;

		double pontosperdidos = abs(chute - numerosecreto) / 2.0;
		pontos = pontos - pontosperdidos;
	}

	printf("Você fez %.2f pontos", pontos);
	printf("Obrigado por jogar!\n");

}
