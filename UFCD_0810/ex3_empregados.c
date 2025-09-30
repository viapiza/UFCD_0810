//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//
////Passo 1 - Criar a estrutura empregados
//struct Empregado {
//	char nome[50];
//	char cargo[50];
//	int idade;
//	float salario;
//};
// 
////Passo 2 - Procedimento par aler as informacoes
//void imprime_pessoa(struct Empregado registo) {
//
//	printf("Nome: %s \n", registo.nome);
//	printf("Cargo: %s \n", registo.cargo);
//	printf("Idade: %d \n", registo.idade);
//	printf("Salario: %f \n", registo.salario);
//}
//
//void main() {
//	//declaracao e criacvao de um vetor com 3 elementos, baseado na estrutura empregado
//	struct Empregado registos_empregados[3];
//
//	//Inserir valores dentro da estrutura registo 
//	for (int i = 0; i < 3; i++) {
//		//limpar os dados do teclado que estão em memória
//		fflush(stdin); //limpe imediatamente o que tiver no 
//
//		//Pedir os dadops para preencgher os valores da estrutura, registo a registo
//		printf("\n Dados do empregado %d: \n", i + 1);
//
//		printf("Nome: \n");
//		scanf("%s", registos_empregados[i].nome);
//
//		printf("Cargo: \n ");
//		scanf("%s", registos_empregados[i].cargo);
//
//		printf("Idade: \n");
//		scanf("%d", &registos_empregados[i].idade);
//
//		printf("Salario: \n");
//		scanf("%f", &registos_empregados[i].salario);
//
//	}
//	//estrutura de repeticao para ler os valores dentro da estrutura registos
//	for (int i = 0; i < 3; i++) {
//		//mostra a mensagem di registo que esta a percorrer
//		printf("\n \n Registo do Empregado %d \n \n", i + 1);
//
//		//invocar o procedimento imprime_pessoa passando o registo actual que está a percorrer e mostrar o mesmo padrao de dados
//		imprime_pessoa(registos_empregados[i])
//	}
//}