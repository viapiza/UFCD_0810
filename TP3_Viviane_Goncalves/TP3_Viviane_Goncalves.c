// instrução para permitir ultrapassar a mensagem de erro
// do scanf()
#define _CRT_SECURE_NO_WARNINGS

//importar bilbiotecas para o nosso projeto
#include <stdio.h>
#include <stdlib.h>

void exercicio_1() {
	//inicializar um ficheiro e  colocar o modo de abertura
	FILE* vg;
	char texto[1000];

	if ((vg = fopen("ficheiro_tp3.txt", "r")) == NULL) {
		printf("Erro ao ler a informacao do ficheiro!\n");
		exit(1);
	}
	else {
		printf("Informacao do ficheiro: \n\n");

		while (fgets(texto, 1000, vg) != NULL) { //enquanto nao atingir o fim do ficheiro
			printf("%s", texto);
		}
	}
	//fechar  o ficheiro que foi aberto
	fclose(vg);
}

void exercicio_2() {
	//inicializar um ficheiro e  colocar o modo de abertura
	FILE* vg;
	
	if ((vg = fopen("ficheiro_tp3_escrita.txt", "w")) == NULL) {
		printf("Erro ao criar o ficheiro!\n");
		exit(1);
	}
	else{
		char texto[100] = "\nViver de amor é dar sem medida, sem na terra salário reclamar.";
		fputs(texto, vg);
	}
	//fechar  o ficheiro que foi aberto
	fclose(vg);
		}

void exercicio_3() {
	//inicializar um ficheiro e  colocar o modo de abertura
	FILE* vg;

	if ((vg = fopen("ficheiro_tp3_escrita.txt", "a")) == NULL) {
		printf("Erro ao abrir o ficheiro!\n");
		exit(1);
	}
	else {
		char expressao[150] = "\nAh! sem contar eu dou, pois convencida, de que quem ama não sabe calcular.\nMinha unica riqueza e o amor";
		fputs(expressao, vg);
	}
	//fechar  o ficheiro que foi aberto
	fclose(vg);
}

void main() {
	//exercicio_1(); //criar ficheiro e definir modo de acesso somente leitura "r"
	//exercicio_2(); //criar ficheiro com o modo de acesso de escrita "w" e inserir texto no ficheiro com a funcao fputs
	exercicio_3(); //alterar ficheiro com o modo de acesso adcionar "a" e inserir texto no ficheiro com a funcao fputs

}
