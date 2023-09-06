// Exercicio 05 - Criar um programa em linguagem C que converta um numero decimal de 0 a 15 em numero binario.

#include<stdio.h>
#include<windows.h>
#include<math.h>

int main() {

	system("cls"); 

	int decimal, vet_bin[4], i=0, j;

	printf("Insira um numero entre 0 e 15: \n");
	scanf("%d", &decimal);

	while(decimal > 0) {
		vet_bin[i] = decimal % 2;
		i++; decimal /= 2;
	}

	for(j = i-1; j >= 0; j--)
		printf("%d", vet_bin[j]);

	return 0;
}
