/* Exercicio 15 - Crie um programa em C que receba do usuário dois números,
calcule e mostre o dobro e o triplo do primeiro numero,
e o produto do primeiro pelo segundo numero. */

#include<stdio.h>
#include<windows.h>

main(){
	system("cls");
	
	float num1, num2, dobro, triplo, produto;
	
	printf("Insira o primeiro numero: \n");
	scanf("%f", &num1);
	
	printf("Insira o segundo numero: \n");
	scanf("%f", &num2);
	
	dobro = num1 * 2;
	triplo = num1 * 3;
	produto = num1 * num2;

	printf("Dobro do primeiro numero: %.2f \n", dobro);
	printf("Triplo do primeiro numero: %.2f \n", triplo);
	printf("Produto entre o primeiro e o segundo numero: %.2f", produto);
}
