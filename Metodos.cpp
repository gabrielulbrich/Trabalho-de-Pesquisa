//implementação dos métodos
#include <stdio.h>
#include <stdlib.h>
#include "Metodos.h"
#include <locale.h>

//Declaração de variáveis
Registro aluno[4];
int M[4][8];
int n;	
int comp=0;
int mov=0;
int a=0;



void inserirNumeros(){
	printf("Insira a quantidade de alunos que deseja cadastrar:");
	scanf("%d",&a);
	system("cls");
	if((a<=4)&&(a>0)){
		a=a-1;
		printf("Insira a quantidade de numeros que deseja inserir para a matricula:");
		scanf("%d",&n);
		system("cls");
		if((n<=8)&&(n>0)){
			for(int k=0;k<=a;k++){
				printf("Insira o nome do aluno:");
				scanf("%s",&aluno[k].nome);
				printf("Insira a matricula:");
				for(int i=0;i<=n-1;i++){
					scanf("%d",&aluno[k].matricula[i]);
					M[k][i]=aluno[k].matricula[i];
				}
				system("cls");
			}
		}else{
			printf("Erro, insira a quantidade de números menor que 9");
			exit(1);
		}
	}else{
		printf("A quantidade de alunos não pode ser superior a 4 nem inferior 1");
		exit(1);
	}
}

void bubbleSort(){
	for(int k=0;k<=a;k++){
		for(int i=0;i<=n-1;i++){
			for(int j=0;j<=n-1;j++){
				comp+=1;
				if(aluno[k].matricula[j]>aluno[k].matricula[j+1]){
					mov+=1;
					int aux;
					aux=aluno[k].matricula[j];
					aluno[k].matricula[j]=aluno[k].matricula[j+1];
					aluno[k].matricula[j+1]=aux;
				}
			}
		}	
	}
	printf("%8d,%d",comp,mov);
}
void selectionSort(){
	for(int k=0;k<=a;k++){
		int min;
		for(int i=0;i<=n-1;i++){
			min=i;
			for(int j=i+1;j<=n-1;j++){
				comp+=1;
				 if(aluno[k].matricula[j] < aluno[k].matricula[min]){
					min=j;
				}
			}
			if(aluno[k].matricula[i] != aluno[k].matricula[min]){
				mov+=1;
				int aux;
				aux=aluno[k].matricula[i];
				aluno[k].matricula[i]=aluno[k].matricula[min];
				aluno[k].matricula[min]=aux;
			}
		}
    }
    printf("%8d,%d",comp,mov);
}
void insertionSort(){
	for(int k=0;k<=a;k++){
		int chave;
		int j=0;
		for(int i=1;i<=n-1;i++){
			comp+=1;
			chave=aluno[k].matricula[i];
			j=i-1;
			while((j>=0) &&  (aluno[k].matricula[j]>chave)){
				mov+=1;
				aluno[k].matricula[j+1]=aluno[k].matricula[j];
				j=j-1;
			}
			aluno[k].matricula[j+1]=chave;
		}
	}
	printf("%8d,%d",comp,mov);
}
void recursaoQuickSort(int ini,int fim,int k){
		int i=ini;
		int j=fim;
		int pivo = aluno[k].matricula[(ini+fim)/2];
		while(i < j){
			while(aluno[k].matricula[i] < pivo){
				i++;
			}
			while(aluno[k].matricula[j]>pivo){
				j++;
			}
			if(i<=j){
				int aux;
				aux=aluno[k].matricula[i];
				aluno[k].matricula[i]=aluno[k].matricula[j];
				aluno[k].matricula[j]=aux;
				i++;
				j--;
			}
		}
		if(ini<j){
			recursaoQuickSort(ini,j,k);
		}
		if(i<fim){
			recursaoQuickSort(i,fim,k);
		}
}
void quickSort(){
	for(int k=0;k<=a;k++){
		int ini=0;
		int fim=n-1;
		int i=ini;
		int j=fim;
		int pivo = aluno[k].matricula[(ini+fim)/2];
		while(i < j){
			while(aluno[k].matricula[i] < pivo){
				i++;
			}
			while(aluno[k].matricula[j]>pivo){
				j++;
			}
			comp++;
			if(i<=j){
				mov++;
				int aux;
				aux=aluno[k].matricula[i];
				aluno[k].matricula[i]=aluno[k].matricula[j];
				aluno[k].matricula[j]=aux;
				i++;
				j--;
			}
		}
		if(ini<j){
			recursaoQuickSort(ini,j,k);
		}
		if(i<fim){
			recursaoQuickSort(i,fim,k);
		}
	}
	printf("%8d,%d", comp, mov);
}
void intercala(int ini,int q ,int fim,int y){
	int B[8];
	for(int i=ini;ini<=q;i++){
		B[i]=aluno[y].matricula[i];
	}
	for(int j=q+1;j<=fim;j++){
		B[fim+q+1-j]=aluno[y].matricula[j];
	}
	int i=ini;
	int j=fim;
	for(int k=ini;k<=fim;k++){
		comp++;
		if(B[i]<=B[j]){
			mov++;
			aluno[y].matricula[k]=B[i];
			i++;
		}else{
			mov++;
			aluno[y].matricula[k]=B[j];
			j--;
		}
	}
}
void mergeSortRecursao(int ini,int fim,int y){
	if(ini<fim){
		int q = (ini+fim)/2;
		mergeSortRecursao(ini, q, y);
		mergeSortRecursao(q+1, fim, y);
		intercala(ini,q,fim,y);
	}
}
void mergeSort(){
	for(int y=0;y<=a;y++){
		int ini=0;
		int fim=n-1;
		if(ini<fim){
			int q = (ini+fim)/2;
			mergeSortRecursao(ini, fim, y);
			mergeSortRecursao(q+1, fim, y);
			intercala(ini,q,fim,y);
		}	
	}
	printf("%8d,%d",comp,mov);
}
void imprimir(){
	for(int k=0;k<=a;k++){
		printf("       %s ",aluno[k].nome);
		printf("Matricula: ");
		for(int i=0;i<=n-1;i++){
			printf("%d ", aluno[k].matricula[i]);
		}
		printf("\n");
	}
}
void resetVetor(){
	for(int k=0;k<=a;k++){
		for(int i=0;i<=n-1;i++){
		aluno[k].matricula[i]=M[k][i];	
		}
		comp=0;
		mov=0;
	}
}
