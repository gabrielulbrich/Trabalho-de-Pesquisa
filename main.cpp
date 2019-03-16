#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Metodos.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	char opcao;
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
	}while((opcao!='n')&&(opcao!='N'));
}
