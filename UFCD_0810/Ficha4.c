//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//
//void exercicio1() {
//	//inicializar um ficheiro e  colocor o modo de abertura
//	FILE* fp;
//	char linha[1000];  //variavel para armazenar as linhas lidas do ficheiro
//
//	// afuncao fopen te, 2 parametros: 1 - Localização de ficheiros; 2 - modo de abertura
//	//fp = fopen("ficheiro1.txt", "r");
//
//	if ((fp = fopen("ficheiro1.txt", "r")) == NULL) {
//		printf("Impossivel abrir/criar o ficheiro pretendido \n");
//		exit(1);
//	}
//	else {
//		printf("Informacao do ficheiro: \n\n");
//
//		//Precisamos de uma estrutura de repeticao pois a funcao fgets le o conteudo linha a linha
//		while (fgets(linha, 1000, fp) != NULL) { //enquanto nao atingir o fim do ficheiro
//			printf("%s", linha);
//		}
//	}
//	//fechar  o ficheiro que foi aberto
//	fclose(fp);
//}
//
//void exercicio2() {
//	//inicializar um ficheiro e  colocor o modo de abertura
//	FILE* fp;
//	char linha[1000];  //variavel para armazenar as linhas lidas do ficheiro
//
//	// afuncao fopen te, 2 parametros: 1 - Localização de ficheiros; 2 - modo de abertura
//	//fp = fopen("ficheiro1.txt", "r");
//
//	if ((fp = fopen("ficheiro1.txt", "w")) == NULL) {
//		printf("Impossivel abrir/criar o ficheiro pretendido \n");
//		exit(1);
//	}
//	else {
//		char texto[50] = "\nOnde esta o texto? \nsera que quebrou";
//		//funcao fputs tem 2 paramtros: 1 variavel , 2 ficheiro
//		fputs(texto, fp);
//	}
//	//fechar  o ficheiro que foi aberto
//	fclose(fp);
//}
//
//void exercicio3() {
//	//inicializar um ficheiro e  colocor o modo de abertura
//	FILE* fp;
//	char linha[1000];  //variavel para armazenar as linhas lidas do ficheiro
//
//	// afuncao fopen te, 2 parametros: 1 - Localização de ficheiros; 2 - modo de abertura
//	//fp = fopen("ficheiro1.txt", "r");
//
//	if ((fp = fopen("teste.txt", "w+")) == NULL) {
//		printf("Impossivel abrir/criar o ficheiro pretendido \n");
//		exit(1);
//	}
//	else {
//		//escrever uma frase dentro do ficheiro com fputs
//		fputs("Isto e uma experiencia utilizando o tema de acesso a informacao de forma direta", fp);
//
//		//funcao fseek serve paa posicionar o cursor dentro ficheiro, tem 3 parametros: 
//		//1- indica qual o ficheiro se  esta a trabalhar.
//		//2- quantos caracteres vamos ler
//		//3- qual o posicionamento (inicio, um ponto especifico no meio ou fim) - onde colocar o cursor (seek_set(+), seek_cur(+/- busca a ultima posicao trabalhada), seek_end(-))
//		fseek(fp, 0, SEEK_SET);
//
//		//funcao fgets para obter dados - quantidade de informacao, tem 3 parametros:
//		//1 - qual a variavel que avi armazenar a informacao da linha
//		//2 - quantos caracteres devera ler a aprtir do fseek
//		//3 - qual ficeiro esta a trabalhar
//		fgets(linha, 30, fp);
//
//		//mostrar o que foi obtido
//		printf("Antes de usar a funcao fessek: \n %s \n\n", linha);
//			
//		//SEEk_CUR permite ler para a frente ou para tras da posicao determinada
//		//utilizar o fseek e retirar 10 caracteres
//		fseek(fp, -6, SEEK_CUR); // via buscar a ultima posicao trabalhada
//		fgets(linha, 30, fp);
//		printf("A utilizar a funcao SEEk_CUR: \n %s \n\n", linha);
//
//		//utilizar a funcao fseek para colocar a leitura da informacao no caracter 21
//		//eek(fp, 0, SEEK_SET);
//
//		//funcao para obter a informacao
//		//ets(linha, 10, fp);
//
//		//exibir a ainformacao
//		//intf("Depois de usar o metodo SEEK_SET a partir do caracter 21: \n %s \n\n", linha);
//
//		//ler a informacao a aprtir do final do ficheiro
//		fseek(fp, -35, SEEK_END);//posiciona
//		fgets(linha, 30, fp);//lê a partir do posicionamento acima
//		printf("A utilizar a funcao SEEk_END: \n %s \n\n", linha);
//
//	}
//}
//
//
//void main() {
//	//exercicio1(); //exercicio de somente leitura
//	//exercicio2(); //exercicio escrita que apaga toda informacao precedente
//	exercicio3();
//}