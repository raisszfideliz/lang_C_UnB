#include <stdio.h> 

int main(){

   // IF >> significa se 
   // ELSE >> caso contrário 

   // Estrutura 
   //  if (condição 1){
   //   comando 1;
   //} else {
   // comando2;
   //} 

   // OBS: A linguagem C não tem um tipo para guardar verdadeiro ou falso (tipo BOOLEAN)
   // Escopo é o nome da variável que que damos para o programa onde a variável é válida.

   // FOR >> loop para repetir trechos de código de for automática quando SABEMOS A QUANTIDADE DE VEZES QUE ELE VAI EXECUTAR ALGUMA COISA
   // Estrutura 
   // for (variavel (contador e o primeiro valor); condição de parada do loop ; incremento)


   //WHILE >> Loop que é executado sem sabar exatamente a quantidade de vezes 

   // CONTINUE: instrução para ir direto para a próxima interação do loop. 

   // if(chute < 0){
   // printf("Você não pode chutar números negativos\n ");
   // i--;
   // continue;
   // }

   // imprime cabecalho do nosso jogo
	printf("******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhação *\n");
	printf("******************************************\n");

	int numerosecreto = 42;

	int chute;
	int tentativas = 1;

	while(1) {

		printf("Tentativa %d\n", tentativas);
		printf("Qual é o seu chute? ");

		scanf("%d", &chute);
		printf("Seu chute foi %d\n", chute);

		if(chute < 0) {
			printf("Você não pode chutar números negativos!\n");
			continue;
		}

		int acertou = (chute == numerosecreto);
		int maior = chute > numerosecreto;

		if(acertou) {
			printf("Parabéns! Você acertou!\n");
			printf("Jogue de novo, você é um bom jogador!\n");

			break;
		}

		else if(maior) {
			printf("Seu chute foi maior que o número secreto\n");
		} 

		else {
			printf("Seu chute foi menor que o número secreto\n");
		}

		tentativas++;
	}

	printf("Fim de jogo!\n");
	printf("Você acertou em %d tentativas!", tentativas);

}