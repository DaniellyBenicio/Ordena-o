//Faça um programa que receba as idades de 10 pessoas e armazene em um vetor. Mostre as idades em ordem decrescente. Use ordenação por inserção. 

#include <stdio.h>
#include <locale.h>

void mostrar_vetor(int num[], int tam);

void insertion_sort(int num[], int tam);

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Receba 10 idades e ordene de forma decrescente\n\n");
	
	int idade[10];
	
	for(int i=0; i<10; i++){
		printf("Digite a %dº idade: ", i+1);
		scanf("%d", &idade[i]);
	}
	
	insertion_sort(idade, 10);
	mostrar_vetor(idade, 10);
		
	return 0;
}

void mostrar_vetor(int num[], int tam){
	for(int i=0; i<tam; i++){
		printf("%d\n", num[i]);
	}
	printf("\n");
}

void insertion_sort(int num[], int tam){
	int j, aux;
	for(int i=0; i<tam; i++){
		j = i;
		
		while((j!= 0) && (num[j]>num[j-1])){
			aux = num[j];
			num[j] = num[j-1];
			num[j-1] = aux;
			j--;
		}
	}
}
