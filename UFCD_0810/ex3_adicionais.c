//// instrução para permitir ultrapassar a mensagem de erro
//
//// do scanf()
//
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//
//#include <stdio.h>
//
//#include <stdlib.h>
//struct Veterinario {
//	int ID;
//	char nome[25];
//	int idade;
//	char cidade[25];
//};
//struct Animal {
//	int ID;
//	char nome[25];
//	int idade;
//	float peso;
//};
//void Mostra_Animal(struct Animal registo) {
//	printf("ID: %d \n", registo.ID);
//	printf("nome: %s \n", registo.nome);
//	printf("idade: %d \n", registo.idade);
//	printf("peso: %f \n", registo.peso);
//}
//void exercicio1() {
//	//declaracao de variavel do tipo estrutura baseada no struct Animal
//	struct Animal registos_animais[3];
//
//	//Inserir informacoes com uma estrutura de repeticao
//	for (int i = 0; i < 3; i++) {
//		/*int id = 0, idade = 0;
//		float peso = 0;
//		char nome[25];*/
//
//		printf(" Inserir registo %d \n", i);
//
//		printf("Insira o ID: ");
//		scanf("%d", &registos_animais[i].ID);
//
//		printf("Insira o nome: ");
//		scanf("%s", registos_animais[i].nome);
//
//		printf("Insira a idade: ");
//		scanf("%d", &registos_animais[i].idade);
//
//		printf("Insira o peso: ");
//		scanf("%f", &registos_animais[i].peso);
//	}
//	//ler a informacao da estruttura registos animais
//	for (int i = 0; i < 3; i++) {
//		Mostra_Animal(registos_animais[i]);
//	}
//
//}
//void Mostra_Veterinario(struct Veterinario rgst) {
//	printf("ID: %d \n", rgst.ID);
//	printf("Nome: %s \n", rgst.nome);
//	printf("Idade: %d \n", rgst.idade);
//	printf("Cidade: %s \n", rgst.cidade);
//}
//
//	void exercicio2() {
//		struct Veterinario rgst_dados[3];
//
//
//		for (int i = 0; i < 3; i++) {
//
//
//			printf("Inserir dados veterinario %d \n", i + 1);
//
//			printf("Insira o ID: ");
//			scanf("%d", &rgst_dados[i].ID);
//
//			printf("Insira o nome: ");
//			scanf("%s", rgst_dados[i].nome);
//
//			printf("Insira a idade: ");
//			scanf("%d", &rgst_dados[i].idade);
//
//			printf("Insira a cidade: ");
//			scanf("%s", rgst_dados[i].cidade);
//		}
//		for (int i = 0; i < 3; i++) {
//			Mostra_Veterinario(rgst_dados[i]);
//		}
//
//	}
//void main() {
//	//exercicio1();
//	exercicio2();
//}
