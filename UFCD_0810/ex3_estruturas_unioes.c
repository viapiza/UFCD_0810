//// instru��o para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Data {
//	int dia;
//	int mes;
//	int ano;
//};
//
//union um_valor {
//	int val_int;
//	float val_long;
//	double val_double;
//};
//
//struct Morada {
//	char rua[50];
//	int numero;
//	char andar[20];
//	char freguesia[50];
//	char concelho[50];
//	char distrito[50];
//};
//
//struct Pessoa {
//	int ID;
//	char PNome[25];
//	char UNome[25];
//
//	//ligar a estrutura data dentro da Pessoa
//	struct Data DataNasc;
//
//	//ligar a union dentro da pessoa
//	union um_valor Peso;
//
//	//ligar a estrutura morada dentro da Pessoa
//	struct Morada endereco;
//
//};
//
//void main() {
//	//criar uma variavel estruturada com base na Pessoa
//	struct Pessoa p1 = { 1, "Viviane", "Goncalves", {15,01,1985} };
//
//	//mostrar os dados da Pessoa (c/ estrutura ligada)
//	printf("ID: %d \n", p1.ID);
//	printf("Primeiro nome: %s \n", p1.PNome);
//	printf("Ultimo nome: %s \n", p1.UNome);
//
//	printf("Data NAscimento: %d-%d-%d \n", p1.DataNasc.dia, p1.DataNasc.mes, p1.DataNasc.ano);
//
//	//criar outra variavel estruturada com base na Pessoa
//	struct Pessoa p2;
//
//	//vamos pedir os dados apelo teclado
//	printf("\n Insira o ID: \n ");
//	scanf("%d", &p2.ID);
//
//	printf("Insira o primeiro nome: \n");
//	scanf("%s", &p2.PNome);
//
//	printf("Insira o Ultimo nome: \n");
//	scanf("%s", &p2.UNome);
//
//	printf("Insira o dia do nascimento: \n");
//	scanf("%d", &p2.DataNasc.dia);
//
//	printf("Insira o mes do nascimento: \n");
//	scanf("%d", &p2.DataNasc.mes);
//
//	printf("Insira o ano do nascimento: \n");
//	scanf("%d", &p2.DataNasc.ano);
//
//	//inserir valores fixos da uniao
//	p2.Peso.val_int = 15;
//	p2.Peso.val_double = 18.5;
//
//	//mostrar os dados da Pessoa (c/ estrutura ligada)
//	printf("\nID: %d \n", p2.ID);
//	printf("Primeiro nome: %s \n", p2.PNome);
//	printf("Ultimo nome: %s \n", p2.UNome);
//
//	printf("Data Nascimento: %d-%d-%d \n", p2.DataNasc.dia, p2.DataNasc.mes, p2.DataNasc.ano);
//	printf("Peso val_int: %d \n", p2.Peso.val_int);
//	printf("Peso val_long: %f \n", p2.Peso.val_long);
//	printf("Peso val_double: %f \n", p2.Peso.val_double);
//
//
//}