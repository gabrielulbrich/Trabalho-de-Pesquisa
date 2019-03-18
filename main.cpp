#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include "Metodos.h"

#define TAM 5

REGISTROS registroA[TAM] = {{0 , "teste0"},{1 , "teste1"},{2 , "teste2"},{3 , "teste3"},{4 , "teste4"}}; //ORDENADO
REGISTROS registroB[TAM] = {{4 , "teste0"},{3 , "teste1"},{2 , "teste2"},{1 , "teste3"},{0 , "teste4"}}; //ORDENADO INVERSAMENTE
REGISTROS registroC[TAM] = {{0 , "teste0"},{0 , "teste1"},{0 , "teste2"},{0 , "teste3"},{0 , "teste4"}}; //ALEATORIOS SEM RPETIÇÃO
REGISTROS registroD[TAM] = {{0 , "teste0"},{0 , "teste1"},{0 , "teste2"},{0 , "teste3"},{0 , "teste4"}}; //ALEATORIOS COM REPETIÇÃO

int initVetores();
int imprimirVetores(REGISTROS a[TAM], REGISTROS b[TAM], REGISTROS c[TAM], REGISTROS d[TAM]);
int vetorSemRepeticao(REGISTROS c[TAM]);
int vetorComRepeticao(REGISTROS d[TAM]);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	setlocale(LC_ALL,"Portuguese");
	
	initVetores();
	imprimirVetores(registroA, registroB, registroC, registroD);  
	
/*	char opcao;
	do{
		system("cls");
		inserirNumeros();
		printf("            Melhor caso       Pior caso     Caso médio s.r     Caso médio c.r");
		printf("\nBubble");
		bubbleSort();
		resetVetor();
		printf("\nSelection");
		selectionSort();
		resetVetor();
		printf("\nInsertion");
		insertionSort();
		resetVetor();
		printf("\nQuick");
		quickSort();
		resetVetor();
		printf("\nMerge");
		mergeSort();
		resetVetor();
		
		
		printf("\n\n-------------------Prova Real--------------------\n\n");
		bubbleSort();
		imprimir();
		resetVetor();
		selectionSort();
		imprimir();
		resetVetor();
		insertionSort();
		imprimir();
		resetVetor();
		quickSort();
		imprimir();
		resetVetor();
		mergeSort();
		imprimir();
		resetVetor();
		
		
		
		printf("\n\nDeseja executar o programa mais uma vez(S ou N)?\n");
		scanf("%s",&opcao);
		setbuf(stdin,NULL);
	}while((opcao!='n')&&(opcao!='N'));*/
}

int initVetores()
{
    vetorSemRepeticao(registroC);
	vetorComRepeticao(registroD);	     
}

int imprimirVetores(REGISTROS a[TAM], REGISTROS b[TAM], REGISTROS c[TAM],  REGISTROS d[TAM])
{
int j;
	printf("\n VETOR A: \n");
	for(j=0; j<TAM ; j++){
    	printf ("ID: %d    Nome: %s\n",a[j].matricula, a[j].nome);
    	//printf ("ID: %d    Nome: %s\n",registroC[i].matricula, registroC[i].nome);
	} 
	printf("\n VETOR B: \n");
	for(j=0; j<TAM ; j++){
    	printf ("ID: %d    Nome: %s\n",b[j].matricula, b[j].nome);
    	//printf ("ID: %d    Nome: %s\n",registroC[i].matricula, registroC[i].nome);
	} 
	printf("\n VETOR C: \n");
	for(j=0; j<TAM ; j++){
    	printf ("ID: %d    Nome: %s\n",c[j].matricula, c[j].nome);
    	//printf ("ID: %d    Nome: %s\n",registroC[i].matricula, registroC[i].nome);
	} 
	printf("\n VETOR D: \n");
	for(j=0; j<TAM ; j++){
    	printf ("ID: %d    Nome: %s\n",d[j].matricula, d[j].nome);
    	//printf ("ID: %d    Nome: %s\n",registroC[i].matricula, registroC[i].nome);
	} 
}

int vetorSemRepeticao(REGISTROS c[TAM])
{
	int i,j;
	srand(time(NULL));
	for(i=0; i< TAM ; i++){
		c[i].matricula = rand() % TAM;
		for (j=0; j<i ; j++){
			if (c[i].matricula == c[j].matricula){
				c[i].matricula = rand() % 20;
				j = 0; //se for repetido, repete o loop novamente
			}
		}
	}
return 1;
}

int vetorComRepeticao(REGISTROS d[TAM]) //AJUSTAR FUNCAO
{
	int i,j;
	srand(time(NULL));
	for(i=0; i< TAM ; i++){
		d[i].matricula = rand() % TAM;
		for (j=0; j<i ; j++){
			if (d[i].matricula == d[j].matricula){
				d[i].matricula = rand() % 20;
				j = 0; //se for repetido, repete o loop novamente
			}
		}
	}
return 1;
}

