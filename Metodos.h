//Métodos para a implementação das Ordenações

#define TAM 5

typedef struct{
	int matricula;
	char nome[20];	
}REGISTROS;

void inserirNumeros();
void bubbleSort();
void selectionSort();
void insertionSort();
void recursaoQuickSort(int ini, int fim,int k);
void quickSort();
void intercala(int ini, int q, int fim, int y);
void mergeSortRecursao(int ini, int fim , int y);
void mergeSort();
void intercala();
void imprimir();
void salvaVetor();
void resetVetor();
