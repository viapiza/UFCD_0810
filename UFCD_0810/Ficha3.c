// instru��o para permitir ultrapassar a mensagem de erro
// do scanf()
//#define _CRT_SECURE_NO_WARNINGS

//importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//
//
////exercicio 1 - criar estrutura
//
//struct  Carro {
//	char marca[25];
//	char modelo[25];
//	char cor[25];
//};
//
//struct Produto {
//	int ID;
//	char nome[25];
//	float preco;
//};
//
//void main() {
//	//declarar variaveis baseadas em estruturas e cada uma deve ter pelo menos a possibilidade de armazenar at� 3 registos
//	struct Carro registos_carros[3];
//	struct Produto registos_produtos[3];

	//inserir 3 registos de carros com uma estrutura de repeti��o FOR
	//for (int i = 0; i < 3; i++) {
	//	printf("Insira o registo %d\n", i);

	//	printf("Insira o nome carro: \n");
	//	scanf("%s", registos_carros[i].marca);

	//	printf("Insira o modelo do carro: \n");
	//	scanf("%s",registos_carros[i].modelo);

	//	printf("Insira a cor do carro: \n");
	//	scanf("%s",registos_carros[i].cor);
	//}
	////estrutura de repeticao FOR para ler a informacao
	//for (int i = 0; i < 3; i++) {
	//	printf("***Registo %d***\n", i);
	//	printf("Marca: %s \n", registos_carros[i].marca);
	//	printf("Modelo: %s \n", registos_carros[i].modelo);
	//	printf("Cor: %s \n", registos_carros[i].cor);
	//}

//	//exercicio para armazenar os produtos
//	for (int i = 0; i < 3; i++) {
//		printf("Insira o registo %d \n", i);
//
//		printf("Insira o ID do produto: \n");
//		scanf("%d", &registos_produtos[i].ID);
//
//		printf("Insira o nome do produto: \n");
//		scanf("%s", registos_produtos[i].nome);
//
//		printf("Insira o preco do produto: \n");
//		scanf("%f", &registos_produtos[i].preco);
//	}
//	//estrutura de repeticao FOR para ler a informacao
//	for (int i = 0; i < 3; i++) {
//		printf("***Registo %d***\n", i);
//		printf("ID: %d \n", registos_produtos[i].ID);
//		printf("Nome: %s \n", registos_produtos[i].nome);
//		printf("Preco: %f \n", registos_produtos[i].preco);
//	}
//}
