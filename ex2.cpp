//fça um programa que receba as idades de 10 pessoas e armazene em um vetor. Mostre as idades em ordem decrescente.

#include <stdio.h>
#include <locale.h>

void mostrar_vetor(int num[], int tam){
	for(int i=0; i<tam; i++){
		printf("%d\n", num[i]);
	}
	printf("\n");
}

void selection_sort(int num[], int tam){
	int i, j, min, aux;
	for(i=0; i<tam; i++){
		min = i;
		for(j = (i+1); j<tam; j++){
			if(num[j]>num[min]){
				min = j;
			}
		}
		
		if(i!= min){
			aux = num[i];
			num[i] = num[min];
			num[min] = aux;
		}
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Receba 10 idades e ordene em ordem decrescente\n\n");
	
	int idade[10];
	
	for(int i=0; i<10; i++){
		printf("Digite a %dº idade: ", i+1);
		scanf("%d", &idade[i]);
	}
	
	selection_sort(idade, 10);
	mostrar_vetor(idade, 10);
		
	return 0;
}
