//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//
////estruturas
//struct Filme {
//	int ID;
//	char nome[50];
//	char genero[25];
//	float duracao;
//	int classificacao;
//};
//
//struct Realizador {
//	char nome[25];
//	char produtora[50];
//	int idade;
//	float salario;
//};
//
//// procedimentos
//void Mostra_Filme(struct Filme registo) {
//		printf("\nID: %d \n", registo.ID);
//		printf("Nome: %s \n", registo.nome);
//		printf("Genero: %s \n", registo.genero);
//		printf("Duracacao: %f \n", registo.duracao);
//		printf("Classificacao: %d \n", registo.classificacao);
//	}
//
//void Mostra_Realizador(struct Realizador registo) {
//	printf("\nNome: %s \n", registo.nome);
//	printf("Produtora: %s \n", registo.produtora);
//	printf("Idade: %d anos \n", registo.idade);
//	printf("Salario: %f \n", registo.salario);
//}
//
//void exercicio1() {
//
//	struct Filme registos_filmes[3];
//
//	//Inserir informacoes com uma estrutura de repeticao FOR
//	for (int i = 0; i < 3; i++) {
//		
//		printf(" \n***Inserir dados do filme --> %d \n", i+1);
//
//		printf("\nInsira o ID: \n");
//		scanf("%d", &registos_filmes[i].ID);
//
//		printf("Insira o nome: \n");
//		scanf("%s", registos_filmes[i].nome);
//
//		printf("Insira o genero do filme: \n");
//		scanf("%s", registos_filmes[i].genero);
//
//		printf("Insira a duracao do filme: \n ");
//		scanf("%f", &registos_filmes[i].duracao);
//
//		printf("Insira a classificaçao de 1 a 10: \n ");
//		scanf("%d", &registos_filmes[i].classificacao);
//	}
//	//ler a informacao da estruttura registos animais
//	for (int i = 0; i < 3; i++) {
//		Mostra_Filme(registos_filmes[i]);
//			}
//}
//
//void exercicio2() {
//	struct Realizador registos_realizadores[4];
//
//	//Inserir informacoes com uma estrutura de repeticao FOR
//	for (int i = 0; i < 4; i++) {
//
//		printf(" \n***Inserir dados do Realizador --> %d \n", i+1);
//
//		printf("\nInsira o nome: \n");
//		scanf("%s", registos_realizadores[i].nome);
//
//		printf("Insira a produtora: \n");
//		scanf("%s", registos_realizadores[i].produtora);
//
//		printf("Insira a idade do realizador: \n ");
//		scanf("%d", &registos_realizadores[i].idade);
//
//		printf("Insira o salario do realizador: \n ");
//		scanf("%f", &registos_realizadores[i].salario);
//	}
//	//ler a informacao da estruttura registos animais
//	for (int i = 0; i < 4; i++) {
//		Mostra_Realizador(registos_realizadores[i]);
//	}
//}
//
//
//
//void main(){
//	//exercicio1();
//	exercicio2();
//}