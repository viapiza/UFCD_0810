//// instru��o para permitir ultrapassar a mensagem de erro
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
//
//
//void exercicio1() {
//	//declaracao de um vetor com 4 elementos
//	int flores[4];
//
//	//estrutura de repeticao
//	for (int i = 0; i < 4; i++) {
//		//mostrar a mensagem do indice que esta a percorrer atualmente
//		printf(" Insira a quantidade de flores  por tipo %d: \n", i);
//		//ler o valor do teclado e colocar no indice do vetor atual
//		scanf("%d", &flores[i]);
//	}
//
//	//ler o vetor e mostrar os valores dos indices
//	for (int i = 0; i < 4; i++) {
//		printf("Quantidade de flores por tipo %d: %d \n", i, flores[i]); 
//	}
//}
//
//void exercicio2() {
//	//criacao de vetor decimais com 5 elementos
//	int pessoas[5];
//
//	//declar�cao de variaveis
//	int pares = 0;
//	int impares = 0;
//
//	//estrutura de repeticao FOR para pedir os valores decimais
//	for (int i = 0; i < 5; i++) {
//		printf("Insira a quantidade de pessoas na mesa %d: \n", i);
//
//		//pedir valor decimal ao utilizador para armazenar no vetor
//		scanf("%d", &pessoas[i]);
//	}
//	//estrutura de repeticao par ler os valores do vetor
//	for (int i = 0; i < 5; i++) {
//		//estrututra de decisao dupla para avaliar se o valor que estiver a percorrer � par ou impar
//		if (pessoas[i] % 2 == 0) {
//			pares++; 
//		}
//		else {
//			impares++; 
//		}
//
//	}
//	//mostrar quantos positivos e negativos detetou
//	printf("Quantidade de mesas pares: %d. Quantidade de mesas impares: %d \n", pares, impares);
//}
//
//void exercicio3() {
//	//declaracao do vetor com 6 elemntos
//	int formigas[6];
//
//	//estrutura de repeticao FOR para inserir valores no vetor
//	for (int i = 0; i < 6; i++) {
//		printf("Insira a quantidade de formigas  na amostra %d: \n", i);
//		scanf("%d", &formigas[i]);
//	}
//	//estrutura de repeticao FOR para ler os valores
//	for (int i = 0; i < 6; i++) {
//		printf("Amostra %d; %d \n", i, formigas[i]);
//
//		//estrutura de decisao simples paa verificar se o elemento do indice tem o valor 7
//		if (formigas[i] == 7) {
//			printf("Esta amostra possui 7 formigas! \n");
//		}
//	}
//}
//
//void main() {
//	//exercicio1();    //Introduzir 4 n�meros inteiros num vetor, do qual, deve pedir ao utilizador para inserir os n�meros com uma estrutura de repeti��o FOR;
//	                  //De seguida, deve ler o vetor com outra estrutura de repeti��o FOR
//					  
//	//exercicio2();   //Introduzir 5 n�meros inteiros num vetor, do qual, deve pedir ao utilizador para inserir os n�meros com uma estrutura de repeti��o FOR;
//			         //De seguida, deve ler o vetor com outra estrutura de repeti��o FOR, deve mostrar a quantidade de n�meros pares e a quantidade dos n�meros �mpares.
//					 
//	//exercicio3();  //Introduzir uma sequ�ncia de 6 n�meros inteiros num vetor, do qual, deve pedir ao utilizador para inserir os n�meros com uma estrutura de repeti��o FOR;
//	                //De seguida, deve perguntar ao utilizador qual o n�mero que deseja procurar no vetor;
//	               //Por �ltimo, deve percorrer o vetor com outra estrutura de repeti��o FOR e verificar, se existe o n�mero inserido pelo utilizador no passo anterior.
//				  // Se encontrar, deve mostrar uma mensagem e indicar o �ndice que est� a percorrer.
//
//}
//
//
