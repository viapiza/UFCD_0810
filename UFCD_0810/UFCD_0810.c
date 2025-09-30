//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//
//void exercicio1() {
//	//declaracao do vetor com 5 elementos
//	int numeros[5];
//
//	//colocar os valores dentro do vetor - forma manual
//	numeros[0] = 40;
//	numeros[1] = 12;
//	numeros[2] = 7;
//	numeros[3] = 33;
//	numeros[4] = 3;
//
//	//mostrar os valores dentro do vetor - forma manual
//	printf("Valor do indice 0: %d \n", numeros[0]);
//	printf("Valor do indice 1: %d \n", numeros[1]);
//	printf("Valor do indice 2: %d \n", numeros[2]);
//	printf("Valor do indice 3: %d \n", numeros[3]);
//	printf("Valor do indice 4: %d \n", numeros[4]);
//}
//
//void exercicio2() {
//	//declaracao de um vetor com 5 elementos
//	int lista[5];
//
//	//estrutura de repetição  automatica for. Para automatizar o processo da obtenção da informacao
//	//Parametro 1: valor minimo a processar
//	//Parametro 2: condicao maxima que pode atingir
//	//Parametro 3: incrementar +1 de cada vez que repetir a estrutura de repeticao
//	for (int i = 0; i < 5; i++) {
//		//mostrar a mensagem do indice que esta a percorrer atualmente
//		printf(" Valor do indice %d: ", i);
//		//ler o valor do teclado e colocar no indice do vetor atual
//		scanf("%d", &lista[i]);
//	}
//
//		//como ler o vetor e mostrar os valores dos indices
//		for (int i = 0; i < 5; i++) {
//			printf("Valor do indice %d: %d \n", i, lista[i]); //o primeiro "i" se refere ao primeiro %d e o segundo "i" ao segundo %d
//		}
//}
//
//void exercicio3() {
//	//criacao de vetor decimais com 6 digitos
//	float notas[6];
//
//	//declarãcao de variaveis
//	int positivos = 0;
//	int negativos = 0;
//
//	//estrutura de repeticao FOR para pedir os valores decimais
//	for (int i = 0; i < 6; i++) {
//		printf("Valor do indice %d: ", i);
//		
//		//pedir valor decimal ao utilizador para armazenar no vetor
//		scanf("%f", &notas[i]);
//	}
//	//estrutura de repeticao par ler os valores do vetor
//	for (int i = 0; i < 6; i++) {
//		//estrututra de decisao dupla para avaliar se o valor que estiver a percorrer é positivo ou negativo
//		if (notas[i] < 0) {
//			negativos++; //negativos = negativos + 1;
//		}
//		else {
//			positivos++; //positivis = positivos +1;
//		}
//
//	}
//	//mostrar quantos positivos e negativos detetou
//	printf("Numero de positivos: %d e negativos: %d", positivos, negativos);
//}
//void exercicio4(){
//	//criacao do vetor inteiro com 5 elementos
//	int valores[5];
//
//	//estrutura de repeticao para inserir valores no vetor
//	for (int x = 0; x < 5; x++) {
//		//declaracao de variavel só para correr dentro do FOR
//		int valor = 0;
//
//		//estrutura de repeticao do...while ue vai servir para verificar se os numeros são != de 1
//		do {
//			printf("Insira o valor para o indice %d: ", x);
//			scanf("%d", &valor);
//		} while (valor == 1);
//
//		//só depois de ultrapassar a condição do do...while é que vamos assumir o novo valor no vetor, ou seja, o valor introduzido foi diferente de 1
//		valores[x] = valor;
//	}
//	//estrutura de repeticao para ler os valores do vetor
//	for (int x = 0; x < 5; x++) {
//		printf("Valor do indice %d: %d \n ", x, valores[x]);
//	}
//}
//
//void exercicio5() {
//	//declaracao do vetor com 5 elemntos
//	int numeros[5];
//
//	//estrutura de repeticao FOR para inserir valores no vetor
//	for (int i = 0; i < 5; i++) {
//		printf("Insira o valor do indice %d: \n", i);
//		scanf("%d", &numeros[i]);
//	}
//	//estrutura de repeticao FOR para ler os valores
//	for (int i = 0; i < 5; i++) {
//		printf("Valor do indice %d; %d \n",i, numeros[i]);
//
//		//estrutura de decisao si ples paa verificar se o elemento do indice tem o valor 5
//		if (numeros[i] == 5) {
//			printf("Este indice tem o valor 5! \n");
//		}
//	}
//}
//
//// Função para verificar se existe um número igual no vetor
//int verifica_numeros(int vetor[5], int valor, int tamanho) {
//	for (int i = 0; i < tamanho; i++) {
//		if (vetor[i] == valor) {
//			return 1; // número repetido
//		}
//	}
//	return 0; // nenhum repetido
//}
//
//// Procedimento para calcular média
//void calcula_media(int vetor[5]) {
//	float soma = 0;
//	for (int i = 0; i < 5; i++) {
//		soma = soma + vetor[i];
//	}
//	printf("Media dos numeros no vetor: %.2f\n", soma / 5);
//}
//
//void exercicio6() {
//	int vetor[5];
//	int valor;
//
//	for (int i = 0; i < 5; i++) {
//		do {
//			printf("Insira o valor do indice %d: ", i);
//			scanf("%d", &valor);
//		} while (verifica_numeros(vetor, valor, i) == 1);
//
//		// só guarda no vetor depois de validar
//		vetor[i] = valor;
//	}
//
//	calcula_media(vetor);
//}
//
//void exercicio7() {
//	//declarar um array multidimensional (matriz) - matriz é composta por linhas e colunas
//	int matriz[3][3];
//	 
//	//por se tratar de uma matriz, precisamos de 2 estruturas de repeticao (FOR)
//	for (int i = 0; i < 3; i++) {   // percorre as linhas da matriz
//		for (int j = 0; j < 3; j++) {  // percorre as colunas da linha que esta a processar
//			printf("Insira o valor da linha %d e da coluna %d: ", i, j);
//			scanf("%d", &matriz[i][j]);
//
//		}
//	}
//	//ler valores da matriz
//	for (int i = 0; i < 3; i++) {   // percorre as linhas da matriz
//		for (int j = 0; j < 3; j++) {  // percorre as colunas da linha que esta a processar
//			printf("Valor na linha %d e coluna %d: %d \n",i,j, matriz[i][j]); //o 1º %d se refere ao i(linha), o 2º %d se refere ao j(coluna) e o 3º %d se refere a matriz
//		}
//	}
//}
//
//void main() {
//	//exercicio1(); //inserir numeros no vetor de forma manual
//	//exercicio2(); //percorrer e preencher o vetor de forma automatica
//	//exercicio3(); //programa que le um vetor com 6 números decimais e mostre a quantidade de números negativos e a quntidade dos números positivos desse vetor.
//	//exercicio4(); //programa para introduzir uma sequência de 5 números num vetor, (ignorando os valores iguais a 1), e de seguida, calcula a soma desses números. No final mostre os dados do vetor
//	//exercicio5(); //programa para introduzir uma sequência de 5 números num vetor. De seguida, deve percorrer o vetor com os valores inseridos e verificar se existe o número 5.
//	//exercicio6(); //programa semalhante ao anterior porem: Não deverá introduzir números iguais dentro do vetor; Se existir, deve pedir um novo número ao utilizador; Senão, o programa deve inserir o novo valor no vetor
//					//No final da inserção de valores no vetor, deve colocar o processo de cálculo da média num procedimento(onde deve receber como parâmetro de entrada o vetor de dados) e mostrar
//					//qual foi a mensagem com a média dos números introduzidos.
//	exercicio7();
//}
//
